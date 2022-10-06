
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#if defined(HAVE_QT)

#include "layPropertiesDialog.h"

#include "tlLog.h"
#include "layEditable.h"
#include "layProperties.h"
#include "tlExceptions.h"

#include "ui_PropertiesDialog.h"

#include <QStackedLayout>

namespace lay
{

PropertiesDialog::PropertiesDialog (QWidget * /*parent*/, db::Manager *manager, lay::Editables *editables)
  : QDialog (0 /*parent*/),
    mp_manager (manager), mp_editables (editables), m_index (-1), m_object_index (0), m_auto_applied (false), m_transaction_id (0)
{
  mp_ui = new Ui::PropertiesDialog ();

  setObjectName (QString::fromUtf8 ("properties_dialog"));
  mp_ui->setupUi (this);

  mp_editables->enable_edits (false);

  mp_stack = new QStackedLayout;

  for (lay::Editables::iterator e = mp_editables->begin (); e != mp_editables->end (); ++e) {
    mp_properties_pages.push_back (e->properties_page (mp_manager, mp_ui->content_frame));
    if (mp_properties_pages.back ()) {
      mp_stack->addWidget (mp_properties_pages.back ());
      connect (mp_properties_pages.back (), SIGNAL (edited ()), this, SLOT (apply ()));
    }
  }

  //  Necessary to maintain the page order for UI regression testing of 0.18 vs. 0.19 (because tl::Collection has changed to order) ..
  std::reverse (mp_properties_pages.begin (), mp_properties_pages.end ());

  //  Add a label as a dummy 
  QLabel *dummy = new QLabel (QObject::tr ("No object with properties to display"), mp_ui->content_frame);
  dummy->setAlignment (Qt::AlignHCenter | Qt::AlignVCenter);
  mp_stack->addWidget (dummy);

  mp_ui->content_frame->setLayout (mp_stack);

  //  disable the apply button for first ..
  mp_ui->apply_to_all_cbx->setEnabled (false);
  mp_ui->relative_cbx->setEnabled (false);
  mp_ui->ok_button->setEnabled (false);

  //  as a proposal, the start button can be enabled in most cases
  mp_ui->prev_button->setEnabled (true);

  //  count the total number of objects
  m_objects = mp_editables->selection_size ();
  m_current_object = 0;

  update_title ();

  //  look for next usable editable 
  while (m_index < int (mp_properties_pages.size ()) && 
         (m_index < 0 || mp_properties_pages [m_index] == 0 || m_object_index >= int (mp_properties_pages [m_index]->count ()))) {
    ++m_index;
  }

  mp_ui->prev_button->setEnabled (false);

  //  if at end disable the "Next" button and return (this may only happen at the first call)
  if (m_index >= int (mp_properties_pages.size ())) {

    mp_ui->next_button->setEnabled (false);
    mp_stack->setCurrentWidget (dummy);
    mp_ui->apply_to_all_cbx->setEnabled (false);
    mp_ui->apply_to_all_cbx->setChecked (false);
    mp_ui->relative_cbx->setEnabled (false);
    mp_ui->relative_cbx->setChecked (false);
    mp_ui->ok_button->setEnabled (false);

  } else {

    mp_ui->next_button->setEnabled (any_next ());
    mp_stack->setCurrentWidget (mp_properties_pages [m_index]);
    mp_properties_pages [m_index]->select_entry (m_object_index);
    mp_properties_pages [m_index]->update ();
    mp_ui->apply_to_all_cbx->setEnabled (! mp_properties_pages [m_index]->readonly () && mp_properties_pages [m_index]->can_apply_to_all ());
    mp_ui->apply_to_all_cbx->setChecked (false);
    mp_ui->relative_cbx->setEnabled (mp_ui->apply_to_all_cbx->isEnabled () && mp_ui->apply_to_all_cbx->isChecked ());
    mp_ui->relative_cbx->setChecked (true);
    mp_ui->ok_button->setEnabled (! mp_properties_pages [m_index]->readonly ());

  }

  connect (mp_ui->ok_button, SIGNAL (clicked ()), this, SLOT (ok_pressed ()));
  connect (mp_ui->cancel_button, SIGNAL (clicked ()), this, SLOT (cancel_pressed ()));
  connect (mp_ui->prev_button, SIGNAL (clicked ()), this, SLOT (prev_pressed ()));
  connect (mp_ui->next_button, SIGNAL (clicked ()), this, SLOT (next_pressed ()));
}

PropertiesDialog::~PropertiesDialog ()
{
  delete mp_ui;
  mp_ui = 0;

  disconnect ();
}

void 
PropertiesDialog::disconnect ()
{
  mp_editables->enable_edits (true);
  
  for (std::vector <lay::PropertiesPage *>::iterator p = mp_properties_pages.begin (); p != mp_properties_pages.end (); ++p) {
    delete *p;
  }
  mp_properties_pages.clear ();
}

void 
PropertiesDialog::next_pressed ()
{
BEGIN_PROTECTED

  if (! mp_properties_pages [m_index]->readonly ()) {
    db::Transaction t (mp_manager, tl::to_string (QObject::tr ("Apply changes")), m_transaction_id);
    mp_properties_pages [m_index]->apply ();
    if (! t.is_empty ()) {
      m_transaction_id = t.id ();
    }
  }

  //  advance the current entry
  ++m_object_index;

  //  look for next usable editable if at end
  if (m_object_index >= int (mp_properties_pages [m_index]->count ())) {

    mp_properties_pages [m_index]->leave ();
    ++m_index;
    m_object_index = 0;

    while (m_index < int (mp_properties_pages.size ()) && 
           (mp_properties_pages [m_index] == 0 || mp_properties_pages [m_index]->count () == 0)) {
      ++m_index;
    }
    //  because we checked that there are any further elements, this should not happen:
    if (m_index >= int (mp_properties_pages.size ())) {
      return;
    }

    mp_stack->setCurrentWidget (mp_properties_pages [m_index]);

  }

  ++m_current_object;
  update_title ();

  mp_ui->prev_button->setEnabled (true);
  mp_ui->next_button->setEnabled (any_next ());
  mp_ui->apply_to_all_cbx->setEnabled (! mp_properties_pages [m_index]->readonly () && mp_properties_pages [m_index]->can_apply_to_all ());
  mp_ui->relative_cbx->setEnabled (mp_ui->apply_to_all_cbx->isEnabled () && mp_ui->apply_to_all_cbx->isChecked ());
  mp_ui->ok_button->setEnabled (! mp_properties_pages [m_index]->readonly ());
  mp_properties_pages [m_index]->select_entry (m_object_index);
  mp_properties_pages [m_index]->update ();

END_PROTECTED
}

void 
PropertiesDialog::prev_pressed ()
{
BEGIN_PROTECTED

  if (! mp_properties_pages [m_index]->readonly ()) {
    db::Transaction t (mp_manager, tl::to_string (QObject::tr ("Apply changes")), m_transaction_id);
    mp_properties_pages [m_index]->apply ();
    if (! t.is_empty ()) {
      m_transaction_id = t.id ();
    }
  }

  if (m_object_index == 0) {

    //  look for last usable editable if at end
    mp_properties_pages [m_index]->leave ();
    --m_index;
    while (m_index >= 0 && 
           (mp_properties_pages [m_index] == 0 || mp_properties_pages [m_index]->count () == 0)) {
      --m_index;
    }
    //  because we checked that there are any further elements, this should not happen:
    if (m_index < 0) {
      return;
    }

    m_object_index = mp_properties_pages [m_index]->count () - 1;

    mp_stack->setCurrentWidget (mp_properties_pages [m_index]);

  } 

  //  decrement the current entry
  --m_object_index;

  --m_current_object;
  update_title ();

  mp_ui->next_button->setEnabled (true);
  mp_ui->prev_button->setEnabled (any_prev ());
  mp_ui->apply_to_all_cbx->setEnabled (! mp_properties_pages [m_index]->readonly () && mp_properties_pages [m_index]->can_apply_to_all ());
  mp_ui->relative_cbx->setEnabled (mp_ui->apply_to_all_cbx->isEnabled () && mp_ui->apply_to_all_cbx->isChecked ());
  mp_ui->ok_button->setEnabled (! mp_properties_pages [m_index]->readonly ());
  mp_properties_pages [m_index]->select_entry (m_object_index);
  mp_properties_pages [m_index]->update ();

END_PROTECTED
}

void
PropertiesDialog::update_title ()
{
  setWindowTitle (tl::to_qstring (tl::to_string (QObject::tr ("Object Properties - ")) + tl::to_string (m_current_object + 1) + tl::to_string (QObject::tr (" of ")) + tl::to_string (m_objects)));
}

bool
PropertiesDialog::any_next () const
{
  //  look for the next applicable page
  //  @@@ Pages should not be empty
  int index = m_index;
  if (m_object_index + 1 >= int (mp_properties_pages [index]->count ())) {
    ++index;
    while (index < int (mp_properties_pages.size ()) &&
           (mp_properties_pages [index] == 0 || mp_properties_pages [index]->count () == 0)) {
      ++index;
    }
  }

  //  return true, if not at end
  return (index < int (mp_properties_pages.size ()));
}

bool
PropertiesDialog::any_prev () const
{
  //  look for the next applicable page
  //  @@@ Pages should not be empty
  int index = m_index;
  if (m_object_index == 0) {
    --index;
    while (index >= 0 && 
           (mp_properties_pages [index] == 0 || mp_properties_pages [index]->count () == 0)) {
      --index;
    }
  }

  //  return true, if not at the beginning
  return (index >= 0);
}

void
PropertiesDialog::apply ()
{
BEGIN_PROTECTED

  db::Transaction t (mp_manager, tl::to_string (QObject::tr ("Apply changes")), m_transaction_id);

  try {

    if (mp_ui->apply_to_all_cbx->isChecked () && mp_properties_pages [m_index]->can_apply_to_all ()) {
      mp_properties_pages [m_index]->apply_to_all (mp_ui->relative_cbx->isChecked ());
    } else {
      mp_properties_pages [m_index]->apply ();
    }
    mp_properties_pages [m_index]->update ();

  } catch (tl::Exception &) {
    //  we assume the page somehow indicates the error and does not apply the values
  }

  //  remember transaction ID for undo on "Cancel" unless nothing happened
  if (! t.is_empty ()) {
    m_transaction_id = t.id ();
  }

END_PROTECTED
}

void 
PropertiesDialog::cancel_pressed ()
{
  //  undo whatever we've done so far
  if (m_transaction_id > 0) {

    //  because undo does not maintain a valid selection we clear it
    mp_editables->clear_selection ();

    if (mp_manager->transaction_id_for_undo () == m_transaction_id) {
      mp_manager->undo ();
    }
    m_transaction_id = 0;

  }

  //  make sure that the property pages are no longer used ..
  disconnect ();
  //  close the dialog
  done (0);
}

void 
PropertiesDialog::ok_pressed ()
{
BEGIN_PROTECTED

  if (! mp_properties_pages [m_index]->readonly ()) {

    db::Transaction t (mp_manager, tl::to_string (QObject::tr ("Apply changes")), m_transaction_id);

    mp_properties_pages [m_index]->apply ();
    mp_properties_pages [m_index]->update ();

    if (! t.is_empty ()) {
      m_transaction_id = t.id ();
    }

  }

  //  make sure that the property pages are no longer used ..
  disconnect ();
  QDialog::accept ();

END_PROTECTED
}

void 
PropertiesDialog::reject ()
{
  //  make sure that the property pages are no longer used ..
  disconnect ();
  QDialog::reject ();
}

}

#endif


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

/**
*  @file gsiDeclQInputMethodQueryEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QInputMethodQueryEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QInputMethodQueryEvent

// QFlags<Qt::InputMethodQuery> QInputMethodQueryEvent::queries()


static void _init_f_queries_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::InputMethodQuery> > ();
}

static void _call_f_queries_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::InputMethodQuery> > ((QFlags<Qt::InputMethodQuery>)((QInputMethodQueryEvent *)cls)->queries ());
}


// void QInputMethodQueryEvent::setValue(Qt::InputMethodQuery query, const QVariant &value)


static void _init_f_setValue_4431 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setValue_4431 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethodQueryEvent *)cls)->setValue (qt_gsi::QtToCppAdaptor<Qt::InputMethodQuery>(arg1).cref(), arg2);
}


// QVariant QInputMethodQueryEvent::value(Qt::InputMethodQuery query)


static void _init_f_value_c2420 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_value_c2420 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::InputMethodQuery>::target_type & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QInputMethodQueryEvent *)cls)->value (qt_gsi::QtToCppAdaptor<Qt::InputMethodQuery>(arg1).cref()));
}


namespace gsi
{

static gsi::Methods methods_QInputMethodQueryEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("queries", "@brief Method QFlags<Qt::InputMethodQuery> QInputMethodQueryEvent::queries()\n", true, &_init_f_queries_c0, &_call_f_queries_c0);
  methods += new qt_gsi::GenericMethod ("setValue", "@brief Method void QInputMethodQueryEvent::setValue(Qt::InputMethodQuery query, const QVariant &value)\n", false, &_init_f_setValue_4431, &_call_f_setValue_4431);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QVariant QInputMethodQueryEvent::value(Qt::InputMethodQuery query)\n", true, &_init_f_value_c2420, &_call_f_value_c2420);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QInputMethodQueryEvent> decl_QInputMethodQueryEvent (qtdecl_QEvent (), "QtGui", "QInputMethodQueryEvent_Native",
  methods_QInputMethodQueryEvent (),
  "@hide\n@alias QInputMethodQueryEvent");

GSI_QTGUI_PUBLIC gsi::Class<QInputMethodQueryEvent> &qtdecl_QInputMethodQueryEvent () { return decl_QInputMethodQueryEvent; }

}


class QInputMethodQueryEvent_Adaptor : public QInputMethodQueryEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QInputMethodQueryEvent_Adaptor();

  //  [adaptor ctor] QInputMethodQueryEvent::QInputMethodQueryEvent(QFlags<Qt::InputMethodQuery> queries)
  QInputMethodQueryEvent_Adaptor(QFlags<Qt::InputMethodQuery> queries) : QInputMethodQueryEvent(queries)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QInputMethodQueryEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QInputMethodQueryEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QInputMethodQueryEvent_Adaptor, bool>(&QInputMethodQueryEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QInputMethodQueryEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QInputMethodQueryEvent_Adaptor::~QInputMethodQueryEvent_Adaptor() { }

//  Constructor QInputMethodQueryEvent::QInputMethodQueryEvent(QFlags<Qt::InputMethodQuery> queries) (adaptor class)

static void _init_ctor_QInputMethodQueryEvent_Adaptor_3116 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("queries");
  decl->add_arg<QFlags<Qt::InputMethodQuery> > (argspec_0);
  decl->set_return_new<QInputMethodQueryEvent_Adaptor> ();
}

static void _call_ctor_QInputMethodQueryEvent_Adaptor_3116 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::InputMethodQuery> arg1 = gsi::arg_reader<QFlags<Qt::InputMethodQuery> >() (args, heap);
  ret.write<QInputMethodQueryEvent_Adaptor *> (new QInputMethodQueryEvent_Adaptor (arg1));
}


// void QInputMethodQueryEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputMethodQueryEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputMethodQueryEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QInputMethodQueryEvent> &qtdecl_QInputMethodQueryEvent ();

static gsi::Methods methods_QInputMethodQueryEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputMethodQueryEvent::QInputMethodQueryEvent(QFlags<Qt::InputMethodQuery> queries)\nThis method creates an object of class QInputMethodQueryEvent.", &_init_ctor_QInputMethodQueryEvent_Adaptor_3116, &_call_ctor_QInputMethodQueryEvent_Adaptor_3116);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QInputMethodQueryEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QInputMethodQueryEvent_Adaptor> decl_QInputMethodQueryEvent_Adaptor (qtdecl_QInputMethodQueryEvent (), "QtGui", "QInputMethodQueryEvent",
  methods_QInputMethodQueryEvent_Adaptor (),
  "@qt\n@brief Binding of QInputMethodQueryEvent");

}


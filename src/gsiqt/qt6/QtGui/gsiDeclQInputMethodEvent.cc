
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2023 Matthias Koefferlein

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
*  @file gsiDeclQInputMethodEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QInputMethodEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QInputMethodEvent

namespace gsi
{

static gsi::Methods methods_QInputMethodEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QInputMethodEvent> decl_QInputMethodEvent (qtdecl_QEvent (), "QtGui", "QInputMethodEvent_Native",
  methods_QInputMethodEvent (),
  "@hide\n@alias QInputMethodEvent");

GSI_QTGUI_PUBLIC gsi::Class<QInputMethodEvent> &qtdecl_QInputMethodEvent () { return decl_QInputMethodEvent; }

}


class QInputMethodEvent_Adaptor : public QInputMethodEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QInputMethodEvent_Adaptor();

  //  [adaptor ctor] QInputMethodEvent::QInputMethodEvent()
  QInputMethodEvent_Adaptor() : QInputMethodEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QInputMethodEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QInputMethodEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QInputMethodEvent_Adaptor, bool>(&QInputMethodEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QInputMethodEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QInputMethodEvent_Adaptor::~QInputMethodEvent_Adaptor() { }

//  Constructor QInputMethodEvent::QInputMethodEvent() (adaptor class)

static void _init_ctor_QInputMethodEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QInputMethodEvent_Adaptor> ();
}

static void _call_ctor_QInputMethodEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QInputMethodEvent_Adaptor *> (new QInputMethodEvent_Adaptor ());
}


// void QInputMethodEvent::setAccepted(bool accepted)

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
  ((QInputMethodEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputMethodEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QInputMethodEvent> &qtdecl_QInputMethodEvent ();

static gsi::Methods methods_QInputMethodEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputMethodEvent::QInputMethodEvent()\nThis method creates an object of class QInputMethodEvent.", &_init_ctor_QInputMethodEvent_Adaptor_0, &_call_ctor_QInputMethodEvent_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QInputMethodEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QInputMethodEvent_Adaptor> decl_QInputMethodEvent_Adaptor (qtdecl_QInputMethodEvent (), "QtGui", "QInputMethodEvent",
  methods_QInputMethodEvent_Adaptor (),
  "@qt\n@brief Binding of QInputMethodEvent");

}



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
*  @file gsiDeclQIconDragEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIconDragEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIconDragEvent

namespace gsi
{

static gsi::Methods methods_QIconDragEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QIconDragEvent> decl_QIconDragEvent (qtdecl_QEvent (), "QtGui", "QIconDragEvent_Native",
  methods_QIconDragEvent (),
  "@hide\n@alias QIconDragEvent");

GSI_QTGUI_PUBLIC gsi::Class<QIconDragEvent> &qtdecl_QIconDragEvent () { return decl_QIconDragEvent; }

}


class QIconDragEvent_Adaptor : public QIconDragEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QIconDragEvent_Adaptor();

  //  [adaptor ctor] QIconDragEvent::QIconDragEvent()
  QIconDragEvent_Adaptor() : QIconDragEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QIconDragEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QIconDragEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QIconDragEvent_Adaptor, bool>(&QIconDragEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QIconDragEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QIconDragEvent_Adaptor::~QIconDragEvent_Adaptor() { }

//  Constructor QIconDragEvent::QIconDragEvent() (adaptor class)

static void _init_ctor_QIconDragEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QIconDragEvent_Adaptor> ();
}

static void _call_ctor_QIconDragEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIconDragEvent_Adaptor *> (new QIconDragEvent_Adaptor ());
}


// void QIconDragEvent::setAccepted(bool accepted)

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
  ((QIconDragEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconDragEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QIconDragEvent> &qtdecl_QIconDragEvent ();

static gsi::Methods methods_QIconDragEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIconDragEvent::QIconDragEvent()\nThis method creates an object of class QIconDragEvent.", &_init_ctor_QIconDragEvent_Adaptor_0, &_call_ctor_QIconDragEvent_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QIconDragEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QIconDragEvent_Adaptor> decl_QIconDragEvent_Adaptor (qtdecl_QIconDragEvent (), "QtGui", "QIconDragEvent",
  methods_QIconDragEvent_Adaptor (),
  "@qt\n@brief Binding of QIconDragEvent");

}


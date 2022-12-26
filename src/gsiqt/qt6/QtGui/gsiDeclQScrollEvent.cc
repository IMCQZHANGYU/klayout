
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
*  @file gsiDeclQScrollEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QScrollEvent>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QScrollEvent

// QPointF QScrollEvent::contentPos()


static void _init_f_contentPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_contentPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QScrollEvent *)cls)->contentPos ());
}


// QPointF QScrollEvent::overshootDistance()


static void _init_f_overshootDistance_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_overshootDistance_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QScrollEvent *)cls)->overshootDistance ());
}


// QScrollEvent::ScrollState QScrollEvent::scrollState()


static void _init_f_scrollState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QScrollEvent::ScrollState>::target_type > ();
}

static void _call_f_scrollState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QScrollEvent::ScrollState>::target_type > ((qt_gsi::Converter<QScrollEvent::ScrollState>::target_type)qt_gsi::CppToQtAdaptor<QScrollEvent::ScrollState>(((QScrollEvent *)cls)->scrollState ()));
}


namespace gsi
{

static gsi::Methods methods_QScrollEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("contentPos", "@brief Method QPointF QScrollEvent::contentPos()\n", true, &_init_f_contentPos_c0, &_call_f_contentPos_c0);
  methods += new qt_gsi::GenericMethod ("overshootDistance", "@brief Method QPointF QScrollEvent::overshootDistance()\n", true, &_init_f_overshootDistance_c0, &_call_f_overshootDistance_c0);
  methods += new qt_gsi::GenericMethod ("scrollState", "@brief Method QScrollEvent::ScrollState QScrollEvent::scrollState()\n", true, &_init_f_scrollState_c0, &_call_f_scrollState_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QScrollEvent> decl_QScrollEvent (qtdecl_QEvent (), "QtGui", "QScrollEvent_Native",
  methods_QScrollEvent (),
  "@hide\n@alias QScrollEvent");

GSI_QTGUI_PUBLIC gsi::Class<QScrollEvent> &qtdecl_QScrollEvent () { return decl_QScrollEvent; }

}


class QScrollEvent_Adaptor : public QScrollEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QScrollEvent_Adaptor();

  //  [adaptor ctor] QScrollEvent::QScrollEvent(const QPointF &contentPos, const QPointF &overshoot, QScrollEvent::ScrollState scrollState)
  QScrollEvent_Adaptor(const QPointF &contentPos, const QPointF &overshoot, QScrollEvent::ScrollState scrollState) : QScrollEvent(contentPos, overshoot, scrollState)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QScrollEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QScrollEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QScrollEvent_Adaptor, bool>(&QScrollEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QScrollEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QScrollEvent_Adaptor::~QScrollEvent_Adaptor() { }

//  Constructor QScrollEvent::QScrollEvent(const QPointF &contentPos, const QPointF &overshoot, QScrollEvent::ScrollState scrollState) (adaptor class)

static void _init_ctor_QScrollEvent_Adaptor_6662 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("contentPos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("overshoot");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("scrollState");
  decl->add_arg<const qt_gsi::Converter<QScrollEvent::ScrollState>::target_type & > (argspec_2);
  decl->set_return_new<QScrollEvent_Adaptor> ();
}

static void _call_ctor_QScrollEvent_Adaptor_6662 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const qt_gsi::Converter<QScrollEvent::ScrollState>::target_type & arg3 = gsi::arg_reader<const qt_gsi::Converter<QScrollEvent::ScrollState>::target_type & >() (args, heap);
  ret.write<QScrollEvent_Adaptor *> (new QScrollEvent_Adaptor (arg1, arg2, qt_gsi::QtToCppAdaptor<QScrollEvent::ScrollState>(arg3).cref()));
}


// void QScrollEvent::setAccepted(bool accepted)

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
  ((QScrollEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QScrollEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QScrollEvent> &qtdecl_QScrollEvent ();

static gsi::Methods methods_QScrollEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QScrollEvent::QScrollEvent(const QPointF &contentPos, const QPointF &overshoot, QScrollEvent::ScrollState scrollState)\nThis method creates an object of class QScrollEvent.", &_init_ctor_QScrollEvent_Adaptor_6662, &_call_ctor_QScrollEvent_Adaptor_6662);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QScrollEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QScrollEvent_Adaptor> decl_QScrollEvent_Adaptor (qtdecl_QScrollEvent (), "QtGui", "QScrollEvent",
  methods_QScrollEvent_Adaptor (),
  "@qt\n@brief Binding of QScrollEvent");

}


//  Implementation of the enum wrapper class for QScrollEvent::ScrollState
namespace qt_gsi
{

static gsi::Enum<QScrollEvent::ScrollState> decl_QScrollEvent_ScrollState_Enum ("QtGui", "QScrollEvent_ScrollState",
    gsi::enum_const ("ScrollStarted", QScrollEvent::ScrollStarted, "@brief Enum constant QScrollEvent::ScrollStarted") +
    gsi::enum_const ("ScrollUpdated", QScrollEvent::ScrollUpdated, "@brief Enum constant QScrollEvent::ScrollUpdated") +
    gsi::enum_const ("ScrollFinished", QScrollEvent::ScrollFinished, "@brief Enum constant QScrollEvent::ScrollFinished"),
  "@qt\n@brief This class represents the QScrollEvent::ScrollState enum");

static gsi::QFlagsClass<QScrollEvent::ScrollState > decl_QScrollEvent_ScrollState_Enums ("QtGui", "QScrollEvent_QFlags_ScrollState",
  "@qt\n@brief This class represents the QFlags<QScrollEvent::ScrollState> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QScrollEvent> inject_QScrollEvent_ScrollState_Enum_in_parent (decl_QScrollEvent_ScrollState_Enum.defs ());
static gsi::ClassExt<QScrollEvent> decl_QScrollEvent_ScrollState_Enum_as_child (decl_QScrollEvent_ScrollState_Enum, "ScrollState");
static gsi::ClassExt<QScrollEvent> decl_QScrollEvent_ScrollState_Enums_as_child (decl_QScrollEvent_ScrollState_Enums, "QFlags_ScrollState");

}


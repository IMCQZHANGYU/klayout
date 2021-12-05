
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQHelpEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHelpEvent>
#include <QEvent>
#include <QPoint>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHelpEvent

// const QPoint &QHelpEvent::globalPos()


static void _init_f_globalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_globalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QHelpEvent *)cls)->globalPos ());
}


// int QHelpEvent::globalX()


static void _init_f_globalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QHelpEvent *)cls)->globalX ());
}


// int QHelpEvent::globalY()


static void _init_f_globalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QHelpEvent *)cls)->globalY ());
}


// const QPoint &QHelpEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QHelpEvent *)cls)->pos ());
}


// int QHelpEvent::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QHelpEvent *)cls)->x ());
}


// int QHelpEvent::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QHelpEvent *)cls)->y ());
}


namespace gsi
{

static gsi::Methods methods_QHelpEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("globalPos", "@brief Method const QPoint &QHelpEvent::globalPos()\n", true, &_init_f_globalPos_c0, &_call_f_globalPos_c0);
  methods += new qt_gsi::GenericMethod ("globalX", "@brief Method int QHelpEvent::globalX()\n", true, &_init_f_globalX_c0, &_call_f_globalX_c0);
  methods += new qt_gsi::GenericMethod ("globalY", "@brief Method int QHelpEvent::globalY()\n", true, &_init_f_globalY_c0, &_call_f_globalY_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method const QPoint &QHelpEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("x", "@brief Method int QHelpEvent::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod ("y", "@brief Method int QHelpEvent::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QHelpEvent> decl_QHelpEvent (qtdecl_QEvent (), "QtGui", "QHelpEvent_Native",
  methods_QHelpEvent (),
  "@hide\n@alias QHelpEvent");

GSI_QTGUI_PUBLIC gsi::Class<QHelpEvent> &qtdecl_QHelpEvent () { return decl_QHelpEvent; }

}


class QHelpEvent_Adaptor : public QHelpEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QHelpEvent_Adaptor();

  //  [adaptor ctor] QHelpEvent::QHelpEvent(QEvent::Type type, const QPoint &pos, const QPoint &globalPos)
  QHelpEvent_Adaptor(QEvent::Type type, const QPoint &pos, const QPoint &globalPos) : QHelpEvent(type, pos, globalPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QHelpEvent_Adaptor::~QHelpEvent_Adaptor() { }

//  Constructor QHelpEvent::QHelpEvent(QEvent::Type type, const QPoint &pos, const QPoint &globalPos) (adaptor class)

static void _init_ctor_QHelpEvent_Adaptor_5181 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPoint & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("globalPos");
  decl->add_arg<const QPoint & > (argspec_2);
  decl->set_return_new<QHelpEvent_Adaptor> ();
}

static void _call_ctor_QHelpEvent_Adaptor_5181 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  const QPoint &arg2 = gsi::arg_reader<const QPoint & >() (args, heap);
  const QPoint &arg3 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QHelpEvent_Adaptor *> (new QHelpEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3));
}


namespace gsi
{

gsi::Class<QHelpEvent> &qtdecl_QHelpEvent ();

static gsi::Methods methods_QHelpEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHelpEvent::QHelpEvent(QEvent::Type type, const QPoint &pos, const QPoint &globalPos)\nThis method creates an object of class QHelpEvent.", &_init_ctor_QHelpEvent_Adaptor_5181, &_call_ctor_QHelpEvent_Adaptor_5181);
  return methods;
}

gsi::Class<QHelpEvent_Adaptor> decl_QHelpEvent_Adaptor (qtdecl_QHelpEvent (), "QtGui", "QHelpEvent",
  methods_QHelpEvent_Adaptor (),
  "@qt\n@brief Binding of QHelpEvent");

}


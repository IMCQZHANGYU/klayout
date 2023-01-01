
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
*  @file gsiDeclQGraphicsSceneEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsSceneEvent>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsSceneEvent

// void QGraphicsSceneEvent::setWidget(QWidget *widget)


static void _init_f_setWidget_1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("widget");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidget_1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneEvent *)cls)->setWidget (arg1);
}


// QWidget *QGraphicsSceneEvent::widget()


static void _init_f_widget_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_widget_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QGraphicsSceneEvent *)cls)->widget ());
}


namespace gsi
{

static gsi::Methods methods_QGraphicsSceneEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("setWidget|widget=", "@brief Method void QGraphicsSceneEvent::setWidget(QWidget *widget)\n", false, &_init_f_setWidget_1315, &_call_f_setWidget_1315);
  methods += new qt_gsi::GenericMethod (":widget", "@brief Method QWidget *QGraphicsSceneEvent::widget()\n", true, &_init_f_widget_c0, &_call_f_widget_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QGraphicsSceneEvent> decl_QGraphicsSceneEvent (qtdecl_QEvent (), "QtWidgets", "QGraphicsSceneEvent_Native",
  methods_QGraphicsSceneEvent (),
  "@hide\n@alias QGraphicsSceneEvent");

GSI_QTWIDGETS_PUBLIC gsi::Class<QGraphicsSceneEvent> &qtdecl_QGraphicsSceneEvent () { return decl_QGraphicsSceneEvent; }

}


class QGraphicsSceneEvent_Adaptor : public QGraphicsSceneEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsSceneEvent_Adaptor();

  //  [adaptor ctor] QGraphicsSceneEvent::QGraphicsSceneEvent(QEvent::Type type)
  QGraphicsSceneEvent_Adaptor(QEvent::Type type) : QGraphicsSceneEvent(type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QGraphicsSceneEvent_Adaptor::~QGraphicsSceneEvent_Adaptor() { }

//  Constructor QGraphicsSceneEvent::QGraphicsSceneEvent(QEvent::Type type) (adaptor class)

static void _init_ctor_QGraphicsSceneEvent_Adaptor_1565 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  decl->set_return_new<QGraphicsSceneEvent_Adaptor> ();
}

static void _call_ctor_QGraphicsSceneEvent_Adaptor_1565 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  ret.write<QGraphicsSceneEvent_Adaptor *> (new QGraphicsSceneEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref()));
}


namespace gsi
{

gsi::Class<QGraphicsSceneEvent> &qtdecl_QGraphicsSceneEvent ();

static gsi::Methods methods_QGraphicsSceneEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsSceneEvent::QGraphicsSceneEvent(QEvent::Type type)\nThis method creates an object of class QGraphicsSceneEvent.", &_init_ctor_QGraphicsSceneEvent_Adaptor_1565, &_call_ctor_QGraphicsSceneEvent_Adaptor_1565);
  return methods;
}

gsi::Class<QGraphicsSceneEvent_Adaptor> decl_QGraphicsSceneEvent_Adaptor (qtdecl_QGraphicsSceneEvent (), "QtWidgets", "QGraphicsSceneEvent",
  methods_QGraphicsSceneEvent_Adaptor (),
  "@qt\n@brief Binding of QGraphicsSceneEvent");

}


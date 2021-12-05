
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
*  @file gsiDeclQApplicationStateChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QApplicationStateChangeEvent>
#include <QEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QApplicationStateChangeEvent

//  Constructor QApplicationStateChangeEvent::QApplicationStateChangeEvent(Qt::ApplicationState state)


static void _init_ctor_QApplicationStateChangeEvent_2402 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<const qt_gsi::Converter<Qt::ApplicationState>::target_type & > (argspec_0);
  decl->set_return_new<QApplicationStateChangeEvent> ();
}

static void _call_ctor_QApplicationStateChangeEvent_2402 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::ApplicationState>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::ApplicationState>::target_type & >() (args, heap);
  ret.write<QApplicationStateChangeEvent *> (new QApplicationStateChangeEvent (qt_gsi::QtToCppAdaptor<Qt::ApplicationState>(arg1).cref()));
}


// Qt::ApplicationState QApplicationStateChangeEvent::applicationState()


static void _init_f_applicationState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::ApplicationState>::target_type > ();
}

static void _call_f_applicationState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::ApplicationState>::target_type > ((qt_gsi::Converter<Qt::ApplicationState>::target_type)qt_gsi::CppToQtAdaptor<Qt::ApplicationState>(((QApplicationStateChangeEvent *)cls)->applicationState ()));
}



namespace gsi
{

static gsi::Methods methods_QApplicationStateChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QApplicationStateChangeEvent::QApplicationStateChangeEvent(Qt::ApplicationState state)\nThis method creates an object of class QApplicationStateChangeEvent.", &_init_ctor_QApplicationStateChangeEvent_2402, &_call_ctor_QApplicationStateChangeEvent_2402);
  methods += new qt_gsi::GenericMethod ("applicationState", "@brief Method Qt::ApplicationState QApplicationStateChangeEvent::applicationState()\n", true, &_init_f_applicationState_c0, &_call_f_applicationState_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QApplicationStateChangeEvent> decl_QApplicationStateChangeEvent (qtdecl_QEvent (), "QtGui", "QApplicationStateChangeEvent",
  methods_QApplicationStateChangeEvent (),
  "@qt\n@brief Binding of QApplicationStateChangeEvent");


GSI_QTGUI_PUBLIC gsi::Class<QApplicationStateChangeEvent> &qtdecl_QApplicationStateChangeEvent () { return decl_QApplicationStateChangeEvent; }

}



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
*  @file gsiDeclQStyleOptionToolBar.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionToolBar>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionToolBar

//  Constructor QStyleOptionToolBar::QStyleOptionToolBar()


static void _init_ctor_QStyleOptionToolBar_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionToolBar> ();
}

static void _call_ctor_QStyleOptionToolBar_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionToolBar *> (new QStyleOptionToolBar ());
}


//  Constructor QStyleOptionToolBar::QStyleOptionToolBar(const QStyleOptionToolBar &other)


static void _init_ctor_QStyleOptionToolBar_3247 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionToolBar & > (argspec_0);
  decl->set_return_new<QStyleOptionToolBar> ();
}

static void _call_ctor_QStyleOptionToolBar_3247 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolBar &arg1 = gsi::arg_reader<const QStyleOptionToolBar & >() (args, heap);
  ret.write<QStyleOptionToolBar *> (new QStyleOptionToolBar (arg1));
}


// QStyleOptionToolBar &QStyleOptionToolBar::operator=(const QStyleOptionToolBar &)


static void _init_f_operator_eq__3247 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStyleOptionToolBar & > (argspec_0);
  decl->set_return<QStyleOptionToolBar & > ();
}

static void _call_f_operator_eq__3247 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolBar &arg1 = gsi::arg_reader<const QStyleOptionToolBar & >() (args, heap);
  ret.write<QStyleOptionToolBar & > ((QStyleOptionToolBar &)((QStyleOptionToolBar *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionToolBar () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolBar::QStyleOptionToolBar()\nThis method creates an object of class QStyleOptionToolBar.", &_init_ctor_QStyleOptionToolBar_0, &_call_ctor_QStyleOptionToolBar_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolBar::QStyleOptionToolBar(const QStyleOptionToolBar &other)\nThis method creates an object of class QStyleOptionToolBar.", &_init_ctor_QStyleOptionToolBar_3247, &_call_ctor_QStyleOptionToolBar_3247);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionToolBar &QStyleOptionToolBar::operator=(const QStyleOptionToolBar &)\n", false, &_init_f_operator_eq__3247, &_call_f_operator_eq__3247);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionToolBar> decl_QStyleOptionToolBar (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionToolBar",
  methods_QStyleOptionToolBar (),
  "@qt\n@brief Binding of QStyleOptionToolBar");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionToolBar> &qtdecl_QStyleOptionToolBar () { return decl_QStyleOptionToolBar; }

}


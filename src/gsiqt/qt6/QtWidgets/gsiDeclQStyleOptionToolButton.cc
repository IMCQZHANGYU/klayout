
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
*  @file gsiDeclQStyleOptionToolButton.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionToolButton>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionToolButton

//  Constructor QStyleOptionToolButton::QStyleOptionToolButton()


static void _init_ctor_QStyleOptionToolButton_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionToolButton> ();
}

static void _call_ctor_QStyleOptionToolButton_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionToolButton *> (new QStyleOptionToolButton ());
}


//  Constructor QStyleOptionToolButton::QStyleOptionToolButton(const QStyleOptionToolButton &other)


static void _init_ctor_QStyleOptionToolButton_3606 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionToolButton & > (argspec_0);
  decl->set_return_new<QStyleOptionToolButton> ();
}

static void _call_ctor_QStyleOptionToolButton_3606 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolButton &arg1 = gsi::arg_reader<const QStyleOptionToolButton & >() (args, heap);
  ret.write<QStyleOptionToolButton *> (new QStyleOptionToolButton (arg1));
}


// QStyleOptionToolButton &QStyleOptionToolButton::operator=(const QStyleOptionToolButton &)


static void _init_f_operator_eq__3606 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStyleOptionToolButton & > (argspec_0);
  decl->set_return<QStyleOptionToolButton & > ();
}

static void _call_f_operator_eq__3606 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolButton &arg1 = gsi::arg_reader<const QStyleOptionToolButton & >() (args, heap);
  ret.write<QStyleOptionToolButton & > ((QStyleOptionToolButton &)((QStyleOptionToolButton *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionToolButton () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolButton::QStyleOptionToolButton()\nThis method creates an object of class QStyleOptionToolButton.", &_init_ctor_QStyleOptionToolButton_0, &_call_ctor_QStyleOptionToolButton_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolButton::QStyleOptionToolButton(const QStyleOptionToolButton &other)\nThis method creates an object of class QStyleOptionToolButton.", &_init_ctor_QStyleOptionToolButton_3606, &_call_ctor_QStyleOptionToolButton_3606);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionToolButton &QStyleOptionToolButton::operator=(const QStyleOptionToolButton &)\n", false, &_init_f_operator_eq__3606, &_call_f_operator_eq__3606);
  return methods;
}

gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex ();

gsi::Class<QStyleOptionToolButton> decl_QStyleOptionToolButton (qtdecl_QStyleOptionComplex (), "QtWidgets", "QStyleOptionToolButton",
  methods_QStyleOptionToolButton (),
  "@qt\n@brief Binding of QStyleOptionToolButton");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionToolButton> &qtdecl_QStyleOptionToolButton () { return decl_QStyleOptionToolButton; }

}


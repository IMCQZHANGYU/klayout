
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
*  @file gsiDeclQCommandLineOption.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCommandLineOption>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCommandLineOption

//  Constructor QCommandLineOption::QCommandLineOption(const QString &name)


static void _init_ctor_QCommandLineOption_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QCommandLineOption> ();
}

static void _call_ctor_QCommandLineOption_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QCommandLineOption *> (new QCommandLineOption (arg1));
}


//  Constructor QCommandLineOption::QCommandLineOption(const QStringList &names)


static void _init_ctor_QCommandLineOption_2437 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("names");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return_new<QCommandLineOption> ();
}

static void _call_ctor_QCommandLineOption_2437 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  ret.write<QCommandLineOption *> (new QCommandLineOption (arg1));
}


//  Constructor QCommandLineOption::QCommandLineOption(const QString &name, const QString &description, const QString &valueName, const QString &defaultValue)


static void _init_ctor_QCommandLineOption_7776 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("description");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("valueName", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("defaultValue", true, "QString()");
  decl->add_arg<const QString & > (argspec_3);
  decl->set_return_new<QCommandLineOption> ();
}

static void _call_ctor_QCommandLineOption_7776 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  const QString &arg4 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QCommandLineOption *> (new QCommandLineOption (arg1, arg2, arg3, arg4));
}


//  Constructor QCommandLineOption::QCommandLineOption(const QStringList &names, const QString &description, const QString &valueName, const QString &defaultValue)


static void _init_ctor_QCommandLineOption_8188 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("names");
  decl->add_arg<const QStringList & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("description");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("valueName", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("defaultValue", true, "QString()");
  decl->add_arg<const QString & > (argspec_3);
  decl->set_return_new<QCommandLineOption> ();
}

static void _call_ctor_QCommandLineOption_8188 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  const QString &arg4 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QCommandLineOption *> (new QCommandLineOption (arg1, arg2, arg3, arg4));
}


//  Constructor QCommandLineOption::QCommandLineOption(const QCommandLineOption &other)


static void _init_ctor_QCommandLineOption_3122 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCommandLineOption & > (argspec_0);
  decl->set_return_new<QCommandLineOption> ();
}

static void _call_ctor_QCommandLineOption_3122 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCommandLineOption &arg1 = gsi::arg_reader<const QCommandLineOption & >() (args, heap);
  ret.write<QCommandLineOption *> (new QCommandLineOption (arg1));
}


// QStringList QCommandLineOption::defaultValues()


static void _init_f_defaultValues_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_defaultValues_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QCommandLineOption *)cls)->defaultValues ());
}


// QString QCommandLineOption::description()


static void _init_f_description_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_description_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCommandLineOption *)cls)->description ());
}


// QStringList QCommandLineOption::names()


static void _init_f_names_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_names_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QCommandLineOption *)cls)->names ());
}


// QCommandLineOption &QCommandLineOption::operator=(const QCommandLineOption &other)


static void _init_f_operator_eq__3122 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCommandLineOption & > (argspec_0);
  decl->set_return<QCommandLineOption & > ();
}

static void _call_f_operator_eq__3122 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCommandLineOption &arg1 = gsi::arg_reader<const QCommandLineOption & >() (args, heap);
  ret.write<QCommandLineOption & > ((QCommandLineOption &)((QCommandLineOption *)cls)->operator= (arg1));
}


// void QCommandLineOption::setDefaultValue(const QString &defaultValue)


static void _init_f_setDefaultValue_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDefaultValue_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineOption *)cls)->setDefaultValue (arg1);
}


// void QCommandLineOption::setDefaultValues(const QStringList &defaultValues)


static void _init_f_setDefaultValues_2437 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValues");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDefaultValues_2437 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineOption *)cls)->setDefaultValues (arg1);
}


// void QCommandLineOption::setDescription(const QString &description)


static void _init_f_setDescription_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("description");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDescription_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineOption *)cls)->setDescription (arg1);
}


// void QCommandLineOption::setValueName(const QString &name)


static void _init_f_setValueName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setValueName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineOption *)cls)->setValueName (arg1);
}


// void QCommandLineOption::swap(QCommandLineOption &other)


static void _init_f_swap_2427 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QCommandLineOption & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2427 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QCommandLineOption &arg1 = gsi::arg_reader<QCommandLineOption & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCommandLineOption *)cls)->swap (arg1);
}


// QString QCommandLineOption::valueName()


static void _init_f_valueName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_valueName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCommandLineOption *)cls)->valueName ());
}



namespace gsi
{

static gsi::Methods methods_QCommandLineOption () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCommandLineOption::QCommandLineOption(const QString &name)\nThis method creates an object of class QCommandLineOption.", &_init_ctor_QCommandLineOption_2025, &_call_ctor_QCommandLineOption_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCommandLineOption::QCommandLineOption(const QStringList &names)\nThis method creates an object of class QCommandLineOption.", &_init_ctor_QCommandLineOption_2437, &_call_ctor_QCommandLineOption_2437);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCommandLineOption::QCommandLineOption(const QString &name, const QString &description, const QString &valueName, const QString &defaultValue)\nThis method creates an object of class QCommandLineOption.", &_init_ctor_QCommandLineOption_7776, &_call_ctor_QCommandLineOption_7776);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCommandLineOption::QCommandLineOption(const QStringList &names, const QString &description, const QString &valueName, const QString &defaultValue)\nThis method creates an object of class QCommandLineOption.", &_init_ctor_QCommandLineOption_8188, &_call_ctor_QCommandLineOption_8188);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCommandLineOption::QCommandLineOption(const QCommandLineOption &other)\nThis method creates an object of class QCommandLineOption.", &_init_ctor_QCommandLineOption_3122, &_call_ctor_QCommandLineOption_3122);
  methods += new qt_gsi::GenericMethod (":defaultValues", "@brief Method QStringList QCommandLineOption::defaultValues()\n", true, &_init_f_defaultValues_c0, &_call_f_defaultValues_c0);
  methods += new qt_gsi::GenericMethod (":description", "@brief Method QString QCommandLineOption::description()\n", true, &_init_f_description_c0, &_call_f_description_c0);
  methods += new qt_gsi::GenericMethod ("names", "@brief Method QStringList QCommandLineOption::names()\n", true, &_init_f_names_c0, &_call_f_names_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QCommandLineOption &QCommandLineOption::operator=(const QCommandLineOption &other)\n", false, &_init_f_operator_eq__3122, &_call_f_operator_eq__3122);
  methods += new qt_gsi::GenericMethod ("setDefaultValue", "@brief Method void QCommandLineOption::setDefaultValue(const QString &defaultValue)\n", false, &_init_f_setDefaultValue_2025, &_call_f_setDefaultValue_2025);
  methods += new qt_gsi::GenericMethod ("setDefaultValues|defaultValues=", "@brief Method void QCommandLineOption::setDefaultValues(const QStringList &defaultValues)\n", false, &_init_f_setDefaultValues_2437, &_call_f_setDefaultValues_2437);
  methods += new qt_gsi::GenericMethod ("setDescription|description=", "@brief Method void QCommandLineOption::setDescription(const QString &description)\n", false, &_init_f_setDescription_2025, &_call_f_setDescription_2025);
  methods += new qt_gsi::GenericMethod ("setValueName|valueName=", "@brief Method void QCommandLineOption::setValueName(const QString &name)\n", false, &_init_f_setValueName_2025, &_call_f_setValueName_2025);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QCommandLineOption::swap(QCommandLineOption &other)\n", false, &_init_f_swap_2427, &_call_f_swap_2427);
  methods += new qt_gsi::GenericMethod (":valueName", "@brief Method QString QCommandLineOption::valueName()\n", true, &_init_f_valueName_c0, &_call_f_valueName_c0);
  return methods;
}

gsi::Class<QCommandLineOption> decl_QCommandLineOption ("QtCore", "QCommandLineOption",
  methods_QCommandLineOption (),
  "@qt\n@brief Binding of QCommandLineOption");


GSI_QTCORE_PUBLIC gsi::Class<QCommandLineOption> &qtdecl_QCommandLineOption () { return decl_QCommandLineOption; }

}


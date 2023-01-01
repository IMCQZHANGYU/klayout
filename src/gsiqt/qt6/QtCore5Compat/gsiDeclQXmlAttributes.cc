
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
*  @file gsiDeclQXmlAttributes.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlAttributes>
#include "gsiQt.h"
#include "gsiQtCore5CompatCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlAttributes

// void QXmlAttributes::append(const QString &qName, const QString &uri, const QString &localPart, const QString &value)


static void _init_f_append_7776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("uri");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("localPart");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("value");
  decl->add_arg<const QString & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_append_7776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg4 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlAttributes *)cls)->append (arg1, arg2, arg3, arg4);
}


// void QXmlAttributes::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlAttributes *)cls)->clear ();
}


// int QXmlAttributes::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlAttributes *)cls)->count ());
}


// int QXmlAttributes::index(const QString &qName)


static void _init_f_index_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_index_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<int > ((int)((QXmlAttributes *)cls)->index (arg1));
}


// int QXmlAttributes::index(const QString &uri, const QString &localPart)


static void _init_f_index_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("uri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localPart");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_index_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<int > ((int)((QXmlAttributes *)cls)->index (arg1, arg2));
}


// int QXmlAttributes::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlAttributes *)cls)->length ());
}


// QString QXmlAttributes::localName(int index)


static void _init_f_localName_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_localName_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->localName (arg1));
}


// QXmlAttributes &QXmlAttributes::operator=(const QXmlAttributes &)


static void _init_f_operator_eq__2762 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlAttributes & > (argspec_0);
  decl->set_return<QXmlAttributes & > ();
}

static void _call_f_operator_eq__2762 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlAttributes &arg1 = gsi::arg_reader<const QXmlAttributes & >() (args, heap);
  ret.write<QXmlAttributes & > ((QXmlAttributes &)((QXmlAttributes *)cls)->operator= (arg1));
}


// QString QXmlAttributes::qName(int index)


static void _init_f_qName_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_qName_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->qName (arg1));
}


// void QXmlAttributes::swap(QXmlAttributes &other)


static void _init_f_swap_2067 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QXmlAttributes & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2067 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QXmlAttributes &arg1 = gsi::arg_reader<QXmlAttributes & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlAttributes *)cls)->swap (arg1);
}


// QString QXmlAttributes::type(int index)


static void _init_f_type_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_type_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->type (arg1));
}


// QString QXmlAttributes::type(const QString &qName)


static void _init_f_type_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_type_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->type (arg1));
}


// QString QXmlAttributes::type(const QString &uri, const QString &localName)


static void _init_f_type_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("uri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_type_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->type (arg1, arg2));
}


// QString QXmlAttributes::uri(int index)


static void _init_f_uri_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_uri_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->uri (arg1));
}


// QString QXmlAttributes::value(int index)


static void _init_f_value_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_value_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->value (arg1));
}


// QString QXmlAttributes::value(const QString &qName)


static void _init_f_value_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_value_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->value (arg1));
}


// QString QXmlAttributes::value(const QString &uri, const QString &localName)


static void _init_f_value_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("uri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_value_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QXmlAttributes *)cls)->value (arg1, arg2));
}


namespace gsi
{

static gsi::Methods methods_QXmlAttributes () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("append", "@brief Method void QXmlAttributes::append(const QString &qName, const QString &uri, const QString &localPart, const QString &value)\n", false, &_init_f_append_7776, &_call_f_append_7776);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QXmlAttributes::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QXmlAttributes::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod ("index", "@brief Method int QXmlAttributes::index(const QString &qName)\n", true, &_init_f_index_c2025, &_call_f_index_c2025);
  methods += new qt_gsi::GenericMethod ("index", "@brief Method int QXmlAttributes::index(const QString &uri, const QString &localPart)\n", true, &_init_f_index_c3942, &_call_f_index_c3942);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method int QXmlAttributes::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("localName", "@brief Method QString QXmlAttributes::localName(int index)\n", true, &_init_f_localName_c767, &_call_f_localName_c767);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QXmlAttributes &QXmlAttributes::operator=(const QXmlAttributes &)\n", false, &_init_f_operator_eq__2762, &_call_f_operator_eq__2762);
  methods += new qt_gsi::GenericMethod ("qName", "@brief Method QString QXmlAttributes::qName(int index)\n", true, &_init_f_qName_c767, &_call_f_qName_c767);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QXmlAttributes::swap(QXmlAttributes &other)\n", false, &_init_f_swap_2067, &_call_f_swap_2067);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QString QXmlAttributes::type(int index)\n", true, &_init_f_type_c767, &_call_f_type_c767);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QString QXmlAttributes::type(const QString &qName)\n", true, &_init_f_type_c2025, &_call_f_type_c2025);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QString QXmlAttributes::type(const QString &uri, const QString &localName)\n", true, &_init_f_type_c3942, &_call_f_type_c3942);
  methods += new qt_gsi::GenericMethod ("uri", "@brief Method QString QXmlAttributes::uri(int index)\n", true, &_init_f_uri_c767, &_call_f_uri_c767);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QString QXmlAttributes::value(int index)\n", true, &_init_f_value_c767, &_call_f_value_c767);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QString QXmlAttributes::value(const QString &qName)\n", true, &_init_f_value_c2025, &_call_f_value_c2025);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QString QXmlAttributes::value(const QString &uri, const QString &localName)\n", true, &_init_f_value_c3942, &_call_f_value_c3942);
  return methods;
}

gsi::Class<QXmlAttributes> decl_QXmlAttributes ("QtCore5Compat", "QXmlAttributes_Native",
  methods_QXmlAttributes (),
  "@hide\n@alias QXmlAttributes");

GSI_QTCORE5COMPAT_PUBLIC gsi::Class<QXmlAttributes> &qtdecl_QXmlAttributes () { return decl_QXmlAttributes; }

}


class QXmlAttributes_Adaptor : public QXmlAttributes, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlAttributes_Adaptor();

  //  [adaptor ctor] QXmlAttributes::QXmlAttributes()
  QXmlAttributes_Adaptor() : QXmlAttributes()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QXmlAttributes::QXmlAttributes(const QXmlAttributes &)
  QXmlAttributes_Adaptor(const QXmlAttributes &arg1) : QXmlAttributes(arg1)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QXmlAttributes_Adaptor::~QXmlAttributes_Adaptor() { }

//  Constructor QXmlAttributes::QXmlAttributes() (adaptor class)

static void _init_ctor_QXmlAttributes_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlAttributes_Adaptor> ();
}

static void _call_ctor_QXmlAttributes_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlAttributes_Adaptor *> (new QXmlAttributes_Adaptor ());
}


//  Constructor QXmlAttributes::QXmlAttributes(const QXmlAttributes &) (adaptor class)

static void _init_ctor_QXmlAttributes_Adaptor_2762 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlAttributes & > (argspec_0);
  decl->set_return_new<QXmlAttributes_Adaptor> ();
}

static void _call_ctor_QXmlAttributes_Adaptor_2762 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlAttributes &arg1 = gsi::arg_reader<const QXmlAttributes & >() (args, heap);
  ret.write<QXmlAttributes_Adaptor *> (new QXmlAttributes_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QXmlAttributes> &qtdecl_QXmlAttributes ();

static gsi::Methods methods_QXmlAttributes_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlAttributes::QXmlAttributes()\nThis method creates an object of class QXmlAttributes.", &_init_ctor_QXmlAttributes_Adaptor_0, &_call_ctor_QXmlAttributes_Adaptor_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlAttributes::QXmlAttributes(const QXmlAttributes &)\nThis method creates an object of class QXmlAttributes.", &_init_ctor_QXmlAttributes_Adaptor_2762, &_call_ctor_QXmlAttributes_Adaptor_2762);
  return methods;
}

gsi::Class<QXmlAttributes_Adaptor> decl_QXmlAttributes_Adaptor (qtdecl_QXmlAttributes (), "QtCore5Compat", "QXmlAttributes",
  methods_QXmlAttributes_Adaptor (),
  "@qt\n@brief Binding of QXmlAttributes");

}


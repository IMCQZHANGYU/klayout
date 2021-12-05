
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
*  @file gsiDeclQDomNamedNodeMap.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomNamedNodeMap>
#include <QDomNode>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomNamedNodeMap

//  Constructor QDomNamedNodeMap::QDomNamedNodeMap()


static void _init_ctor_QDomNamedNodeMap_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomNamedNodeMap> ();
}

static void _call_ctor_QDomNamedNodeMap_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomNamedNodeMap *> (new QDomNamedNodeMap ());
}


//  Constructor QDomNamedNodeMap::QDomNamedNodeMap(const QDomNamedNodeMap &)


static void _init_ctor_QDomNamedNodeMap_2843 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNamedNodeMap & > (argspec_0);
  decl->set_return_new<QDomNamedNodeMap> ();
}

static void _call_ctor_QDomNamedNodeMap_2843 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNamedNodeMap &arg1 = gsi::arg_reader<const QDomNamedNodeMap & >() (args, heap);
  ret.write<QDomNamedNodeMap *> (new QDomNamedNodeMap (arg1));
}


// bool QDomNamedNodeMap::contains(const QString &name)


static void _init_f_contains_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QDomNamedNodeMap *)cls)->contains (arg1));
}


// int QDomNamedNodeMap::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDomNamedNodeMap *)cls)->count ());
}


// bool QDomNamedNodeMap::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDomNamedNodeMap *)cls)->isEmpty ());
}


// QDomNode QDomNamedNodeMap::item(int index)


static void _init_f_item_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDomNode > ();
}

static void _call_f_item_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QDomNode > ((QDomNode)((QDomNamedNodeMap *)cls)->item (arg1));
}


// int QDomNamedNodeMap::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDomNamedNodeMap *)cls)->length ());
}


// QDomNode QDomNamedNodeMap::namedItem(const QString &name)


static void _init_f_namedItem_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomNode > ();
}

static void _call_f_namedItem_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomNode > ((QDomNode)((QDomNamedNodeMap *)cls)->namedItem (arg1));
}


// QDomNode QDomNamedNodeMap::namedItemNS(const QString &nsURI, const QString &localName)


static void _init_f_namedItemNS_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDomNode > ();
}

static void _call_f_namedItemNS_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomNode > ((QDomNode)((QDomNamedNodeMap *)cls)->namedItemNS (arg1, arg2));
}


// bool QDomNamedNodeMap::operator!=(const QDomNamedNodeMap &)


static void _init_f_operator_excl__eq__c2843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNamedNodeMap & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNamedNodeMap &arg1 = gsi::arg_reader<const QDomNamedNodeMap & >() (args, heap);
  ret.write<bool > ((bool)((QDomNamedNodeMap *)cls)->operator!= (arg1));
}


// QDomNamedNodeMap &QDomNamedNodeMap::operator=(const QDomNamedNodeMap &)


static void _init_f_operator_eq__2843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNamedNodeMap & > (argspec_0);
  decl->set_return<QDomNamedNodeMap & > ();
}

static void _call_f_operator_eq__2843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNamedNodeMap &arg1 = gsi::arg_reader<const QDomNamedNodeMap & >() (args, heap);
  ret.write<QDomNamedNodeMap & > ((QDomNamedNodeMap &)((QDomNamedNodeMap *)cls)->operator= (arg1));
}


// bool QDomNamedNodeMap::operator==(const QDomNamedNodeMap &)


static void _init_f_operator_eq__eq__c2843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNamedNodeMap & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNamedNodeMap &arg1 = gsi::arg_reader<const QDomNamedNodeMap & >() (args, heap);
  ret.write<bool > ((bool)((QDomNamedNodeMap *)cls)->operator== (arg1));
}


// QDomNode QDomNamedNodeMap::removeNamedItem(const QString &name)


static void _init_f_removeNamedItem_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomNode > ();
}

static void _call_f_removeNamedItem_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomNode > ((QDomNode)((QDomNamedNodeMap *)cls)->removeNamedItem (arg1));
}


// QDomNode QDomNamedNodeMap::removeNamedItemNS(const QString &nsURI, const QString &localName)


static void _init_f_removeNamedItemNS_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDomNode > ();
}

static void _call_f_removeNamedItemNS_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomNode > ((QDomNode)((QDomNamedNodeMap *)cls)->removeNamedItemNS (arg1, arg2));
}


// QDomNode QDomNamedNodeMap::setNamedItem(const QDomNode &newNode)


static void _init_f_setNamedItem_2072 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newNode");
  decl->add_arg<const QDomNode & > (argspec_0);
  decl->set_return<QDomNode > ();
}

static void _call_f_setNamedItem_2072 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNode &arg1 = gsi::arg_reader<const QDomNode & >() (args, heap);
  ret.write<QDomNode > ((QDomNode)((QDomNamedNodeMap *)cls)->setNamedItem (arg1));
}


// QDomNode QDomNamedNodeMap::setNamedItemNS(const QDomNode &newNode)


static void _init_f_setNamedItemNS_2072 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newNode");
  decl->add_arg<const QDomNode & > (argspec_0);
  decl->set_return<QDomNode > ();
}

static void _call_f_setNamedItemNS_2072 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNode &arg1 = gsi::arg_reader<const QDomNode & >() (args, heap);
  ret.write<QDomNode > ((QDomNode)((QDomNamedNodeMap *)cls)->setNamedItemNS (arg1));
}


// int QDomNamedNodeMap::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDomNamedNodeMap *)cls)->size ());
}



namespace gsi
{

static gsi::Methods methods_QDomNamedNodeMap () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomNamedNodeMap::QDomNamedNodeMap()\nThis method creates an object of class QDomNamedNodeMap.", &_init_ctor_QDomNamedNodeMap_0, &_call_ctor_QDomNamedNodeMap_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomNamedNodeMap::QDomNamedNodeMap(const QDomNamedNodeMap &)\nThis method creates an object of class QDomNamedNodeMap.", &_init_ctor_QDomNamedNodeMap_2843, &_call_ctor_QDomNamedNodeMap_2843);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QDomNamedNodeMap::contains(const QString &name)\n", true, &_init_f_contains_c2025, &_call_f_contains_c2025);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QDomNamedNodeMap::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QDomNamedNodeMap::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("item", "@brief Method QDomNode QDomNamedNodeMap::item(int index)\n", true, &_init_f_item_c767, &_call_f_item_c767);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method int QDomNamedNodeMap::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("namedItem", "@brief Method QDomNode QDomNamedNodeMap::namedItem(const QString &name)\n", true, &_init_f_namedItem_c2025, &_call_f_namedItem_c2025);
  methods += new qt_gsi::GenericMethod ("namedItemNS", "@brief Method QDomNode QDomNamedNodeMap::namedItemNS(const QString &nsURI, const QString &localName)\n", true, &_init_f_namedItemNS_c3942, &_call_f_namedItemNS_c3942);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QDomNamedNodeMap::operator!=(const QDomNamedNodeMap &)\n", true, &_init_f_operator_excl__eq__c2843, &_call_f_operator_excl__eq__c2843);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomNamedNodeMap &QDomNamedNodeMap::operator=(const QDomNamedNodeMap &)\n", false, &_init_f_operator_eq__2843, &_call_f_operator_eq__2843);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QDomNamedNodeMap::operator==(const QDomNamedNodeMap &)\n", true, &_init_f_operator_eq__eq__c2843, &_call_f_operator_eq__eq__c2843);
  methods += new qt_gsi::GenericMethod ("removeNamedItem", "@brief Method QDomNode QDomNamedNodeMap::removeNamedItem(const QString &name)\n", false, &_init_f_removeNamedItem_2025, &_call_f_removeNamedItem_2025);
  methods += new qt_gsi::GenericMethod ("removeNamedItemNS", "@brief Method QDomNode QDomNamedNodeMap::removeNamedItemNS(const QString &nsURI, const QString &localName)\n", false, &_init_f_removeNamedItemNS_3942, &_call_f_removeNamedItemNS_3942);
  methods += new qt_gsi::GenericMethod ("setNamedItem", "@brief Method QDomNode QDomNamedNodeMap::setNamedItem(const QDomNode &newNode)\n", false, &_init_f_setNamedItem_2072, &_call_f_setNamedItem_2072);
  methods += new qt_gsi::GenericMethod ("setNamedItemNS", "@brief Method QDomNode QDomNamedNodeMap::setNamedItemNS(const QDomNode &newNode)\n", false, &_init_f_setNamedItemNS_2072, &_call_f_setNamedItemNS_2072);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QDomNamedNodeMap::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  return methods;
}

gsi::Class<QDomNamedNodeMap> decl_QDomNamedNodeMap ("QtXml", "QDomNamedNodeMap",
  methods_QDomNamedNodeMap (),
  "@qt\n@brief Binding of QDomNamedNodeMap");


GSI_QTXML_PUBLIC gsi::Class<QDomNamedNodeMap> &qtdecl_QDomNamedNodeMap () { return decl_QDomNamedNodeMap; }

}


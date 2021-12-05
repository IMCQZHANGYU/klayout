
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
*  @file gsiDeclQDomDocumentType.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomDocumentType>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomElement>
#include <QDomEntity>
#include <QDomEntityReference>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QTextStream>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomDocumentType

//  Constructor QDomDocumentType::QDomDocumentType()


static void _init_ctor_QDomDocumentType_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomDocumentType> ();
}

static void _call_ctor_QDomDocumentType_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomDocumentType *> (new QDomDocumentType ());
}


//  Constructor QDomDocumentType::QDomDocumentType(const QDomDocumentType &x)


static void _init_ctor_QDomDocumentType_2931 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomDocumentType & > (argspec_0);
  decl->set_return_new<QDomDocumentType> ();
}

static void _call_ctor_QDomDocumentType_2931 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomDocumentType &arg1 = gsi::arg_reader<const QDomDocumentType & >() (args, heap);
  ret.write<QDomDocumentType *> (new QDomDocumentType (arg1));
}


// QDomNamedNodeMap QDomDocumentType::entities()


static void _init_f_entities_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDomNamedNodeMap > ();
}

static void _call_f_entities_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomNamedNodeMap > ((QDomNamedNodeMap)((QDomDocumentType *)cls)->entities ());
}


// QString QDomDocumentType::internalSubset()


static void _init_f_internalSubset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_internalSubset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomDocumentType *)cls)->internalSubset ());
}


// QString QDomDocumentType::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomDocumentType *)cls)->name ());
}


// QDomNode::NodeType QDomDocumentType::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomDocumentType *)cls)->nodeType ()));
}


// QDomNamedNodeMap QDomDocumentType::notations()


static void _init_f_notations_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDomNamedNodeMap > ();
}

static void _call_f_notations_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomNamedNodeMap > ((QDomNamedNodeMap)((QDomDocumentType *)cls)->notations ());
}


// QDomDocumentType &QDomDocumentType::operator=(const QDomDocumentType &)


static void _init_f_operator_eq__2931 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomDocumentType & > (argspec_0);
  decl->set_return<QDomDocumentType & > ();
}

static void _call_f_operator_eq__2931 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomDocumentType &arg1 = gsi::arg_reader<const QDomDocumentType & >() (args, heap);
  ret.write<QDomDocumentType & > ((QDomDocumentType &)((QDomDocumentType *)cls)->operator= (arg1));
}


// QString QDomDocumentType::publicId()


static void _init_f_publicId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_publicId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomDocumentType *)cls)->publicId ());
}


// QString QDomDocumentType::systemId()


static void _init_f_systemId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_systemId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomDocumentType *)cls)->systemId ());
}



namespace gsi
{

static gsi::Methods methods_QDomDocumentType () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomDocumentType::QDomDocumentType()\nThis method creates an object of class QDomDocumentType.", &_init_ctor_QDomDocumentType_0, &_call_ctor_QDomDocumentType_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomDocumentType::QDomDocumentType(const QDomDocumentType &x)\nThis method creates an object of class QDomDocumentType.", &_init_ctor_QDomDocumentType_2931, &_call_ctor_QDomDocumentType_2931);
  methods += new qt_gsi::GenericMethod ("entities", "@brief Method QDomNamedNodeMap QDomDocumentType::entities()\n", true, &_init_f_entities_c0, &_call_f_entities_c0);
  methods += new qt_gsi::GenericMethod ("internalSubset", "@brief Method QString QDomDocumentType::internalSubset()\n", true, &_init_f_internalSubset_c0, &_call_f_internalSubset_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QDomDocumentType::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomDocumentType::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("notations", "@brief Method QDomNamedNodeMap QDomDocumentType::notations()\n", true, &_init_f_notations_c0, &_call_f_notations_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomDocumentType &QDomDocumentType::operator=(const QDomDocumentType &)\n", false, &_init_f_operator_eq__2931, &_call_f_operator_eq__2931);
  methods += new qt_gsi::GenericMethod ("publicId", "@brief Method QString QDomDocumentType::publicId()\n", true, &_init_f_publicId_c0, &_call_f_publicId_c0);
  methods += new qt_gsi::GenericMethod ("systemId", "@brief Method QString QDomDocumentType::systemId()\n", true, &_init_f_systemId_c0, &_call_f_systemId_c0);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomDocumentType> decl_QDomDocumentType (qtdecl_QDomNode (), "QtXml", "QDomDocumentType",
  methods_QDomDocumentType (),
  "@qt\n@brief Binding of QDomDocumentType");


GSI_QTXML_PUBLIC gsi::Class<QDomDocumentType> &qtdecl_QDomDocumentType () { return decl_QDomDocumentType; }

}


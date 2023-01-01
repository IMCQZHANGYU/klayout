
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
*  @file gsiDeclQDomCDATASection.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomCDATASection>
#include <QDomAttr>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
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
// class QDomCDATASection

//  Constructor QDomCDATASection::QDomCDATASection()


static void _init_ctor_QDomCDATASection_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomCDATASection> ();
}

static void _call_ctor_QDomCDATASection_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomCDATASection *> (new QDomCDATASection ());
}


//  Constructor QDomCDATASection::QDomCDATASection(const QDomCDATASection &x)


static void _init_ctor_QDomCDATASection_2756 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomCDATASection & > (argspec_0);
  decl->set_return_new<QDomCDATASection> ();
}

static void _call_ctor_QDomCDATASection_2756 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomCDATASection &arg1 = gsi::arg_reader<const QDomCDATASection & >() (args, heap);
  ret.write<QDomCDATASection *> (new QDomCDATASection (arg1));
}


// QDomNode::NodeType QDomCDATASection::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomCDATASection *)cls)->nodeType ()));
}


// QDomCDATASection &QDomCDATASection::operator=(const QDomCDATASection &)


static void _init_f_operator_eq__2756 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomCDATASection & > (argspec_0);
  decl->set_return<QDomCDATASection & > ();
}

static void _call_f_operator_eq__2756 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomCDATASection &arg1 = gsi::arg_reader<const QDomCDATASection & >() (args, heap);
  ret.write<QDomCDATASection & > ((QDomCDATASection &)((QDomCDATASection *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QDomCDATASection () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomCDATASection::QDomCDATASection()\nThis method creates an object of class QDomCDATASection.", &_init_ctor_QDomCDATASection_0, &_call_ctor_QDomCDATASection_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomCDATASection::QDomCDATASection(const QDomCDATASection &x)\nThis method creates an object of class QDomCDATASection.", &_init_ctor_QDomCDATASection_2756, &_call_ctor_QDomCDATASection_2756);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomCDATASection::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomCDATASection &QDomCDATASection::operator=(const QDomCDATASection &)\n", false, &_init_f_operator_eq__2756, &_call_f_operator_eq__2756);
  return methods;
}

gsi::Class<QDomText> &qtdecl_QDomText ();

gsi::Class<QDomCDATASection> decl_QDomCDATASection (qtdecl_QDomText (), "QtXml", "QDomCDATASection",
  methods_QDomCDATASection (),
  "@qt\n@brief Binding of QDomCDATASection");


GSI_QTXML_PUBLIC gsi::Class<QDomCDATASection> &qtdecl_QDomCDATASection () { return decl_QDomCDATASection; }

}


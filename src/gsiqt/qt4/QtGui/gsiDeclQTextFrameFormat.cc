
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
*  @file gsiDeclQTextFrameFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextFrameFormat>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextImageFormat>
#include <QTextLength>
#include <QTextListFormat>
#include <QTextTableCellFormat>
#include <QTextTableFormat>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextFrameFormat

//  Constructor QTextFrameFormat::QTextFrameFormat()


static void _init_ctor_QTextFrameFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextFrameFormat> ();
}

static void _call_ctor_QTextFrameFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrameFormat *> (new QTextFrameFormat ());
}


// double QTextFrameFormat::border()


static void _init_f_border_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_border_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextFrameFormat *)cls)->border ());
}


// QBrush QTextFrameFormat::borderBrush()


static void _init_f_borderBrush_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QBrush > ();
}

static void _call_f_borderBrush_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush > ((QBrush)((QTextFrameFormat *)cls)->borderBrush ());
}


// QTextFrameFormat::BorderStyle QTextFrameFormat::borderStyle()


static void _init_f_borderStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ();
}

static void _call_f_borderStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ((qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type)qt_gsi::CppToQtAdaptor<QTextFrameFormat::BorderStyle>(((QTextFrameFormat *)cls)->borderStyle ()));
}


// double QTextFrameFormat::bottomMargin()


static void _init_f_bottomMargin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_bottomMargin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextFrameFormat *)cls)->bottomMargin ());
}


// QTextLength QTextFrameFormat::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextLength > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextLength > ((QTextLength)((QTextFrameFormat *)cls)->height ());
}


// bool QTextFrameFormat::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFrameFormat *)cls)->isValid ());
}


// double QTextFrameFormat::leftMargin()


static void _init_f_leftMargin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_leftMargin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextFrameFormat *)cls)->leftMargin ());
}


// double QTextFrameFormat::margin()


static void _init_f_margin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_margin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextFrameFormat *)cls)->margin ());
}


// double QTextFrameFormat::padding()


static void _init_f_padding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_padding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextFrameFormat *)cls)->padding ());
}


// QFlags<QTextFormat::PageBreakFlag> QTextFrameFormat::pageBreakPolicy()


static void _init_f_pageBreakPolicy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QTextFormat::PageBreakFlag> > ();
}

static void _call_f_pageBreakPolicy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QTextFormat::PageBreakFlag> > ((QFlags<QTextFormat::PageBreakFlag>)((QTextFrameFormat *)cls)->pageBreakPolicy ());
}


// QTextFrameFormat::Position QTextFrameFormat::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextFrameFormat::Position>::target_type > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextFrameFormat::Position>::target_type > ((qt_gsi::Converter<QTextFrameFormat::Position>::target_type)qt_gsi::CppToQtAdaptor<QTextFrameFormat::Position>(((QTextFrameFormat *)cls)->position ()));
}


// double QTextFrameFormat::rightMargin()


static void _init_f_rightMargin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rightMargin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextFrameFormat *)cls)->rightMargin ());
}


// void QTextFrameFormat::setBorder(double border)


static void _init_f_setBorder_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("border");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBorder_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setBorder (arg1);
}


// void QTextFrameFormat::setBorderBrush(const QBrush &brush)


static void _init_f_setBorderBrush_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBorderBrush_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setBorderBrush (arg1);
}


// void QTextFrameFormat::setBorderStyle(QTextFrameFormat::BorderStyle style)


static void _init_f_setBorderStyle_3297 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBorderStyle_3297 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setBorderStyle (qt_gsi::QtToCppAdaptor<QTextFrameFormat::BorderStyle>(arg1).cref());
}


// void QTextFrameFormat::setBottomMargin(double margin)


static void _init_f_setBottomMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottomMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setBottomMargin (arg1);
}


// void QTextFrameFormat::setHeight(double height)


static void _init_f_setHeight_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("height");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHeight_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setHeight (arg1);
}


// void QTextFrameFormat::setHeight(const QTextLength &height)


static void _init_f_setHeight_2425 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("height");
  decl->add_arg<const QTextLength & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHeight_2425 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextLength &arg1 = gsi::arg_reader<const QTextLength & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setHeight (arg1);
}


// void QTextFrameFormat::setLeftMargin(double margin)


static void _init_f_setLeftMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeftMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setLeftMargin (arg1);
}


// void QTextFrameFormat::setMargin(double margin)


static void _init_f_setMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setMargin (arg1);
}


// void QTextFrameFormat::setPadding(double padding)


static void _init_f_setPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setPadding (arg1);
}


// void QTextFrameFormat::setPageBreakPolicy(QFlags<QTextFormat::PageBreakFlag> flags)


static void _init_f_setPageBreakPolicy_3611 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<QFlags<QTextFormat::PageBreakFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPageBreakPolicy_3611 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QTextFormat::PageBreakFlag> arg1 = gsi::arg_reader<QFlags<QTextFormat::PageBreakFlag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setPageBreakPolicy (arg1);
}


// void QTextFrameFormat::setPosition(QTextFrameFormat::Position f)


static void _init_f_setPosition_3015 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("f");
  decl->add_arg<const qt_gsi::Converter<QTextFrameFormat::Position>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPosition_3015 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextFrameFormat::Position>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextFrameFormat::Position>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setPosition (qt_gsi::QtToCppAdaptor<QTextFrameFormat::Position>(arg1).cref());
}


// void QTextFrameFormat::setRightMargin(double margin)


static void _init_f_setRightMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRightMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setRightMargin (arg1);
}


// void QTextFrameFormat::setTopMargin(double margin)


static void _init_f_setTopMargin_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margin");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTopMargin_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setTopMargin (arg1);
}


// void QTextFrameFormat::setWidth(double width)


static void _init_f_setWidth_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidth_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setWidth (arg1);
}


// void QTextFrameFormat::setWidth(const QTextLength &length)


static void _init_f_setWidth_2425 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("length");
  decl->add_arg<const QTextLength & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidth_2425 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextLength &arg1 = gsi::arg_reader<const QTextLength & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrameFormat *)cls)->setWidth (arg1);
}


// double QTextFrameFormat::topMargin()


static void _init_f_topMargin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_topMargin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextFrameFormat *)cls)->topMargin ());
}


// QTextLength QTextFrameFormat::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextLength > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextLength > ((QTextLength)((QTextFrameFormat *)cls)->width ());
}



namespace gsi
{

static gsi::Methods methods_QTextFrameFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFrameFormat::QTextFrameFormat()\nThis method creates an object of class QTextFrameFormat.", &_init_ctor_QTextFrameFormat_0, &_call_ctor_QTextFrameFormat_0);
  methods += new qt_gsi::GenericMethod (":border", "@brief Method double QTextFrameFormat::border()\n", true, &_init_f_border_c0, &_call_f_border_c0);
  methods += new qt_gsi::GenericMethod (":borderBrush", "@brief Method QBrush QTextFrameFormat::borderBrush()\n", true, &_init_f_borderBrush_c0, &_call_f_borderBrush_c0);
  methods += new qt_gsi::GenericMethod (":borderStyle", "@brief Method QTextFrameFormat::BorderStyle QTextFrameFormat::borderStyle()\n", true, &_init_f_borderStyle_c0, &_call_f_borderStyle_c0);
  methods += new qt_gsi::GenericMethod (":bottomMargin", "@brief Method double QTextFrameFormat::bottomMargin()\n", true, &_init_f_bottomMargin_c0, &_call_f_bottomMargin_c0);
  methods += new qt_gsi::GenericMethod ("height", "@brief Method QTextLength QTextFrameFormat::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextFrameFormat::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":leftMargin", "@brief Method double QTextFrameFormat::leftMargin()\n", true, &_init_f_leftMargin_c0, &_call_f_leftMargin_c0);
  methods += new qt_gsi::GenericMethod (":margin", "@brief Method double QTextFrameFormat::margin()\n", true, &_init_f_margin_c0, &_call_f_margin_c0);
  methods += new qt_gsi::GenericMethod (":padding", "@brief Method double QTextFrameFormat::padding()\n", true, &_init_f_padding_c0, &_call_f_padding_c0);
  methods += new qt_gsi::GenericMethod (":pageBreakPolicy", "@brief Method QFlags<QTextFormat::PageBreakFlag> QTextFrameFormat::pageBreakPolicy()\n", true, &_init_f_pageBreakPolicy_c0, &_call_f_pageBreakPolicy_c0);
  methods += new qt_gsi::GenericMethod (":position", "@brief Method QTextFrameFormat::Position QTextFrameFormat::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod (":rightMargin", "@brief Method double QTextFrameFormat::rightMargin()\n", true, &_init_f_rightMargin_c0, &_call_f_rightMargin_c0);
  methods += new qt_gsi::GenericMethod ("setBorder|border=", "@brief Method void QTextFrameFormat::setBorder(double border)\n", false, &_init_f_setBorder_1071, &_call_f_setBorder_1071);
  methods += new qt_gsi::GenericMethod ("setBorderBrush|borderBrush=", "@brief Method void QTextFrameFormat::setBorderBrush(const QBrush &brush)\n", false, &_init_f_setBorderBrush_1910, &_call_f_setBorderBrush_1910);
  methods += new qt_gsi::GenericMethod ("setBorderStyle|borderStyle=", "@brief Method void QTextFrameFormat::setBorderStyle(QTextFrameFormat::BorderStyle style)\n", false, &_init_f_setBorderStyle_3297, &_call_f_setBorderStyle_3297);
  methods += new qt_gsi::GenericMethod ("setBottomMargin|bottomMargin=", "@brief Method void QTextFrameFormat::setBottomMargin(double margin)\n", false, &_init_f_setBottomMargin_1071, &_call_f_setBottomMargin_1071);
  methods += new qt_gsi::GenericMethod ("setHeight", "@brief Method void QTextFrameFormat::setHeight(double height)\n", false, &_init_f_setHeight_1071, &_call_f_setHeight_1071);
  methods += new qt_gsi::GenericMethod ("setHeight", "@brief Method void QTextFrameFormat::setHeight(const QTextLength &height)\n", false, &_init_f_setHeight_2425, &_call_f_setHeight_2425);
  methods += new qt_gsi::GenericMethod ("setLeftMargin|leftMargin=", "@brief Method void QTextFrameFormat::setLeftMargin(double margin)\n", false, &_init_f_setLeftMargin_1071, &_call_f_setLeftMargin_1071);
  methods += new qt_gsi::GenericMethod ("setMargin|margin=", "@brief Method void QTextFrameFormat::setMargin(double margin)\n", false, &_init_f_setMargin_1071, &_call_f_setMargin_1071);
  methods += new qt_gsi::GenericMethod ("setPadding|padding=", "@brief Method void QTextFrameFormat::setPadding(double padding)\n", false, &_init_f_setPadding_1071, &_call_f_setPadding_1071);
  methods += new qt_gsi::GenericMethod ("setPageBreakPolicy|pageBreakPolicy=", "@brief Method void QTextFrameFormat::setPageBreakPolicy(QFlags<QTextFormat::PageBreakFlag> flags)\n", false, &_init_f_setPageBreakPolicy_3611, &_call_f_setPageBreakPolicy_3611);
  methods += new qt_gsi::GenericMethod ("setPosition|position=", "@brief Method void QTextFrameFormat::setPosition(QTextFrameFormat::Position f)\n", false, &_init_f_setPosition_3015, &_call_f_setPosition_3015);
  methods += new qt_gsi::GenericMethod ("setRightMargin|rightMargin=", "@brief Method void QTextFrameFormat::setRightMargin(double margin)\n", false, &_init_f_setRightMargin_1071, &_call_f_setRightMargin_1071);
  methods += new qt_gsi::GenericMethod ("setTopMargin|topMargin=", "@brief Method void QTextFrameFormat::setTopMargin(double margin)\n", false, &_init_f_setTopMargin_1071, &_call_f_setTopMargin_1071);
  methods += new qt_gsi::GenericMethod ("setWidth", "@brief Method void QTextFrameFormat::setWidth(double width)\n", false, &_init_f_setWidth_1071, &_call_f_setWidth_1071);
  methods += new qt_gsi::GenericMethod ("setWidth", "@brief Method void QTextFrameFormat::setWidth(const QTextLength &length)\n", false, &_init_f_setWidth_2425, &_call_f_setWidth_2425);
  methods += new qt_gsi::GenericMethod (":topMargin", "@brief Method double QTextFrameFormat::topMargin()\n", true, &_init_f_topMargin_c0, &_call_f_topMargin_c0);
  methods += new qt_gsi::GenericMethod ("width", "@brief Method QTextLength QTextFrameFormat::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  return methods;
}

gsi::Class<QTextFormat> &qtdecl_QTextFormat ();

gsi::Class<QTextFrameFormat> decl_QTextFrameFormat (qtdecl_QTextFormat (), "QtGui", "QTextFrameFormat",
  methods_QTextFrameFormat (),
  "@qt\n@brief Binding of QTextFrameFormat");


GSI_QTGUI_PUBLIC gsi::Class<QTextFrameFormat> &qtdecl_QTextFrameFormat () { return decl_QTextFrameFormat; }

}


//  Implementation of the enum wrapper class for QTextFrameFormat::BorderStyle
namespace qt_gsi
{

static gsi::Enum<QTextFrameFormat::BorderStyle> decl_QTextFrameFormat_BorderStyle_Enum ("QtGui", "QTextFrameFormat_BorderStyle",
    gsi::enum_const ("BorderStyle_None", QTextFrameFormat::BorderStyle_None, "@brief Enum constant QTextFrameFormat::BorderStyle_None") +
    gsi::enum_const ("BorderStyle_Dotted", QTextFrameFormat::BorderStyle_Dotted, "@brief Enum constant QTextFrameFormat::BorderStyle_Dotted") +
    gsi::enum_const ("BorderStyle_Dashed", QTextFrameFormat::BorderStyle_Dashed, "@brief Enum constant QTextFrameFormat::BorderStyle_Dashed") +
    gsi::enum_const ("BorderStyle_Solid", QTextFrameFormat::BorderStyle_Solid, "@brief Enum constant QTextFrameFormat::BorderStyle_Solid") +
    gsi::enum_const ("BorderStyle_Double", QTextFrameFormat::BorderStyle_Double, "@brief Enum constant QTextFrameFormat::BorderStyle_Double") +
    gsi::enum_const ("BorderStyle_DotDash", QTextFrameFormat::BorderStyle_DotDash, "@brief Enum constant QTextFrameFormat::BorderStyle_DotDash") +
    gsi::enum_const ("BorderStyle_DotDotDash", QTextFrameFormat::BorderStyle_DotDotDash, "@brief Enum constant QTextFrameFormat::BorderStyle_DotDotDash") +
    gsi::enum_const ("BorderStyle_Groove", QTextFrameFormat::BorderStyle_Groove, "@brief Enum constant QTextFrameFormat::BorderStyle_Groove") +
    gsi::enum_const ("BorderStyle_Ridge", QTextFrameFormat::BorderStyle_Ridge, "@brief Enum constant QTextFrameFormat::BorderStyle_Ridge") +
    gsi::enum_const ("BorderStyle_Inset", QTextFrameFormat::BorderStyle_Inset, "@brief Enum constant QTextFrameFormat::BorderStyle_Inset") +
    gsi::enum_const ("BorderStyle_Outset", QTextFrameFormat::BorderStyle_Outset, "@brief Enum constant QTextFrameFormat::BorderStyle_Outset"),
  "@qt\n@brief This class represents the QTextFrameFormat::BorderStyle enum");

static gsi::QFlagsClass<QTextFrameFormat::BorderStyle > decl_QTextFrameFormat_BorderStyle_Enums ("QtGui", "QTextFrameFormat_QFlags_BorderStyle",
  "@qt\n@brief This class represents the QFlags<QTextFrameFormat::BorderStyle> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextFrameFormat> inject_QTextFrameFormat_BorderStyle_Enum_in_parent (decl_QTextFrameFormat_BorderStyle_Enum.defs ());
static gsi::ClassExt<QTextFrameFormat> decl_QTextFrameFormat_BorderStyle_Enum_as_child (decl_QTextFrameFormat_BorderStyle_Enum, "BorderStyle");
static gsi::ClassExt<QTextFrameFormat> decl_QTextFrameFormat_BorderStyle_Enums_as_child (decl_QTextFrameFormat_BorderStyle_Enums, "QFlags_BorderStyle");

}


//  Implementation of the enum wrapper class for QTextFrameFormat::Position
namespace qt_gsi
{

static gsi::Enum<QTextFrameFormat::Position> decl_QTextFrameFormat_Position_Enum ("QtGui", "QTextFrameFormat_Position",
    gsi::enum_const ("InFlow", QTextFrameFormat::InFlow, "@brief Enum constant QTextFrameFormat::InFlow") +
    gsi::enum_const ("FloatLeft", QTextFrameFormat::FloatLeft, "@brief Enum constant QTextFrameFormat::FloatLeft") +
    gsi::enum_const ("FloatRight", QTextFrameFormat::FloatRight, "@brief Enum constant QTextFrameFormat::FloatRight"),
  "@qt\n@brief This class represents the QTextFrameFormat::Position enum");

static gsi::QFlagsClass<QTextFrameFormat::Position > decl_QTextFrameFormat_Position_Enums ("QtGui", "QTextFrameFormat_QFlags_Position",
  "@qt\n@brief This class represents the QFlags<QTextFrameFormat::Position> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextFrameFormat> inject_QTextFrameFormat_Position_Enum_in_parent (decl_QTextFrameFormat_Position_Enum.defs ());
static gsi::ClassExt<QTextFrameFormat> decl_QTextFrameFormat_Position_Enum_as_child (decl_QTextFrameFormat_Position_Enum, "Position");
static gsi::ClassExt<QTextFrameFormat> decl_QTextFrameFormat_Position_Enums_as_child (decl_QTextFrameFormat_Position_Enums, "QFlags_Position");

}


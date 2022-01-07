
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQFontMetrics.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFontMetrics>
#include <QFont>
#include <QPaintDevice>
#include <QRect>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFontMetrics

//  Constructor QFontMetrics::QFontMetrics(const QFont &)


static void _init_ctor_QFontMetrics_1801 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFont & > (argspec_0);
  decl->set_return_new<QFontMetrics> ();
}

static void _call_ctor_QFontMetrics_1801 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFont &arg1 = gsi::arg_reader<const QFont & >() (args, heap);
  ret.write<QFontMetrics *> (new QFontMetrics (arg1));
}


//  Constructor QFontMetrics::QFontMetrics(const QFont &font, const QPaintDevice *pd)


static void _init_ctor_QFontMetrics_4191 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("font");
  decl->add_arg<const QFont & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pd");
  decl->add_arg<const QPaintDevice * > (argspec_1);
  decl->set_return_new<QFontMetrics> ();
}

static void _call_ctor_QFontMetrics_4191 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFont &arg1 = gsi::arg_reader<const QFont & >() (args, heap);
  const QPaintDevice *arg2 = gsi::arg_reader<const QPaintDevice * >() (args, heap);
  ret.write<QFontMetrics *> (new QFontMetrics (arg1, arg2));
}


//  Constructor QFontMetrics::QFontMetrics(const QFontMetrics &)


static void _init_ctor_QFontMetrics_2528 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFontMetrics & > (argspec_0);
  decl->set_return_new<QFontMetrics> ();
}

static void _call_ctor_QFontMetrics_2528 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetrics &arg1 = gsi::arg_reader<const QFontMetrics & >() (args, heap);
  ret.write<QFontMetrics *> (new QFontMetrics (arg1));
}


// int QFontMetrics::ascent()


static void _init_f_ascent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_ascent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->ascent ());
}


// int QFontMetrics::averageCharWidth()


static void _init_f_averageCharWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_averageCharWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->averageCharWidth ());
}


// QRect QFontMetrics::boundingRect(QChar)


static void _init_f_boundingRect_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_boundingRect_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type & >() (args, heap);
  ret.write<QRect > ((QRect)((QFontMetrics *)cls)->boundingRect (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// QRect QFontMetrics::boundingRect(const QString &text)


static void _init_f_boundingRect_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_boundingRect_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QRect > ((QRect)((QFontMetrics *)cls)->boundingRect (arg1));
}


// QRect QFontMetrics::boundingRect(const QRect &r, int flags, const QString &text, int tabstops, int *tabarray)


static void _init_f_boundingRect_c5872 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("tabstops", true, "0");
  decl->add_arg<int > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("tabarray", true, "nullptr");
  decl->add_arg<int * > (argspec_4);
  decl->set_return<QRect > ();
}

static void _call_f_boundingRect_c5872 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  int arg4 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  int *arg5 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<QRect > ((QRect)((QFontMetrics *)cls)->boundingRect (arg1, arg2, arg3, arg4, arg5));
}


// QRect QFontMetrics::boundingRect(int x, int y, int w, int h, int flags, const QString &text, int tabstops, int *tabarray)


static void _init_f_boundingRect_c6824 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("w");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("h");
  decl->add_arg<int > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("flags");
  decl->add_arg<int > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("text");
  decl->add_arg<const QString & > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("tabstops", true, "0");
  decl->add_arg<int > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("tabarray", true, "nullptr");
  decl->add_arg<int * > (argspec_7);
  decl->set_return<QRect > ();
}

static void _call_f_boundingRect_c6824 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  int arg5 = gsi::arg_reader<int >() (args, heap);
  const QString &arg6 = gsi::arg_reader<const QString & >() (args, heap);
  int arg7 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  int *arg8 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<QRect > ((QRect)((QFontMetrics *)cls)->boundingRect (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8));
}


// int QFontMetrics::capHeight()


static void _init_f_capHeight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_capHeight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->capHeight ());
}


// int QFontMetrics::descent()


static void _init_f_descent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_descent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->descent ());
}


// QString QFontMetrics::elidedText(const QString &text, Qt::TextElideMode mode, int width, int flags)


static void _init_f_elidedText_c5277 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<Qt::TextElideMode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("width");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("flags", true, "0");
  decl->add_arg<int > (argspec_3);
  decl->set_return<QString > ();
}

static void _call_f_elidedText_c5277 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const qt_gsi::Converter<Qt::TextElideMode>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::TextElideMode>::target_type & >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  ret.write<QString > ((QString)((QFontMetrics *)cls)->elidedText (arg1, qt_gsi::QtToCppAdaptor<Qt::TextElideMode>(arg2).cref(), arg3, arg4));
}


// double QFontMetrics::fontDpi()


static void _init_f_fontDpi_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_fontDpi_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontMetrics *)cls)->fontDpi ());
}


// int QFontMetrics::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->height ());
}


// int QFontMetrics::horizontalAdvance(const QString &, int len)


static void _init_f_horizontalAdvance_c2684 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len", true, "-1");
  decl->add_arg<int > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_horizontalAdvance_c2684 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<int > ((int)((QFontMetrics *)cls)->horizontalAdvance (arg1, arg2));
}


// int QFontMetrics::horizontalAdvance(QChar)


static void _init_f_horizontalAdvance_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_horizontalAdvance_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type & >() (args, heap);
  ret.write<int > ((int)((QFontMetrics *)cls)->horizontalAdvance (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// bool QFontMetrics::inFont(QChar)


static void _init_f_inFont_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_inFont_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QFontMetrics *)cls)->inFont (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// bool QFontMetrics::inFontUcs4(unsigned int ucs4)


static void _init_f_inFontUcs4_c1772 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ucs4");
  decl->add_arg<unsigned int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_inFontUcs4_c1772 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned int arg1 = gsi::arg_reader<unsigned int >() (args, heap);
  ret.write<bool > ((bool)((QFontMetrics *)cls)->inFontUcs4 (arg1));
}


// int QFontMetrics::leading()


static void _init_f_leading_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_leading_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->leading ());
}


// int QFontMetrics::leftBearing(QChar)


static void _init_f_leftBearing_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_leftBearing_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type & >() (args, heap);
  ret.write<int > ((int)((QFontMetrics *)cls)->leftBearing (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// int QFontMetrics::lineSpacing()


static void _init_f_lineSpacing_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lineSpacing_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->lineSpacing ());
}


// int QFontMetrics::lineWidth()


static void _init_f_lineWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lineWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->lineWidth ());
}


// int QFontMetrics::maxWidth()


static void _init_f_maxWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_maxWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->maxWidth ());
}


// int QFontMetrics::minLeftBearing()


static void _init_f_minLeftBearing_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_minLeftBearing_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->minLeftBearing ());
}


// int QFontMetrics::minRightBearing()


static void _init_f_minRightBearing_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_minRightBearing_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->minRightBearing ());
}


// bool QFontMetrics::operator !=(const QFontMetrics &other)


static void _init_f_operator_excl__eq__c2528 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QFontMetrics & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2528 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetrics &arg1 = gsi::arg_reader<const QFontMetrics & >() (args, heap);
  ret.write<bool > ((bool)((QFontMetrics *)cls)->operator != (arg1));
}


// QFontMetrics &QFontMetrics::operator=(const QFontMetrics &)


static void _init_f_operator_eq__2528 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFontMetrics & > (argspec_0);
  decl->set_return<QFontMetrics & > ();
}

static void _call_f_operator_eq__2528 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetrics &arg1 = gsi::arg_reader<const QFontMetrics & >() (args, heap);
  ret.write<QFontMetrics & > ((QFontMetrics &)((QFontMetrics *)cls)->operator= (arg1));
}


// bool QFontMetrics::operator==(const QFontMetrics &other)


static void _init_f_operator_eq__eq__c2528 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QFontMetrics & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2528 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontMetrics &arg1 = gsi::arg_reader<const QFontMetrics & >() (args, heap);
  ret.write<bool > ((bool)((QFontMetrics *)cls)->operator== (arg1));
}


// int QFontMetrics::overlinePos()


static void _init_f_overlinePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_overlinePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->overlinePos ());
}


// int QFontMetrics::rightBearing(QChar)


static void _init_f_rightBearing_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_rightBearing_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type & >() (args, heap);
  ret.write<int > ((int)((QFontMetrics *)cls)->rightBearing (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// QSize QFontMetrics::size(int flags, const QString &str, int tabstops, int *tabarray)


static void _init_f_size_c4188 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("str");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("tabstops", true, "0");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("tabarray", true, "nullptr");
  decl->add_arg<int * > (argspec_3);
  decl->set_return<QSize > ();
}

static void _call_f_size_c4188 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  int *arg4 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<QSize > ((QSize)((QFontMetrics *)cls)->size (arg1, arg2, arg3, arg4));
}


// int QFontMetrics::strikeOutPos()


static void _init_f_strikeOutPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_strikeOutPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->strikeOutPos ());
}


// void QFontMetrics::swap(QFontMetrics &other)


static void _init_f_swap_1833 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QFontMetrics & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1833 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFontMetrics &arg1 = gsi::arg_reader<QFontMetrics & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFontMetrics *)cls)->swap (arg1);
}


// QRect QFontMetrics::tightBoundingRect(const QString &text)


static void _init_f_tightBoundingRect_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_tightBoundingRect_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QRect > ((QRect)((QFontMetrics *)cls)->tightBoundingRect (arg1));
}


// int QFontMetrics::underlinePos()


static void _init_f_underlinePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_underlinePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->underlinePos ());
}


// int QFontMetrics::xHeight()


static void _init_f_xHeight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_xHeight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontMetrics *)cls)->xHeight ());
}



namespace gsi
{

static gsi::Methods methods_QFontMetrics () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontMetrics::QFontMetrics(const QFont &)\nThis method creates an object of class QFontMetrics.", &_init_ctor_QFontMetrics_1801, &_call_ctor_QFontMetrics_1801);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontMetrics::QFontMetrics(const QFont &font, const QPaintDevice *pd)\nThis method creates an object of class QFontMetrics.", &_init_ctor_QFontMetrics_4191, &_call_ctor_QFontMetrics_4191);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontMetrics::QFontMetrics(const QFontMetrics &)\nThis method creates an object of class QFontMetrics.", &_init_ctor_QFontMetrics_2528, &_call_ctor_QFontMetrics_2528);
  methods += new qt_gsi::GenericMethod ("ascent", "@brief Method int QFontMetrics::ascent()\n", true, &_init_f_ascent_c0, &_call_f_ascent_c0);
  methods += new qt_gsi::GenericMethod ("averageCharWidth", "@brief Method int QFontMetrics::averageCharWidth()\n", true, &_init_f_averageCharWidth_c0, &_call_f_averageCharWidth_c0);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRect QFontMetrics::boundingRect(QChar)\n", true, &_init_f_boundingRect_c899, &_call_f_boundingRect_c899);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRect QFontMetrics::boundingRect(const QString &text)\n", true, &_init_f_boundingRect_c2025, &_call_f_boundingRect_c2025);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRect QFontMetrics::boundingRect(const QRect &r, int flags, const QString &text, int tabstops, int *tabarray)\n", true, &_init_f_boundingRect_c5872, &_call_f_boundingRect_c5872);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRect QFontMetrics::boundingRect(int x, int y, int w, int h, int flags, const QString &text, int tabstops, int *tabarray)\n", true, &_init_f_boundingRect_c6824, &_call_f_boundingRect_c6824);
  methods += new qt_gsi::GenericMethod ("capHeight", "@brief Method int QFontMetrics::capHeight()\n", true, &_init_f_capHeight_c0, &_call_f_capHeight_c0);
  methods += new qt_gsi::GenericMethod ("descent", "@brief Method int QFontMetrics::descent()\n", true, &_init_f_descent_c0, &_call_f_descent_c0);
  methods += new qt_gsi::GenericMethod ("elidedText", "@brief Method QString QFontMetrics::elidedText(const QString &text, Qt::TextElideMode mode, int width, int flags)\n", true, &_init_f_elidedText_c5277, &_call_f_elidedText_c5277);
  methods += new qt_gsi::GenericMethod ("fontDpi", "@brief Method double QFontMetrics::fontDpi()\n", true, &_init_f_fontDpi_c0, &_call_f_fontDpi_c0);
  methods += new qt_gsi::GenericMethod ("height", "@brief Method int QFontMetrics::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("horizontalAdvance", "@brief Method int QFontMetrics::horizontalAdvance(const QString &, int len)\n", true, &_init_f_horizontalAdvance_c2684, &_call_f_horizontalAdvance_c2684);
  methods += new qt_gsi::GenericMethod ("horizontalAdvance", "@brief Method int QFontMetrics::horizontalAdvance(QChar)\n", true, &_init_f_horizontalAdvance_c899, &_call_f_horizontalAdvance_c899);
  methods += new qt_gsi::GenericMethod ("inFont", "@brief Method bool QFontMetrics::inFont(QChar)\n", true, &_init_f_inFont_c899, &_call_f_inFont_c899);
  methods += new qt_gsi::GenericMethod ("inFontUcs4", "@brief Method bool QFontMetrics::inFontUcs4(unsigned int ucs4)\n", true, &_init_f_inFontUcs4_c1772, &_call_f_inFontUcs4_c1772);
  methods += new qt_gsi::GenericMethod ("leading", "@brief Method int QFontMetrics::leading()\n", true, &_init_f_leading_c0, &_call_f_leading_c0);
  methods += new qt_gsi::GenericMethod ("leftBearing", "@brief Method int QFontMetrics::leftBearing(QChar)\n", true, &_init_f_leftBearing_c899, &_call_f_leftBearing_c899);
  methods += new qt_gsi::GenericMethod ("lineSpacing", "@brief Method int QFontMetrics::lineSpacing()\n", true, &_init_f_lineSpacing_c0, &_call_f_lineSpacing_c0);
  methods += new qt_gsi::GenericMethod ("lineWidth", "@brief Method int QFontMetrics::lineWidth()\n", true, &_init_f_lineWidth_c0, &_call_f_lineWidth_c0);
  methods += new qt_gsi::GenericMethod ("maxWidth", "@brief Method int QFontMetrics::maxWidth()\n", true, &_init_f_maxWidth_c0, &_call_f_maxWidth_c0);
  methods += new qt_gsi::GenericMethod ("minLeftBearing", "@brief Method int QFontMetrics::minLeftBearing()\n", true, &_init_f_minLeftBearing_c0, &_call_f_minLeftBearing_c0);
  methods += new qt_gsi::GenericMethod ("minRightBearing", "@brief Method int QFontMetrics::minRightBearing()\n", true, &_init_f_minRightBearing_c0, &_call_f_minRightBearing_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QFontMetrics::operator !=(const QFontMetrics &other)\n", true, &_init_f_operator_excl__eq__c2528, &_call_f_operator_excl__eq__c2528);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QFontMetrics &QFontMetrics::operator=(const QFontMetrics &)\n", false, &_init_f_operator_eq__2528, &_call_f_operator_eq__2528);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QFontMetrics::operator==(const QFontMetrics &other)\n", true, &_init_f_operator_eq__eq__c2528, &_call_f_operator_eq__eq__c2528);
  methods += new qt_gsi::GenericMethod ("overlinePos", "@brief Method int QFontMetrics::overlinePos()\n", true, &_init_f_overlinePos_c0, &_call_f_overlinePos_c0);
  methods += new qt_gsi::GenericMethod ("rightBearing", "@brief Method int QFontMetrics::rightBearing(QChar)\n", true, &_init_f_rightBearing_c899, &_call_f_rightBearing_c899);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method QSize QFontMetrics::size(int flags, const QString &str, int tabstops, int *tabarray)\n", true, &_init_f_size_c4188, &_call_f_size_c4188);
  methods += new qt_gsi::GenericMethod ("strikeOutPos", "@brief Method int QFontMetrics::strikeOutPos()\n", true, &_init_f_strikeOutPos_c0, &_call_f_strikeOutPos_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QFontMetrics::swap(QFontMetrics &other)\n", false, &_init_f_swap_1833, &_call_f_swap_1833);
  methods += new qt_gsi::GenericMethod ("tightBoundingRect", "@brief Method QRect QFontMetrics::tightBoundingRect(const QString &text)\n", true, &_init_f_tightBoundingRect_c2025, &_call_f_tightBoundingRect_c2025);
  methods += new qt_gsi::GenericMethod ("underlinePos", "@brief Method int QFontMetrics::underlinePos()\n", true, &_init_f_underlinePos_c0, &_call_f_underlinePos_c0);
  methods += new qt_gsi::GenericMethod ("xHeight", "@brief Method int QFontMetrics::xHeight()\n", true, &_init_f_xHeight_c0, &_call_f_xHeight_c0);
  return methods;
}

gsi::Class<QFontMetrics> decl_QFontMetrics ("QtGui", "QFontMetrics",
  methods_QFontMetrics (),
  "@qt\n@brief Binding of QFontMetrics");


GSI_QTGUI_PUBLIC gsi::Class<QFontMetrics> &qtdecl_QFontMetrics () { return decl_QFontMetrics; }

}



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
*  @file gsiDeclQAudioBuffer.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioBuffer>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioBuffer

//  Constructor QAudioBuffer::QAudioBuffer()


static void _init_ctor_QAudioBuffer_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAudioBuffer> ();
}

static void _call_ctor_QAudioBuffer_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioBuffer *> (new QAudioBuffer ());
}


//  Constructor QAudioBuffer::QAudioBuffer(const QAudioBuffer &other)


static void _init_ctor_QAudioBuffer_2494 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioBuffer & > (argspec_0);
  decl->set_return_new<QAudioBuffer> ();
}

static void _call_ctor_QAudioBuffer_2494 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioBuffer &arg1 = gsi::arg_reader<const QAudioBuffer & >() (args, heap);
  ret.write<QAudioBuffer *> (new QAudioBuffer (arg1));
}


//  Constructor QAudioBuffer::QAudioBuffer(const QByteArray &data, const QAudioFormat &format, qint64 startTime)


static void _init_ctor_QAudioBuffer_5588 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QAudioFormat & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("startTime", true, "-1");
  decl->add_arg<qint64 > (argspec_2);
  decl->set_return_new<QAudioBuffer> ();
}

static void _call_ctor_QAudioBuffer_5588 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  const QAudioFormat &arg2 = gsi::arg_reader<const QAudioFormat & >() (args, heap);
  qint64 arg3 = args ? gsi::arg_reader<qint64 >() (args, heap) : gsi::arg_maker<qint64 >() (-1, heap);
  ret.write<QAudioBuffer *> (new QAudioBuffer (arg1, arg2, arg3));
}


//  Constructor QAudioBuffer::QAudioBuffer(int numFrames, const QAudioFormat &format, qint64 startTime)


static void _init_ctor_QAudioBuffer_4046 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("numFrames");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QAudioFormat & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("startTime", true, "-1");
  decl->add_arg<qint64 > (argspec_2);
  decl->set_return_new<QAudioBuffer> ();
}

static void _call_ctor_QAudioBuffer_4046 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QAudioFormat &arg2 = gsi::arg_reader<const QAudioFormat & >() (args, heap);
  qint64 arg3 = args ? gsi::arg_reader<qint64 >() (args, heap) : gsi::arg_maker<qint64 >() (-1, heap);
  ret.write<QAudioBuffer *> (new QAudioBuffer (arg1, arg2, arg3));
}


// int QAudioBuffer::byteCount()


static void _init_f_byteCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_byteCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioBuffer *)cls)->byteCount ());
}


// const void *QAudioBuffer::constData()


static void _init_f_constData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const void * > ();
}

static void _call_f_constData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const void * > ((const void *)((QAudioBuffer *)cls)->constData ());
}


// const void *QAudioBuffer::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const void * > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const void * > ((const void *)((QAudioBuffer *)cls)->data ());
}


// void *QAudioBuffer::data()


static void _init_f_data_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void * > ();
}

static void _call_f_data_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<void * > ((void *)((QAudioBuffer *)cls)->data ());
}


// qint64 QAudioBuffer::duration()


static void _init_f_duration_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_duration_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QAudioBuffer *)cls)->duration ());
}


// QAudioFormat QAudioBuffer::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioFormat > ((QAudioFormat)((QAudioBuffer *)cls)->format ());
}


// int QAudioBuffer::frameCount()


static void _init_f_frameCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_frameCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioBuffer *)cls)->frameCount ());
}


// bool QAudioBuffer::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioBuffer *)cls)->isValid ());
}


// QAudioBuffer &QAudioBuffer::operator=(const QAudioBuffer &other)


static void _init_f_operator_eq__2494 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QAudioBuffer & > (argspec_0);
  decl->set_return<QAudioBuffer & > ();
}

static void _call_f_operator_eq__2494 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioBuffer &arg1 = gsi::arg_reader<const QAudioBuffer & >() (args, heap);
  ret.write<QAudioBuffer & > ((QAudioBuffer &)((QAudioBuffer *)cls)->operator= (arg1));
}


// int QAudioBuffer::sampleCount()


static void _init_f_sampleCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_sampleCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioBuffer *)cls)->sampleCount ());
}


// qint64 QAudioBuffer::startTime()


static void _init_f_startTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_startTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QAudioBuffer *)cls)->startTime ());
}



namespace gsi
{

static gsi::Methods methods_QAudioBuffer () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioBuffer::QAudioBuffer()\nThis method creates an object of class QAudioBuffer.", &_init_ctor_QAudioBuffer_0, &_call_ctor_QAudioBuffer_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioBuffer::QAudioBuffer(const QAudioBuffer &other)\nThis method creates an object of class QAudioBuffer.", &_init_ctor_QAudioBuffer_2494, &_call_ctor_QAudioBuffer_2494);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioBuffer::QAudioBuffer(const QByteArray &data, const QAudioFormat &format, qint64 startTime)\nThis method creates an object of class QAudioBuffer.", &_init_ctor_QAudioBuffer_5588, &_call_ctor_QAudioBuffer_5588);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioBuffer::QAudioBuffer(int numFrames, const QAudioFormat &format, qint64 startTime)\nThis method creates an object of class QAudioBuffer.", &_init_ctor_QAudioBuffer_4046, &_call_ctor_QAudioBuffer_4046);
  methods += new qt_gsi::GenericMethod ("byteCount", "@brief Method int QAudioBuffer::byteCount()\n", true, &_init_f_byteCount_c0, &_call_f_byteCount_c0);
  methods += new qt_gsi::GenericMethod ("constData", "@brief Method const void *QAudioBuffer::constData()\n", true, &_init_f_constData_c0, &_call_f_constData_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method const void *QAudioBuffer::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method void *QAudioBuffer::data()\n", false, &_init_f_data_0, &_call_f_data_0);
  methods += new qt_gsi::GenericMethod ("duration", "@brief Method qint64 QAudioBuffer::duration()\n", true, &_init_f_duration_c0, &_call_f_duration_c0);
  methods += new qt_gsi::GenericMethod ("format", "@brief Method QAudioFormat QAudioBuffer::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("frameCount", "@brief Method int QAudioBuffer::frameCount()\n", true, &_init_f_frameCount_c0, &_call_f_frameCount_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QAudioBuffer::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QAudioBuffer &QAudioBuffer::operator=(const QAudioBuffer &other)\n", false, &_init_f_operator_eq__2494, &_call_f_operator_eq__2494);
  methods += new qt_gsi::GenericMethod ("sampleCount", "@brief Method int QAudioBuffer::sampleCount()\n", true, &_init_f_sampleCount_c0, &_call_f_sampleCount_c0);
  methods += new qt_gsi::GenericMethod ("startTime", "@brief Method qint64 QAudioBuffer::startTime()\n", true, &_init_f_startTime_c0, &_call_f_startTime_c0);
  return methods;
}

gsi::Class<QAudioBuffer> decl_QAudioBuffer ("QtMultimedia", "QAudioBuffer",
  methods_QAudioBuffer (),
  "@qt\n@brief Binding of QAudioBuffer");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioBuffer> &qtdecl_QAudioBuffer () { return decl_QAudioBuffer; }

}


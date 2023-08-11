
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
*  @file gsiDeclQColorSpace.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QColorSpace>
#include <QColorTransform>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QColorSpace

//  Constructor QColorSpace::QColorSpace()


static void _init_ctor_QColorSpace_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColorSpace *> (new QColorSpace ());
}


//  Constructor QColorSpace::QColorSpace(QColorSpace::NamedColorSpace namedColorSpace)


static void _init_ctor_QColorSpace_3124 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namedColorSpace");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::NamedColorSpace>::target_type & > (argspec_0);
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_3124 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QColorSpace::NamedColorSpace>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::NamedColorSpace>::target_type & >() (args, heap);
  ret.write<QColorSpace *> (new QColorSpace (qt_gsi::QtToCppAdaptor<QColorSpace::NamedColorSpace>(arg1).cref()));
}


//  Constructor QColorSpace::QColorSpace(QColorSpace::Primaries primaries, QColorSpace::TransferFunction transferFunction, float gamma)


static void _init_ctor_QColorSpace_6641 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("primaries");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::Primaries>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("transferFunction");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("gamma", true, "0.0f");
  decl->add_arg<float > (argspec_2);
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_6641 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QColorSpace::Primaries>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::Primaries>::target_type & >() (args, heap);
  const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & >() (args, heap);
  float arg3 = args ? gsi::arg_reader<float >() (args, heap) : gsi::arg_maker<float >() (0.0f, heap);
  ret.write<QColorSpace *> (new QColorSpace (qt_gsi::QtToCppAdaptor<QColorSpace::Primaries>(arg1).cref(), qt_gsi::QtToCppAdaptor<QColorSpace::TransferFunction>(arg2).cref(), arg3));
}


//  Constructor QColorSpace::QColorSpace(QColorSpace::Primaries primaries, float gamma)


static void _init_ctor_QColorSpace_3438 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("primaries");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::Primaries>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("gamma");
  decl->add_arg<float > (argspec_1);
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_3438 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QColorSpace::Primaries>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::Primaries>::target_type & >() (args, heap);
  float arg2 = gsi::arg_reader<float >() (args, heap);
  ret.write<QColorSpace *> (new QColorSpace (qt_gsi::QtToCppAdaptor<QColorSpace::Primaries>(arg1).cref(), arg2));
}


//  Constructor QColorSpace::QColorSpace(QColorSpace::Primaries primaries, const QList<uint16_t> &transferFunctionTable)


static void _init_ctor_QColorSpace_5158 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("primaries");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::Primaries>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("transferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_1);
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_5158 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QColorSpace::Primaries>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::Primaries>::target_type & >() (args, heap);
  const QList<uint16_t> &arg2 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  ret.write<QColorSpace *> (new QColorSpace (qt_gsi::QtToCppAdaptor<QColorSpace::Primaries>(arg1).cref(), arg2));
}


//  Constructor QColorSpace::QColorSpace(const QPointF &whitePoint, const QPointF &redPoint, const QPointF &greenPoint, const QPointF &bluePoint, QColorSpace::TransferFunction transferFunction, float gamma)


static void _init_ctor_QColorSpace_11685 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("whitePoint");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("redPoint");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("greenPoint");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("bluePoint");
  decl->add_arg<const QPointF & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("transferFunction");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("gamma", true, "0.0f");
  decl->add_arg<float > (argspec_5);
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_11685 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg4 = gsi::arg_reader<const QPointF & >() (args, heap);
  const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & arg5 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & >() (args, heap);
  float arg6 = args ? gsi::arg_reader<float >() (args, heap) : gsi::arg_maker<float >() (0.0f, heap);
  ret.write<QColorSpace *> (new QColorSpace (arg1, arg2, arg3, arg4, qt_gsi::QtToCppAdaptor<QColorSpace::TransferFunction>(arg5).cref(), arg6));
}


//  Constructor QColorSpace::QColorSpace(const QPointF &whitePoint, const QPointF &redPoint, const QPointF &greenPoint, const QPointF &bluePoint, const QList<uint16_t> &transferFunctionTable)


static void _init_ctor_QColorSpace_10202 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("whitePoint");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("redPoint");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("greenPoint");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("bluePoint");
  decl->add_arg<const QPointF & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("transferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_4);
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_10202 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg4 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QList<uint16_t> &arg5 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  ret.write<QColorSpace *> (new QColorSpace (arg1, arg2, arg3, arg4, arg5));
}


//  Constructor QColorSpace::QColorSpace(const QPointF &whitePoint, const QPointF &redPoint, const QPointF &greenPoint, const QPointF &bluePoint, const QList<uint16_t> &redTransferFunctionTable, const QList<uint16_t> &greenTransferFunctionTable, const QList<uint16_t> &blueTransferFunctionTable)


static void _init_ctor_QColorSpace_15366 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("whitePoint");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("redPoint");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("greenPoint");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("bluePoint");
  decl->add_arg<const QPointF & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("redTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("greenTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("blueTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_6);
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_15366 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg4 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QList<uint16_t> &arg5 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  const QList<uint16_t> &arg6 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  const QList<uint16_t> &arg7 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  ret.write<QColorSpace *> (new QColorSpace (arg1, arg2, arg3, arg4, arg5, arg6, arg7));
}


//  Constructor QColorSpace::QColorSpace(const QColorSpace &colorSpace)


static void _init_ctor_QColorSpace_2397 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("colorSpace");
  decl->add_arg<const QColorSpace & > (argspec_0);
  decl->set_return_new<QColorSpace> ();
}

static void _call_ctor_QColorSpace_2397 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColorSpace &arg1 = gsi::arg_reader<const QColorSpace & >() (args, heap);
  ret.write<QColorSpace *> (new QColorSpace (arg1));
}


// QString QColorSpace::description()


static void _init_f_description_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_description_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QColorSpace *)cls)->description ());
}


// void QColorSpace::detach()


static void _init_f_detach_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_detach_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QColorSpace *)cls)->detach ();
}


// float QColorSpace::gamma()


static void _init_f_gamma_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_gamma_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QColorSpace *)cls)->gamma ());
}


// QByteArray QColorSpace::iccProfile()


static void _init_f_iccProfile_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_iccProfile_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QColorSpace *)cls)->iccProfile ());
}


// bool QColorSpace::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QColorSpace *)cls)->isValid ());
}


// QColorSpace &QColorSpace::operator=(const QColorSpace &colorSpace)


static void _init_f_operator_eq__2397 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("colorSpace");
  decl->add_arg<const QColorSpace & > (argspec_0);
  decl->set_return<QColorSpace & > ();
}

static void _call_f_operator_eq__2397 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColorSpace &arg1 = gsi::arg_reader<const QColorSpace & >() (args, heap);
  ret.write<QColorSpace & > ((QColorSpace &)((QColorSpace *)cls)->operator= (arg1));
}


// QColorSpace::Primaries QColorSpace::primaries()


static void _init_f_primaries_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QColorSpace::Primaries>::target_type > ();
}

static void _call_f_primaries_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QColorSpace::Primaries>::target_type > ((qt_gsi::Converter<QColorSpace::Primaries>::target_type)qt_gsi::CppToQtAdaptor<QColorSpace::Primaries>(((QColorSpace *)cls)->primaries ()));
}


// void QColorSpace::setDescription(const QString &description)


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
  ((QColorSpace *)cls)->setDescription (arg1);
}


// void QColorSpace::setPrimaries(QColorSpace::Primaries primariesId)


static void _init_f_setPrimaries_2576 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("primariesId");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::Primaries>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPrimaries_2576 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QColorSpace::Primaries>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::Primaries>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QColorSpace *)cls)->setPrimaries (qt_gsi::QtToCppAdaptor<QColorSpace::Primaries>(arg1).cref());
}


// void QColorSpace::setPrimaries(const QPointF &whitePoint, const QPointF &redPoint, const QPointF &greenPoint, const QPointF &bluePoint)


static void _init_f_setPrimaries_7620 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("whitePoint");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("redPoint");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("greenPoint");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("bluePoint");
  decl->add_arg<const QPointF & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_setPrimaries_7620 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg4 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QColorSpace *)cls)->setPrimaries (arg1, arg2, arg3, arg4);
}


// void QColorSpace::setTransferFunction(QColorSpace::TransferFunction transferFunction, float gamma)


static void _init_f_setTransferFunction_4173 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("transferFunction");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("gamma", true, "0.0f");
  decl->add_arg<float > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setTransferFunction_4173 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & >() (args, heap);
  float arg2 = args ? gsi::arg_reader<float >() (args, heap) : gsi::arg_maker<float >() (0.0f, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QColorSpace *)cls)->setTransferFunction (qt_gsi::QtToCppAdaptor<QColorSpace::TransferFunction>(arg1).cref(), arg2);
}


// void QColorSpace::setTransferFunction(const QList<uint16_t> &transferFunctionTable)


static void _init_f_setTransferFunction_2690 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("transferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTransferFunction_2690 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<uint16_t> &arg1 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QColorSpace *)cls)->setTransferFunction (arg1);
}


// void QColorSpace::setTransferFunctions(const QList<uint16_t> &redTransferFunctionTable, const QList<uint16_t> &greenTransferFunctionTable, const QList<uint16_t> &blueTransferFunctionTable)


static void _init_f_setTransferFunctions_7854 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("redTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("greenTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("blueTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setTransferFunctions_7854 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<uint16_t> &arg1 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  const QList<uint16_t> &arg2 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  const QList<uint16_t> &arg3 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QColorSpace *)cls)->setTransferFunctions (arg1, arg2, arg3);
}


// void QColorSpace::swap(QColorSpace &colorSpace)


static void _init_f_swap_1702 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("colorSpace");
  decl->add_arg<QColorSpace & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1702 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QColorSpace &arg1 = gsi::arg_reader<QColorSpace & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QColorSpace *)cls)->swap (arg1);
}


// QColorSpace::TransferFunction QColorSpace::transferFunction()


static void _init_f_transferFunction_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QColorSpace::TransferFunction>::target_type > ();
}

static void _call_f_transferFunction_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QColorSpace::TransferFunction>::target_type > ((qt_gsi::Converter<QColorSpace::TransferFunction>::target_type)qt_gsi::CppToQtAdaptor<QColorSpace::TransferFunction>(((QColorSpace *)cls)->transferFunction ()));
}


// QColorTransform QColorSpace::transformationToColorSpace(const QColorSpace &colorspace)


static void _init_f_transformationToColorSpace_c2397 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("colorspace");
  decl->add_arg<const QColorSpace & > (argspec_0);
  decl->set_return<QColorTransform > ();
}

static void _call_f_transformationToColorSpace_c2397 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColorSpace &arg1 = gsi::arg_reader<const QColorSpace & >() (args, heap);
  ret.write<QColorTransform > ((QColorTransform)((QColorSpace *)cls)->transformationToColorSpace (arg1));
}


// QColorSpace QColorSpace::withTransferFunction(QColorSpace::TransferFunction transferFunction, float gamma)


static void _init_f_withTransferFunction_c4173 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("transferFunction");
  decl->add_arg<const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("gamma", true, "0.0f");
  decl->add_arg<float > (argspec_1);
  decl->set_return<QColorSpace > ();
}

static void _call_f_withTransferFunction_c4173 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QColorSpace::TransferFunction>::target_type & >() (args, heap);
  float arg2 = args ? gsi::arg_reader<float >() (args, heap) : gsi::arg_maker<float >() (0.0f, heap);
  ret.write<QColorSpace > ((QColorSpace)((QColorSpace *)cls)->withTransferFunction (qt_gsi::QtToCppAdaptor<QColorSpace::TransferFunction>(arg1).cref(), arg2));
}


// QColorSpace QColorSpace::withTransferFunction(const QList<uint16_t> &transferFunctionTable)


static void _init_f_withTransferFunction_c2690 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("transferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_0);
  decl->set_return<QColorSpace > ();
}

static void _call_f_withTransferFunction_c2690 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<uint16_t> &arg1 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  ret.write<QColorSpace > ((QColorSpace)((QColorSpace *)cls)->withTransferFunction (arg1));
}


// QColorSpace QColorSpace::withTransferFunctions(const QList<uint16_t> &redTransferFunctionTable, const QList<uint16_t> &greenTransferFunctionTable, const QList<uint16_t> &blueTransferFunctionTable)


static void _init_f_withTransferFunctions_c7854 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("redTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("greenTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("blueTransferFunctionTable");
  decl->add_arg<const QList<uint16_t> & > (argspec_2);
  decl->set_return<QColorSpace > ();
}

static void _call_f_withTransferFunctions_c7854 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<uint16_t> &arg1 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  const QList<uint16_t> &arg2 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  const QList<uint16_t> &arg3 = gsi::arg_reader<const QList<uint16_t> & >() (args, heap);
  ret.write<QColorSpace > ((QColorSpace)((QColorSpace *)cls)->withTransferFunctions (arg1, arg2, arg3));
}


// static QColorSpace QColorSpace::fromIccProfile(const QByteArray &iccProfile)


static void _init_f_fromIccProfile_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("iccProfile");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QColorSpace > ();
}

static void _call_f_fromIccProfile_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QColorSpace > ((QColorSpace)QColorSpace::fromIccProfile (arg1));
}



namespace gsi
{

static gsi::Methods methods_QColorSpace () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace()\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_0, &_call_ctor_QColorSpace_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace(QColorSpace::NamedColorSpace namedColorSpace)\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_3124, &_call_ctor_QColorSpace_3124);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace(QColorSpace::Primaries primaries, QColorSpace::TransferFunction transferFunction, float gamma)\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_6641, &_call_ctor_QColorSpace_6641);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace(QColorSpace::Primaries primaries, float gamma)\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_3438, &_call_ctor_QColorSpace_3438);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace(QColorSpace::Primaries primaries, const QList<uint16_t> &transferFunctionTable)\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_5158, &_call_ctor_QColorSpace_5158);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace(const QPointF &whitePoint, const QPointF &redPoint, const QPointF &greenPoint, const QPointF &bluePoint, QColorSpace::TransferFunction transferFunction, float gamma)\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_11685, &_call_ctor_QColorSpace_11685);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace(const QPointF &whitePoint, const QPointF &redPoint, const QPointF &greenPoint, const QPointF &bluePoint, const QList<uint16_t> &transferFunctionTable)\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_10202, &_call_ctor_QColorSpace_10202);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace(const QPointF &whitePoint, const QPointF &redPoint, const QPointF &greenPoint, const QPointF &bluePoint, const QList<uint16_t> &redTransferFunctionTable, const QList<uint16_t> &greenTransferFunctionTable, const QList<uint16_t> &blueTransferFunctionTable)\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_15366, &_call_ctor_QColorSpace_15366);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColorSpace::QColorSpace(const QColorSpace &colorSpace)\nThis method creates an object of class QColorSpace.", &_init_ctor_QColorSpace_2397, &_call_ctor_QColorSpace_2397);
  methods += new qt_gsi::GenericMethod (":description", "@brief Method QString QColorSpace::description()\n", true, &_init_f_description_c0, &_call_f_description_c0);
  methods += new qt_gsi::GenericMethod ("detach", "@brief Method void QColorSpace::detach()\n", false, &_init_f_detach_0, &_call_f_detach_0);
  methods += new qt_gsi::GenericMethod ("gamma", "@brief Method float QColorSpace::gamma()\n", true, &_init_f_gamma_c0, &_call_f_gamma_c0);
  methods += new qt_gsi::GenericMethod ("iccProfile", "@brief Method QByteArray QColorSpace::iccProfile()\n", true, &_init_f_iccProfile_c0, &_call_f_iccProfile_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QColorSpace::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QColorSpace &QColorSpace::operator=(const QColorSpace &colorSpace)\n", false, &_init_f_operator_eq__2397, &_call_f_operator_eq__2397);
  methods += new qt_gsi::GenericMethod (":primaries", "@brief Method QColorSpace::Primaries QColorSpace::primaries()\n", true, &_init_f_primaries_c0, &_call_f_primaries_c0);
  methods += new qt_gsi::GenericMethod ("setDescription|description=", "@brief Method void QColorSpace::setDescription(const QString &description)\n", false, &_init_f_setDescription_2025, &_call_f_setDescription_2025);
  methods += new qt_gsi::GenericMethod ("setPrimaries|primaries=", "@brief Method void QColorSpace::setPrimaries(QColorSpace::Primaries primariesId)\n", false, &_init_f_setPrimaries_2576, &_call_f_setPrimaries_2576);
  methods += new qt_gsi::GenericMethod ("setPrimaries", "@brief Method void QColorSpace::setPrimaries(const QPointF &whitePoint, const QPointF &redPoint, const QPointF &greenPoint, const QPointF &bluePoint)\n", false, &_init_f_setPrimaries_7620, &_call_f_setPrimaries_7620);
  methods += new qt_gsi::GenericMethod ("setTransferFunction", "@brief Method void QColorSpace::setTransferFunction(QColorSpace::TransferFunction transferFunction, float gamma)\n", false, &_init_f_setTransferFunction_4173, &_call_f_setTransferFunction_4173);
  methods += new qt_gsi::GenericMethod ("setTransferFunction|transferFunction=", "@brief Method void QColorSpace::setTransferFunction(const QList<uint16_t> &transferFunctionTable)\n", false, &_init_f_setTransferFunction_2690, &_call_f_setTransferFunction_2690);
  methods += new qt_gsi::GenericMethod ("setTransferFunctions", "@brief Method void QColorSpace::setTransferFunctions(const QList<uint16_t> &redTransferFunctionTable, const QList<uint16_t> &greenTransferFunctionTable, const QList<uint16_t> &blueTransferFunctionTable)\n", false, &_init_f_setTransferFunctions_7854, &_call_f_setTransferFunctions_7854);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QColorSpace::swap(QColorSpace &colorSpace)\n", false, &_init_f_swap_1702, &_call_f_swap_1702);
  methods += new qt_gsi::GenericMethod (":transferFunction", "@brief Method QColorSpace::TransferFunction QColorSpace::transferFunction()\n", true, &_init_f_transferFunction_c0, &_call_f_transferFunction_c0);
  methods += new qt_gsi::GenericMethod ("transformationToColorSpace", "@brief Method QColorTransform QColorSpace::transformationToColorSpace(const QColorSpace &colorspace)\n", true, &_init_f_transformationToColorSpace_c2397, &_call_f_transformationToColorSpace_c2397);
  methods += new qt_gsi::GenericMethod ("withTransferFunction", "@brief Method QColorSpace QColorSpace::withTransferFunction(QColorSpace::TransferFunction transferFunction, float gamma)\n", true, &_init_f_withTransferFunction_c4173, &_call_f_withTransferFunction_c4173);
  methods += new qt_gsi::GenericMethod ("withTransferFunction", "@brief Method QColorSpace QColorSpace::withTransferFunction(const QList<uint16_t> &transferFunctionTable)\n", true, &_init_f_withTransferFunction_c2690, &_call_f_withTransferFunction_c2690);
  methods += new qt_gsi::GenericMethod ("withTransferFunctions", "@brief Method QColorSpace QColorSpace::withTransferFunctions(const QList<uint16_t> &redTransferFunctionTable, const QList<uint16_t> &greenTransferFunctionTable, const QList<uint16_t> &blueTransferFunctionTable)\n", true, &_init_f_withTransferFunctions_c7854, &_call_f_withTransferFunctions_c7854);
  methods += new qt_gsi::GenericStaticMethod ("fromIccProfile", "@brief Static method QColorSpace QColorSpace::fromIccProfile(const QByteArray &iccProfile)\nThis method is static and can be called without an instance.", &_init_f_fromIccProfile_2309, &_call_f_fromIccProfile_2309);
  return methods;
}

gsi::Class<QColorSpace> decl_QColorSpace ("QtGui", "QColorSpace",
  methods_QColorSpace (),
  "@qt\n@brief Binding of QColorSpace");


GSI_QTGUI_PUBLIC gsi::Class<QColorSpace> &qtdecl_QColorSpace () { return decl_QColorSpace; }

}


//  Implementation of the enum wrapper class for QColorSpace::NamedColorSpace
namespace qt_gsi
{

static gsi::Enum<QColorSpace::NamedColorSpace> decl_QColorSpace_NamedColorSpace_Enum ("QtGui", "QColorSpace_NamedColorSpace",
    gsi::enum_const ("SRgb", QColorSpace::SRgb, "@brief Enum constant QColorSpace::SRgb") +
    gsi::enum_const ("SRgbLinear", QColorSpace::SRgbLinear, "@brief Enum constant QColorSpace::SRgbLinear") +
    gsi::enum_const ("AdobeRgb", QColorSpace::AdobeRgb, "@brief Enum constant QColorSpace::AdobeRgb") +
    gsi::enum_const ("DisplayP3", QColorSpace::DisplayP3, "@brief Enum constant QColorSpace::DisplayP3") +
    gsi::enum_const ("ProPhotoRgb", QColorSpace::ProPhotoRgb, "@brief Enum constant QColorSpace::ProPhotoRgb"),
  "@qt\n@brief This class represents the QColorSpace::NamedColorSpace enum");

static gsi::QFlagsClass<QColorSpace::NamedColorSpace > decl_QColorSpace_NamedColorSpace_Enums ("QtGui", "QColorSpace_QFlags_NamedColorSpace",
  "@qt\n@brief This class represents the QFlags<QColorSpace::NamedColorSpace> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QColorSpace> inject_QColorSpace_NamedColorSpace_Enum_in_parent (decl_QColorSpace_NamedColorSpace_Enum.defs ());
static gsi::ClassExt<QColorSpace> decl_QColorSpace_NamedColorSpace_Enum_as_child (decl_QColorSpace_NamedColorSpace_Enum, "NamedColorSpace");
static gsi::ClassExt<QColorSpace> decl_QColorSpace_NamedColorSpace_Enums_as_child (decl_QColorSpace_NamedColorSpace_Enums, "QFlags_NamedColorSpace");

}


//  Implementation of the enum wrapper class for QColorSpace::Primaries
namespace qt_gsi
{

static gsi::Enum<QColorSpace::Primaries> decl_QColorSpace_Primaries_Enum ("QtGui", "QColorSpace_Primaries",
    gsi::enum_const ("Custom", QColorSpace::Primaries::Custom, "@brief Enum constant QColorSpace::Primaries::Custom") +
    gsi::enum_const ("SRgb", QColorSpace::Primaries::SRgb, "@brief Enum constant QColorSpace::Primaries::SRgb") +
    gsi::enum_const ("AdobeRgb", QColorSpace::Primaries::AdobeRgb, "@brief Enum constant QColorSpace::Primaries::AdobeRgb") +
    gsi::enum_const ("DciP3D65", QColorSpace::Primaries::DciP3D65, "@brief Enum constant QColorSpace::Primaries::DciP3D65") +
    gsi::enum_const ("ProPhotoRgb", QColorSpace::Primaries::ProPhotoRgb, "@brief Enum constant QColorSpace::Primaries::ProPhotoRgb"),
  "@qt\n@brief This class represents the QColorSpace::Primaries enum");

static gsi::QFlagsClass<QColorSpace::Primaries > decl_QColorSpace_Primaries_Enums ("QtGui", "QColorSpace_QFlags_Primaries",
  "@qt\n@brief This class represents the QFlags<QColorSpace::Primaries> flag set");

static gsi::ClassExt<QColorSpace> decl_QColorSpace_Primaries_Enum_as_child (decl_QColorSpace_Primaries_Enum, "Primaries");
static gsi::ClassExt<QColorSpace> decl_QColorSpace_Primaries_Enums_as_child (decl_QColorSpace_Primaries_Enums, "QFlags_Primaries");

}


//  Implementation of the enum wrapper class for QColorSpace::TransferFunction
namespace qt_gsi
{

static gsi::Enum<QColorSpace::TransferFunction> decl_QColorSpace_TransferFunction_Enum ("QtGui", "QColorSpace_TransferFunction",
    gsi::enum_const ("Custom", QColorSpace::TransferFunction::Custom, "@brief Enum constant QColorSpace::TransferFunction::Custom") +
    gsi::enum_const ("Linear", QColorSpace::TransferFunction::Linear, "@brief Enum constant QColorSpace::TransferFunction::Linear") +
    gsi::enum_const ("Gamma", QColorSpace::TransferFunction::Gamma, "@brief Enum constant QColorSpace::TransferFunction::Gamma") +
    gsi::enum_const ("SRgb", QColorSpace::TransferFunction::SRgb, "@brief Enum constant QColorSpace::TransferFunction::SRgb") +
    gsi::enum_const ("ProPhotoRgb", QColorSpace::TransferFunction::ProPhotoRgb, "@brief Enum constant QColorSpace::TransferFunction::ProPhotoRgb"),
  "@qt\n@brief This class represents the QColorSpace::TransferFunction enum");

static gsi::QFlagsClass<QColorSpace::TransferFunction > decl_QColorSpace_TransferFunction_Enums ("QtGui", "QColorSpace_QFlags_TransferFunction",
  "@qt\n@brief This class represents the QFlags<QColorSpace::TransferFunction> flag set");

static gsi::ClassExt<QColorSpace> decl_QColorSpace_TransferFunction_Enum_as_child (decl_QColorSpace_TransferFunction_Enum, "TransferFunction");
static gsi::ClassExt<QColorSpace> decl_QColorSpace_TransferFunction_Enums_as_child (decl_QColorSpace_TransferFunction_Enums, "QFlags_TransferFunction");

}


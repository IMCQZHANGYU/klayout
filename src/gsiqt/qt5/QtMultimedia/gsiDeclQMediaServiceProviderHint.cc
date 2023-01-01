
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
*  @file gsiDeclQMediaServiceProviderHint.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaServiceProviderHint>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaServiceProviderHint

//  Constructor QMediaServiceProviderHint::QMediaServiceProviderHint()


static void _init_ctor_QMediaServiceProviderHint_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaServiceProviderHint> ();
}

static void _call_ctor_QMediaServiceProviderHint_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaServiceProviderHint *> (new QMediaServiceProviderHint ());
}


//  Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(const QString &mimeType, const QStringList &codecs)


static void _init_ctor_QMediaServiceProviderHint_4354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimeType");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("codecs");
  decl->add_arg<const QStringList & > (argspec_1);
  decl->set_return_new<QMediaServiceProviderHint> ();
}

static void _call_ctor_QMediaServiceProviderHint_4354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QStringList &arg2 = gsi::arg_reader<const QStringList & >() (args, heap);
  ret.write<QMediaServiceProviderHint *> (new QMediaServiceProviderHint (arg1, arg2));
}


//  Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(const QByteArray &device)


static void _init_ctor_QMediaServiceProviderHint_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return_new<QMediaServiceProviderHint> ();
}

static void _call_ctor_QMediaServiceProviderHint_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QMediaServiceProviderHint *> (new QMediaServiceProviderHint (arg1));
}


//  Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(QCamera::Position position)


static void _init_ctor_QMediaServiceProviderHint_2071 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("position");
  decl->add_arg<const qt_gsi::Converter<QCamera::Position>::target_type & > (argspec_0);
  decl->set_return_new<QMediaServiceProviderHint> ();
}

static void _call_ctor_QMediaServiceProviderHint_2071 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCamera::Position>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCamera::Position>::target_type & >() (args, heap);
  ret.write<QMediaServiceProviderHint *> (new QMediaServiceProviderHint (qt_gsi::QtToCppAdaptor<QCamera::Position>(arg1).cref()));
}


//  Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(QFlags<QMediaServiceProviderHint::Feature> features)


static void _init_ctor_QMediaServiceProviderHint_4492 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("features");
  decl->add_arg<QFlags<QMediaServiceProviderHint::Feature> > (argspec_0);
  decl->set_return_new<QMediaServiceProviderHint> ();
}

static void _call_ctor_QMediaServiceProviderHint_4492 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QMediaServiceProviderHint::Feature> arg1 = gsi::arg_reader<QFlags<QMediaServiceProviderHint::Feature> >() (args, heap);
  ret.write<QMediaServiceProviderHint *> (new QMediaServiceProviderHint (arg1));
}


//  Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(const QMediaServiceProviderHint &other)


static void _init_ctor_QMediaServiceProviderHint_3841 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaServiceProviderHint & > (argspec_0);
  decl->set_return_new<QMediaServiceProviderHint> ();
}

static void _call_ctor_QMediaServiceProviderHint_3841 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaServiceProviderHint &arg1 = gsi::arg_reader<const QMediaServiceProviderHint & >() (args, heap);
  ret.write<QMediaServiceProviderHint *> (new QMediaServiceProviderHint (arg1));
}


// QCamera::Position QMediaServiceProviderHint::cameraPosition()


static void _init_f_cameraPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QCamera::Position>::target_type > ();
}

static void _call_f_cameraPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QCamera::Position>::target_type > ((qt_gsi::Converter<QCamera::Position>::target_type)qt_gsi::CppToQtAdaptor<QCamera::Position>(((QMediaServiceProviderHint *)cls)->cameraPosition ()));
}


// QStringList QMediaServiceProviderHint::codecs()


static void _init_f_codecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_codecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMediaServiceProviderHint *)cls)->codecs ());
}


// QByteArray QMediaServiceProviderHint::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QMediaServiceProviderHint *)cls)->device ());
}


// QFlags<QMediaServiceProviderHint::Feature> QMediaServiceProviderHint::features()


static void _init_f_features_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QMediaServiceProviderHint::Feature> > ();
}

static void _call_f_features_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QMediaServiceProviderHint::Feature> > ((QFlags<QMediaServiceProviderHint::Feature>)((QMediaServiceProviderHint *)cls)->features ());
}


// bool QMediaServiceProviderHint::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMediaServiceProviderHint *)cls)->isNull ());
}


// QString QMediaServiceProviderHint::mimeType()


static void _init_f_mimeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_mimeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QMediaServiceProviderHint *)cls)->mimeType ());
}


// bool QMediaServiceProviderHint::operator !=(const QMediaServiceProviderHint &other)


static void _init_f_operator_excl__eq__c3841 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaServiceProviderHint & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3841 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaServiceProviderHint &arg1 = gsi::arg_reader<const QMediaServiceProviderHint & >() (args, heap);
  ret.write<bool > ((bool)((QMediaServiceProviderHint *)cls)->operator != (arg1));
}


// bool QMediaServiceProviderHint::operator ==(const QMediaServiceProviderHint &other)


static void _init_f_operator_eq__eq__c3841 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaServiceProviderHint & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3841 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaServiceProviderHint &arg1 = gsi::arg_reader<const QMediaServiceProviderHint & >() (args, heap);
  ret.write<bool > ((bool)((QMediaServiceProviderHint *)cls)->operator == (arg1));
}


// QMediaServiceProviderHint &QMediaServiceProviderHint::operator=(const QMediaServiceProviderHint &other)


static void _init_f_operator_eq__3841 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaServiceProviderHint & > (argspec_0);
  decl->set_return<QMediaServiceProviderHint & > ();
}

static void _call_f_operator_eq__3841 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaServiceProviderHint &arg1 = gsi::arg_reader<const QMediaServiceProviderHint & >() (args, heap);
  ret.write<QMediaServiceProviderHint & > ((QMediaServiceProviderHint &)((QMediaServiceProviderHint *)cls)->operator= (arg1));
}


// QMediaServiceProviderHint::Type QMediaServiceProviderHint::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMediaServiceProviderHint::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMediaServiceProviderHint::Type>::target_type > ((qt_gsi::Converter<QMediaServiceProviderHint::Type>::target_type)qt_gsi::CppToQtAdaptor<QMediaServiceProviderHint::Type>(((QMediaServiceProviderHint *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QMediaServiceProviderHint () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceProviderHint::QMediaServiceProviderHint()\nThis method creates an object of class QMediaServiceProviderHint.", &_init_ctor_QMediaServiceProviderHint_0, &_call_ctor_QMediaServiceProviderHint_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(const QString &mimeType, const QStringList &codecs)\nThis method creates an object of class QMediaServiceProviderHint.", &_init_ctor_QMediaServiceProviderHint_4354, &_call_ctor_QMediaServiceProviderHint_4354);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(const QByteArray &device)\nThis method creates an object of class QMediaServiceProviderHint.", &_init_ctor_QMediaServiceProviderHint_2309, &_call_ctor_QMediaServiceProviderHint_2309);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(QCamera::Position position)\nThis method creates an object of class QMediaServiceProviderHint.", &_init_ctor_QMediaServiceProviderHint_2071, &_call_ctor_QMediaServiceProviderHint_2071);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(QFlags<QMediaServiceProviderHint::Feature> features)\nThis method creates an object of class QMediaServiceProviderHint.", &_init_ctor_QMediaServiceProviderHint_4492, &_call_ctor_QMediaServiceProviderHint_4492);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceProviderHint::QMediaServiceProviderHint(const QMediaServiceProviderHint &other)\nThis method creates an object of class QMediaServiceProviderHint.", &_init_ctor_QMediaServiceProviderHint_3841, &_call_ctor_QMediaServiceProviderHint_3841);
  methods += new qt_gsi::GenericMethod ("cameraPosition", "@brief Method QCamera::Position QMediaServiceProviderHint::cameraPosition()\n", true, &_init_f_cameraPosition_c0, &_call_f_cameraPosition_c0);
  methods += new qt_gsi::GenericMethod ("codecs", "@brief Method QStringList QMediaServiceProviderHint::codecs()\n", true, &_init_f_codecs_c0, &_call_f_codecs_c0);
  methods += new qt_gsi::GenericMethod ("device", "@brief Method QByteArray QMediaServiceProviderHint::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("features", "@brief Method QFlags<QMediaServiceProviderHint::Feature> QMediaServiceProviderHint::features()\n", true, &_init_f_features_c0, &_call_f_features_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QMediaServiceProviderHint::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("mimeType", "@brief Method QString QMediaServiceProviderHint::mimeType()\n", true, &_init_f_mimeType_c0, &_call_f_mimeType_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QMediaServiceProviderHint::operator !=(const QMediaServiceProviderHint &other)\n", true, &_init_f_operator_excl__eq__c3841, &_call_f_operator_excl__eq__c3841);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QMediaServiceProviderHint::operator ==(const QMediaServiceProviderHint &other)\n", true, &_init_f_operator_eq__eq__c3841, &_call_f_operator_eq__eq__c3841);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QMediaServiceProviderHint &QMediaServiceProviderHint::operator=(const QMediaServiceProviderHint &other)\n", false, &_init_f_operator_eq__3841, &_call_f_operator_eq__3841);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QMediaServiceProviderHint::Type QMediaServiceProviderHint::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QMediaServiceProviderHint> decl_QMediaServiceProviderHint ("QtMultimedia", "QMediaServiceProviderHint",
  methods_QMediaServiceProviderHint (),
  "@qt\n@brief Binding of QMediaServiceProviderHint");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaServiceProviderHint> &qtdecl_QMediaServiceProviderHint () { return decl_QMediaServiceProviderHint; }

}


//  Implementation of the enum wrapper class for QMediaServiceProviderHint::Feature
namespace qt_gsi
{

static gsi::Enum<QMediaServiceProviderHint::Feature> decl_QMediaServiceProviderHint_Feature_Enum ("QtMultimedia", "QMediaServiceProviderHint_Feature",
    gsi::enum_const ("LowLatencyPlayback", QMediaServiceProviderHint::LowLatencyPlayback, "@brief Enum constant QMediaServiceProviderHint::LowLatencyPlayback") +
    gsi::enum_const ("RecordingSupport", QMediaServiceProviderHint::RecordingSupport, "@brief Enum constant QMediaServiceProviderHint::RecordingSupport") +
    gsi::enum_const ("StreamPlayback", QMediaServiceProviderHint::StreamPlayback, "@brief Enum constant QMediaServiceProviderHint::StreamPlayback") +
    gsi::enum_const ("VideoSurface", QMediaServiceProviderHint::VideoSurface, "@brief Enum constant QMediaServiceProviderHint::VideoSurface"),
  "@qt\n@brief This class represents the QMediaServiceProviderHint::Feature enum");

static gsi::QFlagsClass<QMediaServiceProviderHint::Feature > decl_QMediaServiceProviderHint_Feature_Enums ("QtMultimedia", "QMediaServiceProviderHint_QFlags_Feature",
  "@qt\n@brief This class represents the QFlags<QMediaServiceProviderHint::Feature> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMediaServiceProviderHint> inject_QMediaServiceProviderHint_Feature_Enum_in_parent (decl_QMediaServiceProviderHint_Feature_Enum.defs ());
static gsi::ClassExt<QMediaServiceProviderHint> decl_QMediaServiceProviderHint_Feature_Enum_as_child (decl_QMediaServiceProviderHint_Feature_Enum, "Feature");
static gsi::ClassExt<QMediaServiceProviderHint> decl_QMediaServiceProviderHint_Feature_Enums_as_child (decl_QMediaServiceProviderHint_Feature_Enums, "QFlags_Feature");

}


//  Implementation of the enum wrapper class for QMediaServiceProviderHint::Type
namespace qt_gsi
{

static gsi::Enum<QMediaServiceProviderHint::Type> decl_QMediaServiceProviderHint_Type_Enum ("QtMultimedia", "QMediaServiceProviderHint_Type",
    gsi::enum_const ("Null", QMediaServiceProviderHint::Null, "@brief Enum constant QMediaServiceProviderHint::Null") +
    gsi::enum_const ("ContentType", QMediaServiceProviderHint::ContentType, "@brief Enum constant QMediaServiceProviderHint::ContentType") +
    gsi::enum_const ("Device", QMediaServiceProviderHint::Device, "@brief Enum constant QMediaServiceProviderHint::Device") +
    gsi::enum_const ("SupportedFeatures", QMediaServiceProviderHint::SupportedFeatures, "@brief Enum constant QMediaServiceProviderHint::SupportedFeatures") +
    gsi::enum_const ("CameraPosition", QMediaServiceProviderHint::CameraPosition, "@brief Enum constant QMediaServiceProviderHint::CameraPosition"),
  "@qt\n@brief This class represents the QMediaServiceProviderHint::Type enum");

static gsi::QFlagsClass<QMediaServiceProviderHint::Type > decl_QMediaServiceProviderHint_Type_Enums ("QtMultimedia", "QMediaServiceProviderHint_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QMediaServiceProviderHint::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMediaServiceProviderHint> inject_QMediaServiceProviderHint_Type_Enum_in_parent (decl_QMediaServiceProviderHint_Type_Enum.defs ());
static gsi::ClassExt<QMediaServiceProviderHint> decl_QMediaServiceProviderHint_Type_Enum_as_child (decl_QMediaServiceProviderHint_Type_Enum, "Type");
static gsi::ClassExt<QMediaServiceProviderHint> decl_QMediaServiceProviderHint_Type_Enums_as_child (decl_QMediaServiceProviderHint_Type_Enums, "QFlags_Type");

}


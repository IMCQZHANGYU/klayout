
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
*  @file gsiDeclQResource.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QResource>
#include <QLocale>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QResource

//  Constructor QResource::QResource(const QString &file, const QLocale &locale)


static void _init_ctor_QResource_3903 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("locale", true, "QLocale()");
  decl->add_arg<const QLocale & > (argspec_1);
  decl->set_return_new<QResource> ();
}

static void _call_ctor_QResource_3903 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  const QLocale &arg2 = args ? gsi::arg_reader<const QLocale & >() (args, heap) : gsi::arg_maker<const QLocale & >() (QLocale(), heap);
  ret.write<QResource *> (new QResource (arg1, arg2));
}


// QString QResource::absoluteFilePath()


static void _init_f_absoluteFilePath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_absoluteFilePath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QResource *)cls)->absoluteFilePath ());
}


// const unsigned char *QResource::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const unsigned char * > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const unsigned char * > ((const unsigned char *)((QResource *)cls)->data ());
}


// QString QResource::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QResource *)cls)->fileName ());
}


// bool QResource::isCompressed()


static void _init_f_isCompressed_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isCompressed_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QResource *)cls)->isCompressed ());
}


// bool QResource::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QResource *)cls)->isValid ());
}


// QLocale QResource::locale()


static void _init_f_locale_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLocale > ();
}

static void _call_f_locale_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLocale > ((QLocale)((QResource *)cls)->locale ());
}


// void QResource::setFileName(const QString &file)


static void _init_f_setFileName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFileName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QResource *)cls)->setFileName (arg1);
}


// void QResource::setLocale(const QLocale &locale)


static void _init_f_setLocale_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locale");
  decl->add_arg<const QLocale & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLocale_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLocale &arg1 = gsi::arg_reader<const QLocale & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QResource *)cls)->setLocale (arg1);
}


// qint64 QResource::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QResource *)cls)->size ());
}


// static void QResource::addSearchPath(const QString &path)


static void _init_f_addSearchPath_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addSearchPath_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QResource::addSearchPath (arg1);
}


// static bool QResource::registerResource(const QString &rccFilename, const QString &resourceRoot)


static void _init_f_registerResource_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rccFilename");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("resourceRoot", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_registerResource_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<bool > ((bool)QResource::registerResource (arg1, arg2));
}


// static bool QResource::registerResource(const unsigned char *rccData, const QString &resourceRoot)


static void _init_f_registerResource_4653 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rccData");
  decl->add_arg<const unsigned char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("resourceRoot", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_registerResource_4653 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const unsigned char *arg1 = gsi::arg_reader<const unsigned char * >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<bool > ((bool)QResource::registerResource (arg1, arg2));
}


// static QStringList QResource::searchPaths()


static void _init_f_searchPaths_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_searchPaths_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)QResource::searchPaths ());
}


// static bool QResource::unregisterResource(const QString &rccFilename, const QString &resourceRoot)


static void _init_f_unregisterResource_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rccFilename");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("resourceRoot", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_unregisterResource_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<bool > ((bool)QResource::unregisterResource (arg1, arg2));
}


// static bool QResource::unregisterResource(const unsigned char *rccData, const QString &resourceRoot)


static void _init_f_unregisterResource_4653 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rccData");
  decl->add_arg<const unsigned char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("resourceRoot", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_unregisterResource_4653 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const unsigned char *arg1 = gsi::arg_reader<const unsigned char * >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<bool > ((bool)QResource::unregisterResource (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QResource () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QResource::QResource(const QString &file, const QLocale &locale)\nThis method creates an object of class QResource.", &_init_ctor_QResource_3903, &_call_ctor_QResource_3903);
  methods += new qt_gsi::GenericMethod ("absoluteFilePath", "@brief Method QString QResource::absoluteFilePath()\n", true, &_init_f_absoluteFilePath_c0, &_call_f_absoluteFilePath_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method const unsigned char *QResource::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod (":fileName", "@brief Method QString QResource::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod ("isCompressed?", "@brief Method bool QResource::isCompressed()\n", true, &_init_f_isCompressed_c0, &_call_f_isCompressed_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QResource::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":locale", "@brief Method QLocale QResource::locale()\n", true, &_init_f_locale_c0, &_call_f_locale_c0);
  methods += new qt_gsi::GenericMethod ("setFileName|fileName=", "@brief Method void QResource::setFileName(const QString &file)\n", false, &_init_f_setFileName_2025, &_call_f_setFileName_2025);
  methods += new qt_gsi::GenericMethod ("setLocale|locale=", "@brief Method void QResource::setLocale(const QLocale &locale)\n", false, &_init_f_setLocale_1986, &_call_f_setLocale_1986);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method qint64 QResource::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericStaticMethod ("addSearchPath", "@brief Static method void QResource::addSearchPath(const QString &path)\nThis method is static and can be called without an instance.", &_init_f_addSearchPath_2025, &_call_f_addSearchPath_2025);
  methods += new qt_gsi::GenericStaticMethod ("registerResource_file", "@brief Static method bool QResource::registerResource(const QString &rccFilename, const QString &resourceRoot)\nThis method is static and can be called without an instance.", &_init_f_registerResource_3942, &_call_f_registerResource_3942);
  methods += new qt_gsi::GenericStaticMethod ("registerResource_data", "@brief Static method bool QResource::registerResource(const unsigned char *rccData, const QString &resourceRoot)\nThis method is static and can be called without an instance.", &_init_f_registerResource_4653, &_call_f_registerResource_4653);
  methods += new qt_gsi::GenericStaticMethod ("searchPaths", "@brief Static method QStringList QResource::searchPaths()\nThis method is static and can be called without an instance.", &_init_f_searchPaths_0, &_call_f_searchPaths_0);
  methods += new qt_gsi::GenericStaticMethod ("unregisterResource_file", "@brief Static method bool QResource::unregisterResource(const QString &rccFilename, const QString &resourceRoot)\nThis method is static and can be called without an instance.", &_init_f_unregisterResource_3942, &_call_f_unregisterResource_3942);
  methods += new qt_gsi::GenericStaticMethod ("unregisterResource_data", "@brief Static method bool QResource::unregisterResource(const unsigned char *rccData, const QString &resourceRoot)\nThis method is static and can be called without an instance.", &_init_f_unregisterResource_4653, &_call_f_unregisterResource_4653);
  return methods;
}

gsi::Class<QResource> decl_QResource ("QtCore", "QResource",
  methods_QResource (),
  "@qt\n@brief Binding of QResource");


GSI_QTCORE_PUBLIC gsi::Class<QResource> &qtdecl_QResource () { return decl_QResource; }

}


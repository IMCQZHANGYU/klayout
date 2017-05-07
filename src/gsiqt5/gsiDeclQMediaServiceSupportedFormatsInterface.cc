
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2017 Matthias Koefferlein

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
*  @file gsiDeclQMediaServiceSupportedFormatsInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaServiceSupportedFormatsInterface>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMediaServiceSupportedFormatsInterface

// QMultimedia::SupportEstimate QMediaServiceSupportedFormatsInterface::hasSupport(const QString &mimeType, const QStringList &codecs)


static void _init_f_hasSupport_c4354 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimeType");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("codecs");
  decl->add_arg<const QStringList & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QMultimedia::SupportEstimate>::target_type > ();
}

static void _call_f_hasSupport_c4354 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QStringList &arg2 = args.read<const QStringList & > (heap);
  ret.write<qt_gsi::Converter<QMultimedia::SupportEstimate>::target_type > ((qt_gsi::Converter<QMultimedia::SupportEstimate>::target_type)qt_gsi::CppToQtAdaptor<QMultimedia::SupportEstimate>(((QMediaServiceSupportedFormatsInterface *)cls)->hasSupport (arg1, arg2)));
}


// QStringList QMediaServiceSupportedFormatsInterface::supportedMimeTypes()


static void _init_f_supportedMimeTypes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_supportedMimeTypes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMediaServiceSupportedFormatsInterface *)cls)->supportedMimeTypes ());
}


namespace gsi
{

static gsi::Methods methods_QMediaServiceSupportedFormatsInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("hasSupport", "@brief Method QMultimedia::SupportEstimate QMediaServiceSupportedFormatsInterface::hasSupport(const QString &mimeType, const QStringList &codecs)\n", true, &_init_f_hasSupport_c4354, &_call_f_hasSupport_c4354);
  methods += new qt_gsi::GenericMethod ("supportedMimeTypes", "@brief Method QStringList QMediaServiceSupportedFormatsInterface::supportedMimeTypes()\n", true, &_init_f_supportedMimeTypes_c0, &_call_f_supportedMimeTypes_c0);
  return methods;
}

gsi::Class<QMediaServiceSupportedFormatsInterface> decl_QMediaServiceSupportedFormatsInterface ("QMediaServiceSupportedFormatsInterface_Native",
  methods_QMediaServiceSupportedFormatsInterface (),
  "@hide\n@alias QMediaServiceSupportedFormatsInterface");

GSIQT_PUBLIC gsi::Class<QMediaServiceSupportedFormatsInterface> &qtdecl_QMediaServiceSupportedFormatsInterface () { return decl_QMediaServiceSupportedFormatsInterface; }

}


class QMediaServiceSupportedFormatsInterface_Adaptor : public QMediaServiceSupportedFormatsInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaServiceSupportedFormatsInterface_Adaptor();

  //  [adaptor ctor] QMediaServiceSupportedFormatsInterface::QMediaServiceSupportedFormatsInterface()
  QMediaServiceSupportedFormatsInterface_Adaptor() : QMediaServiceSupportedFormatsInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QMultimedia::SupportEstimate QMediaServiceSupportedFormatsInterface::hasSupport(const QString &mimeType, const QStringList &codecs)
  qt_gsi::Converter<QMultimedia::SupportEstimate>::target_type cbs_hasSupport_c4354_0(const QString &mimeType, const QStringList &codecs) const
  {
    __SUPPRESS_UNUSED_WARNING (mimeType);
    __SUPPRESS_UNUSED_WARNING (codecs);
    throw qt_gsi::AbstractMethodCalledException("hasSupport");
  }

  virtual QMultimedia::SupportEstimate hasSupport(const QString &mimeType, const QStringList &codecs) const
  {
    if (cb_hasSupport_c4354_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QMultimedia::SupportEstimate>(cb_hasSupport_c4354_0.issue<QMediaServiceSupportedFormatsInterface_Adaptor, qt_gsi::Converter<QMultimedia::SupportEstimate>::target_type, const QString &, const QStringList &>(&QMediaServiceSupportedFormatsInterface_Adaptor::cbs_hasSupport_c4354_0, mimeType, codecs)).cref();
    } else {
      throw qt_gsi::AbstractMethodCalledException("hasSupport");
    }
  }

  //  [adaptor impl] QStringList QMediaServiceSupportedFormatsInterface::supportedMimeTypes()
  QStringList cbs_supportedMimeTypes_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("supportedMimeTypes");
  }

  virtual QStringList supportedMimeTypes() const
  {
    if (cb_supportedMimeTypes_c0_0.can_issue()) {
      return cb_supportedMimeTypes_c0_0.issue<QMediaServiceSupportedFormatsInterface_Adaptor, QStringList>(&QMediaServiceSupportedFormatsInterface_Adaptor::cbs_supportedMimeTypes_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedMimeTypes");
    }
  }

  gsi::Callback cb_hasSupport_c4354_0;
  gsi::Callback cb_supportedMimeTypes_c0_0;
};

QMediaServiceSupportedFormatsInterface_Adaptor::~QMediaServiceSupportedFormatsInterface_Adaptor() { }

//  Constructor QMediaServiceSupportedFormatsInterface::QMediaServiceSupportedFormatsInterface() (adaptor class)

static void _init_ctor_QMediaServiceSupportedFormatsInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaServiceSupportedFormatsInterface_Adaptor> ();
}

static void _call_ctor_QMediaServiceSupportedFormatsInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaServiceSupportedFormatsInterface_Adaptor *> (new QMediaServiceSupportedFormatsInterface_Adaptor ());
}


// QMultimedia::SupportEstimate QMediaServiceSupportedFormatsInterface::hasSupport(const QString &mimeType, const QStringList &codecs)

static void _init_cbs_hasSupport_c4354_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mimeType");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("codecs");
  decl->add_arg<const QStringList & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QMultimedia::SupportEstimate>::target_type > ();
}

static void _call_cbs_hasSupport_c4354_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QStringList &arg2 = args.read<const QStringList & > (heap);
  ret.write<qt_gsi::Converter<QMultimedia::SupportEstimate>::target_type > ((qt_gsi::Converter<QMultimedia::SupportEstimate>::target_type)((QMediaServiceSupportedFormatsInterface_Adaptor *)cls)->cbs_hasSupport_c4354_0 (arg1, arg2));
}

static void _set_callback_cbs_hasSupport_c4354_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceSupportedFormatsInterface_Adaptor *)cls)->cb_hasSupport_c4354_0 = cb;
}


// QStringList QMediaServiceSupportedFormatsInterface::supportedMimeTypes()

static void _init_cbs_supportedMimeTypes_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_supportedMimeTypes_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QMediaServiceSupportedFormatsInterface_Adaptor *)cls)->cbs_supportedMimeTypes_c0_0 ());
}

static void _set_callback_cbs_supportedMimeTypes_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceSupportedFormatsInterface_Adaptor *)cls)->cb_supportedMimeTypes_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaServiceSupportedFormatsInterface> &qtdecl_QMediaServiceSupportedFormatsInterface ();

static gsi::Methods methods_QMediaServiceSupportedFormatsInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceSupportedFormatsInterface::QMediaServiceSupportedFormatsInterface()\nThis method creates an object of class QMediaServiceSupportedFormatsInterface.", &_init_ctor_QMediaServiceSupportedFormatsInterface_Adaptor_0, &_call_ctor_QMediaServiceSupportedFormatsInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("hasSupport", "@hide", true, &_init_cbs_hasSupport_c4354_0, &_call_cbs_hasSupport_c4354_0);
  methods += new qt_gsi::GenericMethod ("hasSupport", "@brief Virtual method QMultimedia::SupportEstimate QMediaServiceSupportedFormatsInterface::hasSupport(const QString &mimeType, const QStringList &codecs)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_hasSupport_c4354_0, &_call_cbs_hasSupport_c4354_0, &_set_callback_cbs_hasSupport_c4354_0);
  methods += new qt_gsi::GenericMethod ("supportedMimeTypes", "@hide", true, &_init_cbs_supportedMimeTypes_c0_0, &_call_cbs_supportedMimeTypes_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedMimeTypes", "@brief Virtual method QStringList QMediaServiceSupportedFormatsInterface::supportedMimeTypes()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedMimeTypes_c0_0, &_call_cbs_supportedMimeTypes_c0_0, &_set_callback_cbs_supportedMimeTypes_c0_0);
  return methods;
}

gsi::Class<QMediaServiceSupportedFormatsInterface_Adaptor> decl_QMediaServiceSupportedFormatsInterface_Adaptor (qtdecl_QMediaServiceSupportedFormatsInterface (), "QMediaServiceSupportedFormatsInterface",
  methods_QMediaServiceSupportedFormatsInterface_Adaptor (),
  "@qt\n@brief Binding of QMediaServiceSupportedFormatsInterface");

}


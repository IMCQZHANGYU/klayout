
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
*  @file gsiDeclQXmlErrorHandler.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlErrorHandler>
#include <QXmlParseException>
#include "gsiQt.h"
#include "gsiQtCore5CompatCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlErrorHandler

// bool QXmlErrorHandler::error(const QXmlParseException &exception)


static void _init_f_error_3149 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("exception");
  decl->add_arg<const QXmlParseException & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_error_3149 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlParseException &arg1 = gsi::arg_reader<const QXmlParseException & >() (args, heap);
  ret.write<bool > ((bool)((QXmlErrorHandler *)cls)->error (arg1));
}


// QString QXmlErrorHandler::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlErrorHandler *)cls)->errorString ());
}


// bool QXmlErrorHandler::fatalError(const QXmlParseException &exception)


static void _init_f_fatalError_3149 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("exception");
  decl->add_arg<const QXmlParseException & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_fatalError_3149 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlParseException &arg1 = gsi::arg_reader<const QXmlParseException & >() (args, heap);
  ret.write<bool > ((bool)((QXmlErrorHandler *)cls)->fatalError (arg1));
}


// bool QXmlErrorHandler::warning(const QXmlParseException &exception)


static void _init_f_warning_3149 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("exception");
  decl->add_arg<const QXmlParseException & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_warning_3149 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlParseException &arg1 = gsi::arg_reader<const QXmlParseException & >() (args, heap);
  ret.write<bool > ((bool)((QXmlErrorHandler *)cls)->warning (arg1));
}


namespace gsi
{

static gsi::Methods methods_QXmlErrorHandler () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("error", "@brief Method bool QXmlErrorHandler::error(const QXmlParseException &exception)\n", false, &_init_f_error_3149, &_call_f_error_3149);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QXmlErrorHandler::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("fatalError", "@brief Method bool QXmlErrorHandler::fatalError(const QXmlParseException &exception)\n", false, &_init_f_fatalError_3149, &_call_f_fatalError_3149);
  methods += new qt_gsi::GenericMethod ("warning", "@brief Method bool QXmlErrorHandler::warning(const QXmlParseException &exception)\n", false, &_init_f_warning_3149, &_call_f_warning_3149);
  return methods;
}

gsi::Class<QXmlErrorHandler> decl_QXmlErrorHandler ("QtCore5Compat", "QXmlErrorHandler_Native",
  methods_QXmlErrorHandler (),
  "@hide\n@alias QXmlErrorHandler");

GSI_QTCORE5COMPAT_PUBLIC gsi::Class<QXmlErrorHandler> &qtdecl_QXmlErrorHandler () { return decl_QXmlErrorHandler; }

}


class QXmlErrorHandler_Adaptor : public QXmlErrorHandler, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlErrorHandler_Adaptor();

  //  [adaptor ctor] QXmlErrorHandler::QXmlErrorHandler()
  QXmlErrorHandler_Adaptor() : QXmlErrorHandler()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QXmlErrorHandler::error(const QXmlParseException &exception)
  bool cbs_error_3149_0(const QXmlParseException &exception)
  {
    __SUPPRESS_UNUSED_WARNING (exception);
    throw qt_gsi::AbstractMethodCalledException("error");
  }

  virtual bool error(const QXmlParseException &exception)
  {
    if (cb_error_3149_0.can_issue()) {
      return cb_error_3149_0.issue<QXmlErrorHandler_Adaptor, bool, const QXmlParseException &>(&QXmlErrorHandler_Adaptor::cbs_error_3149_0, exception);
    } else {
      throw qt_gsi::AbstractMethodCalledException("error");
    }
  }

  //  [adaptor impl] QString QXmlErrorHandler::errorString()
  QString cbs_errorString_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("errorString");
  }

  virtual QString errorString() const
  {
    if (cb_errorString_c0_0.can_issue()) {
      return cb_errorString_c0_0.issue<QXmlErrorHandler_Adaptor, QString>(&QXmlErrorHandler_Adaptor::cbs_errorString_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("errorString");
    }
  }

  //  [adaptor impl] bool QXmlErrorHandler::fatalError(const QXmlParseException &exception)
  bool cbs_fatalError_3149_0(const QXmlParseException &exception)
  {
    __SUPPRESS_UNUSED_WARNING (exception);
    throw qt_gsi::AbstractMethodCalledException("fatalError");
  }

  virtual bool fatalError(const QXmlParseException &exception)
  {
    if (cb_fatalError_3149_0.can_issue()) {
      return cb_fatalError_3149_0.issue<QXmlErrorHandler_Adaptor, bool, const QXmlParseException &>(&QXmlErrorHandler_Adaptor::cbs_fatalError_3149_0, exception);
    } else {
      throw qt_gsi::AbstractMethodCalledException("fatalError");
    }
  }

  //  [adaptor impl] bool QXmlErrorHandler::warning(const QXmlParseException &exception)
  bool cbs_warning_3149_0(const QXmlParseException &exception)
  {
    __SUPPRESS_UNUSED_WARNING (exception);
    throw qt_gsi::AbstractMethodCalledException("warning");
  }

  virtual bool warning(const QXmlParseException &exception)
  {
    if (cb_warning_3149_0.can_issue()) {
      return cb_warning_3149_0.issue<QXmlErrorHandler_Adaptor, bool, const QXmlParseException &>(&QXmlErrorHandler_Adaptor::cbs_warning_3149_0, exception);
    } else {
      throw qt_gsi::AbstractMethodCalledException("warning");
    }
  }

  gsi::Callback cb_error_3149_0;
  gsi::Callback cb_errorString_c0_0;
  gsi::Callback cb_fatalError_3149_0;
  gsi::Callback cb_warning_3149_0;
};

QXmlErrorHandler_Adaptor::~QXmlErrorHandler_Adaptor() { }

//  Constructor QXmlErrorHandler::QXmlErrorHandler() (adaptor class)

static void _init_ctor_QXmlErrorHandler_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlErrorHandler_Adaptor> ();
}

static void _call_ctor_QXmlErrorHandler_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlErrorHandler_Adaptor *> (new QXmlErrorHandler_Adaptor ());
}


// bool QXmlErrorHandler::error(const QXmlParseException &exception)

static void _init_cbs_error_3149_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("exception");
  decl->add_arg<const QXmlParseException & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_error_3149_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlParseException &arg1 = args.read<const QXmlParseException & > (heap);
  ret.write<bool > ((bool)((QXmlErrorHandler_Adaptor *)cls)->cbs_error_3149_0 (arg1));
}

static void _set_callback_cbs_error_3149_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlErrorHandler_Adaptor *)cls)->cb_error_3149_0 = cb;
}


// QString QXmlErrorHandler::errorString()

static void _init_cbs_errorString_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_errorString_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlErrorHandler_Adaptor *)cls)->cbs_errorString_c0_0 ());
}

static void _set_callback_cbs_errorString_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlErrorHandler_Adaptor *)cls)->cb_errorString_c0_0 = cb;
}


// bool QXmlErrorHandler::fatalError(const QXmlParseException &exception)

static void _init_cbs_fatalError_3149_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("exception");
  decl->add_arg<const QXmlParseException & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_fatalError_3149_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlParseException &arg1 = args.read<const QXmlParseException & > (heap);
  ret.write<bool > ((bool)((QXmlErrorHandler_Adaptor *)cls)->cbs_fatalError_3149_0 (arg1));
}

static void _set_callback_cbs_fatalError_3149_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlErrorHandler_Adaptor *)cls)->cb_fatalError_3149_0 = cb;
}


// bool QXmlErrorHandler::warning(const QXmlParseException &exception)

static void _init_cbs_warning_3149_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("exception");
  decl->add_arg<const QXmlParseException & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_warning_3149_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlParseException &arg1 = args.read<const QXmlParseException & > (heap);
  ret.write<bool > ((bool)((QXmlErrorHandler_Adaptor *)cls)->cbs_warning_3149_0 (arg1));
}

static void _set_callback_cbs_warning_3149_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlErrorHandler_Adaptor *)cls)->cb_warning_3149_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlErrorHandler> &qtdecl_QXmlErrorHandler ();

static gsi::Methods methods_QXmlErrorHandler_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlErrorHandler::QXmlErrorHandler()\nThis method creates an object of class QXmlErrorHandler.", &_init_ctor_QXmlErrorHandler_Adaptor_0, &_call_ctor_QXmlErrorHandler_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Virtual method bool QXmlErrorHandler::error(const QXmlParseException &exception)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_error_3149_0, &_call_cbs_error_3149_0);
  methods += new qt_gsi::GenericMethod ("error", "@hide", false, &_init_cbs_error_3149_0, &_call_cbs_error_3149_0, &_set_callback_cbs_error_3149_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Virtual method QString QXmlErrorHandler::errorString()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@hide", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0, &_set_callback_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("fatalError", "@brief Virtual method bool QXmlErrorHandler::fatalError(const QXmlParseException &exception)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_fatalError_3149_0, &_call_cbs_fatalError_3149_0);
  methods += new qt_gsi::GenericMethod ("fatalError", "@hide", false, &_init_cbs_fatalError_3149_0, &_call_cbs_fatalError_3149_0, &_set_callback_cbs_fatalError_3149_0);
  methods += new qt_gsi::GenericMethod ("warning", "@brief Virtual method bool QXmlErrorHandler::warning(const QXmlParseException &exception)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_warning_3149_0, &_call_cbs_warning_3149_0);
  methods += new qt_gsi::GenericMethod ("warning", "@hide", false, &_init_cbs_warning_3149_0, &_call_cbs_warning_3149_0, &_set_callback_cbs_warning_3149_0);
  return methods;
}

gsi::Class<QXmlErrorHandler_Adaptor> decl_QXmlErrorHandler_Adaptor (qtdecl_QXmlErrorHandler (), "QtCore5Compat", "QXmlErrorHandler",
  methods_QXmlErrorHandler_Adaptor (),
  "@qt\n@brief Binding of QXmlErrorHandler");

}


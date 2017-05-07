
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
*  @file gsiDeclQFactoryInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFactoryInterface>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QFactoryInterface

// QStringList QFactoryInterface::keys()


static void _init_f_keys_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_keys_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QFactoryInterface *)cls)->keys ());
}


namespace gsi
{

static gsi::Methods methods_QFactoryInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("keys", "@brief Method QStringList QFactoryInterface::keys()\n", true, &_init_f_keys_c0, &_call_f_keys_c0);
  return methods;
}

gsi::Class<QFactoryInterface> decl_QFactoryInterface ("QFactoryInterface_Native",
  methods_QFactoryInterface (),
  "@hide\n@alias QFactoryInterface");

GSIQT_PUBLIC gsi::Class<QFactoryInterface> &qtdecl_QFactoryInterface () { return decl_QFactoryInterface; }

}


class QFactoryInterface_Adaptor : public QFactoryInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QFactoryInterface_Adaptor();

  //  [adaptor ctor] QFactoryInterface::QFactoryInterface()
  QFactoryInterface_Adaptor() : QFactoryInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QStringList QFactoryInterface::keys()
  QStringList cbs_keys_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("keys");
  }

  virtual QStringList keys() const
  {
    if (cb_keys_c0_0.can_issue()) {
      return cb_keys_c0_0.issue<QFactoryInterface_Adaptor, QStringList>(&QFactoryInterface_Adaptor::cbs_keys_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("keys");
    }
  }

  gsi::Callback cb_keys_c0_0;
};

QFactoryInterface_Adaptor::~QFactoryInterface_Adaptor() { }

//  Constructor QFactoryInterface::QFactoryInterface() (adaptor class)

static void _init_ctor_QFactoryInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QFactoryInterface_Adaptor> ();
}

static void _call_ctor_QFactoryInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFactoryInterface_Adaptor *> (new QFactoryInterface_Adaptor ());
}


// QStringList QFactoryInterface::keys()

static void _init_cbs_keys_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_keys_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QFactoryInterface_Adaptor *)cls)->cbs_keys_c0_0 ());
}

static void _set_callback_cbs_keys_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QFactoryInterface_Adaptor *)cls)->cb_keys_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QFactoryInterface> &qtdecl_QFactoryInterface ();

static gsi::Methods methods_QFactoryInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFactoryInterface::QFactoryInterface()\nThis method creates an object of class QFactoryInterface.", &_init_ctor_QFactoryInterface_Adaptor_0, &_call_ctor_QFactoryInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("keys", "@hide", true, &_init_cbs_keys_c0_0, &_call_cbs_keys_c0_0);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Virtual method QStringList QFactoryInterface::keys()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_keys_c0_0, &_call_cbs_keys_c0_0, &_set_callback_cbs_keys_c0_0);
  return methods;
}

gsi::Class<QFactoryInterface_Adaptor> decl_QFactoryInterface_Adaptor (qtdecl_QFactoryInterface (), "QFactoryInterface",
  methods_QFactoryInterface_Adaptor (),
  "@qt\n@brief Binding of QFactoryInterface");

}


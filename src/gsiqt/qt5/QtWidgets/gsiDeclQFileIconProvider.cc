
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
*  @file gsiDeclQFileIconProvider.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFileIconProvider

// QIcon QFileIconProvider::icon(QFileIconProvider::IconType type)


static void _init_f_icon_c3064 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QFileIconProvider::IconType>::target_type & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_f_icon_c3064 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QFileIconProvider::IconType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QFileIconProvider::IconType>::target_type & >() (args, heap);
  ret.write<QIcon > ((QIcon)((QFileIconProvider *)cls)->icon (qt_gsi::QtToCppAdaptor<QFileIconProvider::IconType>(arg1).cref()));
}


// QIcon QFileIconProvider::icon(const QFileInfo &info)


static void _init_f_icon_c2174 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("info");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_f_icon_c2174 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<QIcon > ((QIcon)((QFileIconProvider *)cls)->icon (arg1));
}


// QFlags<QFileIconProvider::Option> QFileIconProvider::options()


static void _init_f_options_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QFileIconProvider::Option> > ();
}

static void _call_f_options_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QFileIconProvider::Option> > ((QFlags<QFileIconProvider::Option>)((QFileIconProvider *)cls)->options ());
}


// void QFileIconProvider::setOptions(QFlags<QFileIconProvider::Option> options)


static void _init_f_setOptions_3582 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<QFlags<QFileIconProvider::Option> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOptions_3582 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QFileIconProvider::Option> arg1 = gsi::arg_reader<QFlags<QFileIconProvider::Option> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileIconProvider *)cls)->setOptions (arg1);
}


// QString QFileIconProvider::type(const QFileInfo &info)


static void _init_f_type_c2174 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("info");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_type_c2174 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<QString > ((QString)((QFileIconProvider *)cls)->type (arg1));
}


namespace gsi
{

static gsi::Methods methods_QFileIconProvider () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("icon", "@brief Method QIcon QFileIconProvider::icon(QFileIconProvider::IconType type)\n", true, &_init_f_icon_c3064, &_call_f_icon_c3064);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Method QIcon QFileIconProvider::icon(const QFileInfo &info)\n", true, &_init_f_icon_c2174, &_call_f_icon_c2174);
  methods += new qt_gsi::GenericMethod (":options", "@brief Method QFlags<QFileIconProvider::Option> QFileIconProvider::options()\n", true, &_init_f_options_c0, &_call_f_options_c0);
  methods += new qt_gsi::GenericMethod ("setOptions|options=", "@brief Method void QFileIconProvider::setOptions(QFlags<QFileIconProvider::Option> options)\n", false, &_init_f_setOptions_3582, &_call_f_setOptions_3582);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QString QFileIconProvider::type(const QFileInfo &info)\n", true, &_init_f_type_c2174, &_call_f_type_c2174);
  return methods;
}

gsi::Class<QFileIconProvider> decl_QFileIconProvider ("QtWidgets", "QFileIconProvider_Native",
  methods_QFileIconProvider (),
  "@hide\n@alias QFileIconProvider");

GSI_QTWIDGETS_PUBLIC gsi::Class<QFileIconProvider> &qtdecl_QFileIconProvider () { return decl_QFileIconProvider; }

}


class QFileIconProvider_Adaptor : public QFileIconProvider, public qt_gsi::QtObjectBase
{
public:

  virtual ~QFileIconProvider_Adaptor();

  //  [adaptor ctor] QFileIconProvider::QFileIconProvider()
  QFileIconProvider_Adaptor() : QFileIconProvider()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QIcon QFileIconProvider::icon(QFileIconProvider::IconType type)
  QIcon cbs_icon_c3064_0(const qt_gsi::Converter<QFileIconProvider::IconType>::target_type & type) const
  {
    return QFileIconProvider::icon(qt_gsi::QtToCppAdaptor<QFileIconProvider::IconType>(type).cref());
  }

  virtual QIcon icon(QFileIconProvider::IconType type) const
  {
    if (cb_icon_c3064_0.can_issue()) {
      return cb_icon_c3064_0.issue<QFileIconProvider_Adaptor, QIcon, const qt_gsi::Converter<QFileIconProvider::IconType>::target_type &>(&QFileIconProvider_Adaptor::cbs_icon_c3064_0, qt_gsi::CppToQtAdaptor<QFileIconProvider::IconType>(type));
    } else {
      return QFileIconProvider::icon(type);
    }
  }

  //  [adaptor impl] QIcon QFileIconProvider::icon(const QFileInfo &info)
  QIcon cbs_icon_c2174_0(const QFileInfo &info) const
  {
    return QFileIconProvider::icon(info);
  }

  virtual QIcon icon(const QFileInfo &info) const
  {
    if (cb_icon_c2174_0.can_issue()) {
      return cb_icon_c2174_0.issue<QFileIconProvider_Adaptor, QIcon, const QFileInfo &>(&QFileIconProvider_Adaptor::cbs_icon_c2174_0, info);
    } else {
      return QFileIconProvider::icon(info);
    }
  }

  //  [adaptor impl] QString QFileIconProvider::type(const QFileInfo &info)
  QString cbs_type_c2174_0(const QFileInfo &info) const
  {
    return QFileIconProvider::type(info);
  }

  virtual QString type(const QFileInfo &info) const
  {
    if (cb_type_c2174_0.can_issue()) {
      return cb_type_c2174_0.issue<QFileIconProvider_Adaptor, QString, const QFileInfo &>(&QFileIconProvider_Adaptor::cbs_type_c2174_0, info);
    } else {
      return QFileIconProvider::type(info);
    }
  }

  gsi::Callback cb_icon_c3064_0;
  gsi::Callback cb_icon_c2174_0;
  gsi::Callback cb_type_c2174_0;
};

QFileIconProvider_Adaptor::~QFileIconProvider_Adaptor() { }

//  Constructor QFileIconProvider::QFileIconProvider() (adaptor class)

static void _init_ctor_QFileIconProvider_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QFileIconProvider_Adaptor> ();
}

static void _call_ctor_QFileIconProvider_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFileIconProvider_Adaptor *> (new QFileIconProvider_Adaptor ());
}


// QIcon QFileIconProvider::icon(QFileIconProvider::IconType type)

static void _init_cbs_icon_c3064_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QFileIconProvider::IconType>::target_type & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_cbs_icon_c3064_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QFileIconProvider::IconType>::target_type & arg1 = args.read<const qt_gsi::Converter<QFileIconProvider::IconType>::target_type & > (heap);
  ret.write<QIcon > ((QIcon)((QFileIconProvider_Adaptor *)cls)->cbs_icon_c3064_0 (arg1));
}

static void _set_callback_cbs_icon_c3064_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileIconProvider_Adaptor *)cls)->cb_icon_c3064_0 = cb;
}


// QIcon QFileIconProvider::icon(const QFileInfo &info)

static void _init_cbs_icon_c2174_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("info");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_cbs_icon_c2174_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = args.read<const QFileInfo & > (heap);
  ret.write<QIcon > ((QIcon)((QFileIconProvider_Adaptor *)cls)->cbs_icon_c2174_0 (arg1));
}

static void _set_callback_cbs_icon_c2174_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileIconProvider_Adaptor *)cls)->cb_icon_c2174_0 = cb;
}


// QString QFileIconProvider::type(const QFileInfo &info)

static void _init_cbs_type_c2174_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("info");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_type_c2174_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = args.read<const QFileInfo & > (heap);
  ret.write<QString > ((QString)((QFileIconProvider_Adaptor *)cls)->cbs_type_c2174_0 (arg1));
}

static void _set_callback_cbs_type_c2174_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileIconProvider_Adaptor *)cls)->cb_type_c2174_0 = cb;
}


namespace gsi
{

gsi::Class<QFileIconProvider> &qtdecl_QFileIconProvider ();

static gsi::Methods methods_QFileIconProvider_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileIconProvider::QFileIconProvider()\nThis method creates an object of class QFileIconProvider.", &_init_ctor_QFileIconProvider_Adaptor_0, &_call_ctor_QFileIconProvider_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Virtual method QIcon QFileIconProvider::icon(QFileIconProvider::IconType type)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_icon_c3064_0, &_call_cbs_icon_c3064_0);
  methods += new qt_gsi::GenericMethod ("icon", "@hide", true, &_init_cbs_icon_c3064_0, &_call_cbs_icon_c3064_0, &_set_callback_cbs_icon_c3064_0);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Virtual method QIcon QFileIconProvider::icon(const QFileInfo &info)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_icon_c2174_0, &_call_cbs_icon_c2174_0);
  methods += new qt_gsi::GenericMethod ("icon", "@hide", true, &_init_cbs_icon_c2174_0, &_call_cbs_icon_c2174_0, &_set_callback_cbs_icon_c2174_0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Virtual method QString QFileIconProvider::type(const QFileInfo &info)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_type_c2174_0, &_call_cbs_type_c2174_0);
  methods += new qt_gsi::GenericMethod ("type", "@hide", true, &_init_cbs_type_c2174_0, &_call_cbs_type_c2174_0, &_set_callback_cbs_type_c2174_0);
  return methods;
}

gsi::Class<QFileIconProvider_Adaptor> decl_QFileIconProvider_Adaptor (qtdecl_QFileIconProvider (), "QtWidgets", "QFileIconProvider",
  methods_QFileIconProvider_Adaptor (),
  "@qt\n@brief Binding of QFileIconProvider");

}


//  Implementation of the enum wrapper class for QFileIconProvider::IconType
namespace qt_gsi
{

static gsi::Enum<QFileIconProvider::IconType> decl_QFileIconProvider_IconType_Enum ("QtWidgets", "QFileIconProvider_IconType",
    gsi::enum_const ("Computer", QFileIconProvider::Computer, "@brief Enum constant QFileIconProvider::Computer") +
    gsi::enum_const ("Desktop", QFileIconProvider::Desktop, "@brief Enum constant QFileIconProvider::Desktop") +
    gsi::enum_const ("Trashcan", QFileIconProvider::Trashcan, "@brief Enum constant QFileIconProvider::Trashcan") +
    gsi::enum_const ("Network", QFileIconProvider::Network, "@brief Enum constant QFileIconProvider::Network") +
    gsi::enum_const ("Drive", QFileIconProvider::Drive, "@brief Enum constant QFileIconProvider::Drive") +
    gsi::enum_const ("Folder", QFileIconProvider::Folder, "@brief Enum constant QFileIconProvider::Folder") +
    gsi::enum_const ("File", QFileIconProvider::File, "@brief Enum constant QFileIconProvider::File"),
  "@qt\n@brief This class represents the QFileIconProvider::IconType enum");

static gsi::QFlagsClass<QFileIconProvider::IconType > decl_QFileIconProvider_IconType_Enums ("QtWidgets", "QFileIconProvider_QFlags_IconType",
  "@qt\n@brief This class represents the QFlags<QFileIconProvider::IconType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QFileIconProvider> inject_QFileIconProvider_IconType_Enum_in_parent (decl_QFileIconProvider_IconType_Enum.defs ());
static gsi::ClassExt<QFileIconProvider> decl_QFileIconProvider_IconType_Enum_as_child (decl_QFileIconProvider_IconType_Enum, "IconType");
static gsi::ClassExt<QFileIconProvider> decl_QFileIconProvider_IconType_Enums_as_child (decl_QFileIconProvider_IconType_Enums, "QFlags_IconType");

}


//  Implementation of the enum wrapper class for QFileIconProvider::Option
namespace qt_gsi
{

static gsi::Enum<QFileIconProvider::Option> decl_QFileIconProvider_Option_Enum ("QtWidgets", "QFileIconProvider_Option",
    gsi::enum_const ("DontUseCustomDirectoryIcons", QFileIconProvider::DontUseCustomDirectoryIcons, "@brief Enum constant QFileIconProvider::DontUseCustomDirectoryIcons"),
  "@qt\n@brief This class represents the QFileIconProvider::Option enum");

static gsi::QFlagsClass<QFileIconProvider::Option > decl_QFileIconProvider_Option_Enums ("QtWidgets", "QFileIconProvider_QFlags_Option",
  "@qt\n@brief This class represents the QFlags<QFileIconProvider::Option> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QFileIconProvider> inject_QFileIconProvider_Option_Enum_in_parent (decl_QFileIconProvider_Option_Enum.defs ());
static gsi::ClassExt<QFileIconProvider> decl_QFileIconProvider_Option_Enum_as_child (decl_QFileIconProvider_Option_Enum, "Option");
static gsi::ClassExt<QFileIconProvider> decl_QFileIconProvider_Option_Enums_as_child (decl_QFileIconProvider_Option_Enums, "QFlags_Option");

}


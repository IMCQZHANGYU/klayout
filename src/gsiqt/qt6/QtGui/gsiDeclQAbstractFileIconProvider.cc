
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
*  @file gsiDeclQAbstractFileIconProvider.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractFileIconProvider

// QIcon QAbstractFileIconProvider::icon(QAbstractFileIconProvider::IconType)


static void _init_f_icon_c3884 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_f_icon_c3884 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & >() (args, heap);
  ret.write<QIcon > ((QIcon)((QAbstractFileIconProvider *)cls)->icon (qt_gsi::QtToCppAdaptor<QAbstractFileIconProvider::IconType>(arg1).cref()));
}


// QIcon QAbstractFileIconProvider::icon(const QFileInfo &)


static void _init_f_icon_c2174 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_f_icon_c2174 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<QIcon > ((QIcon)((QAbstractFileIconProvider *)cls)->icon (arg1));
}


// QFlags<QAbstractFileIconProvider::Option> QAbstractFileIconProvider::options()


static void _init_f_options_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QAbstractFileIconProvider::Option> > ();
}

static void _call_f_options_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QAbstractFileIconProvider::Option> > ((QFlags<QAbstractFileIconProvider::Option>)((QAbstractFileIconProvider *)cls)->options ());
}


// void QAbstractFileIconProvider::setOptions(QFlags<QAbstractFileIconProvider::Option>)


static void _init_f_setOptions_4402 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QFlags<QAbstractFileIconProvider::Option> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOptions_4402 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QAbstractFileIconProvider::Option> arg1 = gsi::arg_reader<QFlags<QAbstractFileIconProvider::Option> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractFileIconProvider *)cls)->setOptions (arg1);
}


// QString QAbstractFileIconProvider::type(const QFileInfo &)


static void _init_f_type_c2174 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_type_c2174 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<QString > ((QString)((QAbstractFileIconProvider *)cls)->type (arg1));
}


namespace gsi
{

static gsi::Methods methods_QAbstractFileIconProvider () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("icon", "@brief Method QIcon QAbstractFileIconProvider::icon(QAbstractFileIconProvider::IconType)\n", true, &_init_f_icon_c3884, &_call_f_icon_c3884);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Method QIcon QAbstractFileIconProvider::icon(const QFileInfo &)\n", true, &_init_f_icon_c2174, &_call_f_icon_c2174);
  methods += new qt_gsi::GenericMethod (":options", "@brief Method QFlags<QAbstractFileIconProvider::Option> QAbstractFileIconProvider::options()\n", true, &_init_f_options_c0, &_call_f_options_c0);
  methods += new qt_gsi::GenericMethod ("setOptions|options=", "@brief Method void QAbstractFileIconProvider::setOptions(QFlags<QAbstractFileIconProvider::Option>)\n", false, &_init_f_setOptions_4402, &_call_f_setOptions_4402);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QString QAbstractFileIconProvider::type(const QFileInfo &)\n", true, &_init_f_type_c2174, &_call_f_type_c2174);
  return methods;
}

gsi::Class<QAbstractFileIconProvider> decl_QAbstractFileIconProvider ("QtGui", "QAbstractFileIconProvider_Native",
  methods_QAbstractFileIconProvider (),
  "@hide\n@alias QAbstractFileIconProvider");

GSI_QTGUI_PUBLIC gsi::Class<QAbstractFileIconProvider> &qtdecl_QAbstractFileIconProvider () { return decl_QAbstractFileIconProvider; }

}


class QAbstractFileIconProvider_Adaptor : public QAbstractFileIconProvider, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractFileIconProvider_Adaptor();

  //  [adaptor ctor] QAbstractFileIconProvider::QAbstractFileIconProvider()
  QAbstractFileIconProvider_Adaptor() : QAbstractFileIconProvider()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QIcon QAbstractFileIconProvider::icon(QAbstractFileIconProvider::IconType)
  QIcon cbs_icon_c3884_0(const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & arg1) const
  {
    return QAbstractFileIconProvider::icon(qt_gsi::QtToCppAdaptor<QAbstractFileIconProvider::IconType>(arg1).cref());
  }

  virtual QIcon icon(QAbstractFileIconProvider::IconType arg1) const
  {
    if (cb_icon_c3884_0.can_issue()) {
      return cb_icon_c3884_0.issue<QAbstractFileIconProvider_Adaptor, QIcon, const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type &>(&QAbstractFileIconProvider_Adaptor::cbs_icon_c3884_0, qt_gsi::CppToQtAdaptor<QAbstractFileIconProvider::IconType>(arg1));
    } else {
      return QAbstractFileIconProvider::icon(arg1);
    }
  }

  //  [adaptor impl] QIcon QAbstractFileIconProvider::icon(const QFileInfo &)
  QIcon cbs_icon_c2174_0(const QFileInfo &arg1) const
  {
    return QAbstractFileIconProvider::icon(arg1);
  }

  virtual QIcon icon(const QFileInfo &arg1) const
  {
    if (cb_icon_c2174_0.can_issue()) {
      return cb_icon_c2174_0.issue<QAbstractFileIconProvider_Adaptor, QIcon, const QFileInfo &>(&QAbstractFileIconProvider_Adaptor::cbs_icon_c2174_0, arg1);
    } else {
      return QAbstractFileIconProvider::icon(arg1);
    }
  }

  //  [adaptor impl] QFlags<QAbstractFileIconProvider::Option> QAbstractFileIconProvider::options()
  QFlags<QAbstractFileIconProvider::Option> cbs_options_c0_0() const
  {
    return QAbstractFileIconProvider::options();
  }

  virtual QFlags<QAbstractFileIconProvider::Option> options() const
  {
    if (cb_options_c0_0.can_issue()) {
      return cb_options_c0_0.issue<QAbstractFileIconProvider_Adaptor, QFlags<QAbstractFileIconProvider::Option> >(&QAbstractFileIconProvider_Adaptor::cbs_options_c0_0);
    } else {
      return QAbstractFileIconProvider::options();
    }
  }

  //  [adaptor impl] void QAbstractFileIconProvider::setOptions(QFlags<QAbstractFileIconProvider::Option>)
  void cbs_setOptions_4402_0(QFlags<QAbstractFileIconProvider::Option> arg1)
  {
    QAbstractFileIconProvider::setOptions(arg1);
  }

  virtual void setOptions(QFlags<QAbstractFileIconProvider::Option> arg1)
  {
    if (cb_setOptions_4402_0.can_issue()) {
      cb_setOptions_4402_0.issue<QAbstractFileIconProvider_Adaptor, QFlags<QAbstractFileIconProvider::Option> >(&QAbstractFileIconProvider_Adaptor::cbs_setOptions_4402_0, arg1);
    } else {
      QAbstractFileIconProvider::setOptions(arg1);
    }
  }

  //  [adaptor impl] QString QAbstractFileIconProvider::type(const QFileInfo &)
  QString cbs_type_c2174_0(const QFileInfo &arg1) const
  {
    return QAbstractFileIconProvider::type(arg1);
  }

  virtual QString type(const QFileInfo &arg1) const
  {
    if (cb_type_c2174_0.can_issue()) {
      return cb_type_c2174_0.issue<QAbstractFileIconProvider_Adaptor, QString, const QFileInfo &>(&QAbstractFileIconProvider_Adaptor::cbs_type_c2174_0, arg1);
    } else {
      return QAbstractFileIconProvider::type(arg1);
    }
  }

  gsi::Callback cb_icon_c3884_0;
  gsi::Callback cb_icon_c2174_0;
  gsi::Callback cb_options_c0_0;
  gsi::Callback cb_setOptions_4402_0;
  gsi::Callback cb_type_c2174_0;
};

QAbstractFileIconProvider_Adaptor::~QAbstractFileIconProvider_Adaptor() { }

//  Constructor QAbstractFileIconProvider::QAbstractFileIconProvider() (adaptor class)

static void _init_ctor_QAbstractFileIconProvider_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractFileIconProvider_Adaptor> ();
}

static void _call_ctor_QAbstractFileIconProvider_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractFileIconProvider_Adaptor *> (new QAbstractFileIconProvider_Adaptor ());
}


// QIcon QAbstractFileIconProvider::icon(QAbstractFileIconProvider::IconType)

static void _init_cbs_icon_c3884_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_cbs_icon_c3884_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & arg1 = args.read<const qt_gsi::Converter<QAbstractFileIconProvider::IconType>::target_type & > (heap);
  ret.write<QIcon > ((QIcon)((QAbstractFileIconProvider_Adaptor *)cls)->cbs_icon_c3884_0 (arg1));
}

static void _set_callback_cbs_icon_c3884_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractFileIconProvider_Adaptor *)cls)->cb_icon_c3884_0 = cb;
}


// QIcon QAbstractFileIconProvider::icon(const QFileInfo &)

static void _init_cbs_icon_c2174_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QIcon > ();
}

static void _call_cbs_icon_c2174_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = args.read<const QFileInfo & > (heap);
  ret.write<QIcon > ((QIcon)((QAbstractFileIconProvider_Adaptor *)cls)->cbs_icon_c2174_0 (arg1));
}

static void _set_callback_cbs_icon_c2174_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractFileIconProvider_Adaptor *)cls)->cb_icon_c2174_0 = cb;
}


// QFlags<QAbstractFileIconProvider::Option> QAbstractFileIconProvider::options()

static void _init_cbs_options_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QAbstractFileIconProvider::Option> > ();
}

static void _call_cbs_options_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QAbstractFileIconProvider::Option> > ((QFlags<QAbstractFileIconProvider::Option>)((QAbstractFileIconProvider_Adaptor *)cls)->cbs_options_c0_0 ());
}

static void _set_callback_cbs_options_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractFileIconProvider_Adaptor *)cls)->cb_options_c0_0 = cb;
}


// void QAbstractFileIconProvider::setOptions(QFlags<QAbstractFileIconProvider::Option>)

static void _init_cbs_setOptions_4402_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QFlags<QAbstractFileIconProvider::Option> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setOptions_4402_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QAbstractFileIconProvider::Option> arg1 = args.read<QFlags<QAbstractFileIconProvider::Option> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractFileIconProvider_Adaptor *)cls)->cbs_setOptions_4402_0 (arg1);
}

static void _set_callback_cbs_setOptions_4402_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractFileIconProvider_Adaptor *)cls)->cb_setOptions_4402_0 = cb;
}


// QString QAbstractFileIconProvider::type(const QFileInfo &)

static void _init_cbs_type_c2174_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_type_c2174_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = args.read<const QFileInfo & > (heap);
  ret.write<QString > ((QString)((QAbstractFileIconProvider_Adaptor *)cls)->cbs_type_c2174_0 (arg1));
}

static void _set_callback_cbs_type_c2174_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractFileIconProvider_Adaptor *)cls)->cb_type_c2174_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractFileIconProvider> &qtdecl_QAbstractFileIconProvider ();

static gsi::Methods methods_QAbstractFileIconProvider_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractFileIconProvider::QAbstractFileIconProvider()\nThis method creates an object of class QAbstractFileIconProvider.", &_init_ctor_QAbstractFileIconProvider_Adaptor_0, &_call_ctor_QAbstractFileIconProvider_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Virtual method QIcon QAbstractFileIconProvider::icon(QAbstractFileIconProvider::IconType)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_icon_c3884_0, &_call_cbs_icon_c3884_0);
  methods += new qt_gsi::GenericMethod ("icon", "@hide", true, &_init_cbs_icon_c3884_0, &_call_cbs_icon_c3884_0, &_set_callback_cbs_icon_c3884_0);
  methods += new qt_gsi::GenericMethod ("icon", "@brief Virtual method QIcon QAbstractFileIconProvider::icon(const QFileInfo &)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_icon_c2174_0, &_call_cbs_icon_c2174_0);
  methods += new qt_gsi::GenericMethod ("icon", "@hide", true, &_init_cbs_icon_c2174_0, &_call_cbs_icon_c2174_0, &_set_callback_cbs_icon_c2174_0);
  methods += new qt_gsi::GenericMethod ("options", "@brief Virtual method QFlags<QAbstractFileIconProvider::Option> QAbstractFileIconProvider::options()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_options_c0_0, &_call_cbs_options_c0_0);
  methods += new qt_gsi::GenericMethod ("options", "@hide", true, &_init_cbs_options_c0_0, &_call_cbs_options_c0_0, &_set_callback_cbs_options_c0_0);
  methods += new qt_gsi::GenericMethod ("setOptions", "@brief Virtual method void QAbstractFileIconProvider::setOptions(QFlags<QAbstractFileIconProvider::Option>)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setOptions_4402_0, &_call_cbs_setOptions_4402_0);
  methods += new qt_gsi::GenericMethod ("setOptions", "@hide", false, &_init_cbs_setOptions_4402_0, &_call_cbs_setOptions_4402_0, &_set_callback_cbs_setOptions_4402_0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Virtual method QString QAbstractFileIconProvider::type(const QFileInfo &)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_type_c2174_0, &_call_cbs_type_c2174_0);
  methods += new qt_gsi::GenericMethod ("type", "@hide", true, &_init_cbs_type_c2174_0, &_call_cbs_type_c2174_0, &_set_callback_cbs_type_c2174_0);
  return methods;
}

gsi::Class<QAbstractFileIconProvider_Adaptor> decl_QAbstractFileIconProvider_Adaptor (qtdecl_QAbstractFileIconProvider (), "QtGui", "QAbstractFileIconProvider",
  methods_QAbstractFileIconProvider_Adaptor (),
  "@qt\n@brief Binding of QAbstractFileIconProvider");

}


//  Implementation of the enum wrapper class for QAbstractFileIconProvider::IconType
namespace qt_gsi
{

static gsi::Enum<QAbstractFileIconProvider::IconType> decl_QAbstractFileIconProvider_IconType_Enum ("QtGui", "QAbstractFileIconProvider_IconType",
    gsi::enum_const ("Computer", QAbstractFileIconProvider::Computer, "@brief Enum constant QAbstractFileIconProvider::Computer") +
    gsi::enum_const ("Desktop", QAbstractFileIconProvider::Desktop, "@brief Enum constant QAbstractFileIconProvider::Desktop") +
    gsi::enum_const ("Trashcan", QAbstractFileIconProvider::Trashcan, "@brief Enum constant QAbstractFileIconProvider::Trashcan") +
    gsi::enum_const ("Network", QAbstractFileIconProvider::Network, "@brief Enum constant QAbstractFileIconProvider::Network") +
    gsi::enum_const ("Drive", QAbstractFileIconProvider::Drive, "@brief Enum constant QAbstractFileIconProvider::Drive") +
    gsi::enum_const ("Folder", QAbstractFileIconProvider::Folder, "@brief Enum constant QAbstractFileIconProvider::Folder") +
    gsi::enum_const ("File", QAbstractFileIconProvider::File, "@brief Enum constant QAbstractFileIconProvider::File"),
  "@qt\n@brief This class represents the QAbstractFileIconProvider::IconType enum");

static gsi::QFlagsClass<QAbstractFileIconProvider::IconType > decl_QAbstractFileIconProvider_IconType_Enums ("QtGui", "QAbstractFileIconProvider_QFlags_IconType",
  "@qt\n@brief This class represents the QFlags<QAbstractFileIconProvider::IconType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAbstractFileIconProvider> inject_QAbstractFileIconProvider_IconType_Enum_in_parent (decl_QAbstractFileIconProvider_IconType_Enum.defs ());
static gsi::ClassExt<QAbstractFileIconProvider> decl_QAbstractFileIconProvider_IconType_Enum_as_child (decl_QAbstractFileIconProvider_IconType_Enum, "IconType");
static gsi::ClassExt<QAbstractFileIconProvider> decl_QAbstractFileIconProvider_IconType_Enums_as_child (decl_QAbstractFileIconProvider_IconType_Enums, "QFlags_IconType");

}


//  Implementation of the enum wrapper class for QAbstractFileIconProvider::Option
namespace qt_gsi
{

static gsi::Enum<QAbstractFileIconProvider::Option> decl_QAbstractFileIconProvider_Option_Enum ("QtGui", "QAbstractFileIconProvider_Option",
    gsi::enum_const ("DontUseCustomDirectoryIcons", QAbstractFileIconProvider::DontUseCustomDirectoryIcons, "@brief Enum constant QAbstractFileIconProvider::DontUseCustomDirectoryIcons"),
  "@qt\n@brief This class represents the QAbstractFileIconProvider::Option enum");

static gsi::QFlagsClass<QAbstractFileIconProvider::Option > decl_QAbstractFileIconProvider_Option_Enums ("QtGui", "QAbstractFileIconProvider_QFlags_Option",
  "@qt\n@brief This class represents the QFlags<QAbstractFileIconProvider::Option> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAbstractFileIconProvider> inject_QAbstractFileIconProvider_Option_Enum_in_parent (decl_QAbstractFileIconProvider_Option_Enum.defs ());
static gsi::ClassExt<QAbstractFileIconProvider> decl_QAbstractFileIconProvider_Option_Enum_as_child (decl_QAbstractFileIconProvider_Option_Enum, "Option");
static gsi::ClassExt<QAbstractFileIconProvider> decl_QAbstractFileIconProvider_Option_Enums_as_child (decl_QAbstractFileIconProvider_Option_Enums, "QFlags_Option");

}



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
*  @file gsiDeclQPlatformSurfaceEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPlatformSurfaceEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPlatformSurfaceEvent

// QPlatformSurfaceEvent::SurfaceEventType QPlatformSurfaceEvent::surfaceEventType()


static void _init_f_surfaceEventType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPlatformSurfaceEvent::SurfaceEventType>::target_type > ();
}

static void _call_f_surfaceEventType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPlatformSurfaceEvent::SurfaceEventType>::target_type > ((qt_gsi::Converter<QPlatformSurfaceEvent::SurfaceEventType>::target_type)qt_gsi::CppToQtAdaptor<QPlatformSurfaceEvent::SurfaceEventType>(((QPlatformSurfaceEvent *)cls)->surfaceEventType ()));
}


namespace gsi
{

static gsi::Methods methods_QPlatformSurfaceEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("surfaceEventType", "@brief Method QPlatformSurfaceEvent::SurfaceEventType QPlatformSurfaceEvent::surfaceEventType()\n", true, &_init_f_surfaceEventType_c0, &_call_f_surfaceEventType_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QPlatformSurfaceEvent> decl_QPlatformSurfaceEvent (qtdecl_QEvent (), "QtGui", "QPlatformSurfaceEvent_Native",
  methods_QPlatformSurfaceEvent (),
  "@hide\n@alias QPlatformSurfaceEvent");

GSI_QTGUI_PUBLIC gsi::Class<QPlatformSurfaceEvent> &qtdecl_QPlatformSurfaceEvent () { return decl_QPlatformSurfaceEvent; }

}


class QPlatformSurfaceEvent_Adaptor : public QPlatformSurfaceEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPlatformSurfaceEvent_Adaptor();

  //  [adaptor ctor] QPlatformSurfaceEvent::QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType)
  QPlatformSurfaceEvent_Adaptor(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) : QPlatformSurfaceEvent(surfaceEventType)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QPlatformSurfaceEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QPlatformSurfaceEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QPlatformSurfaceEvent_Adaptor, bool>(&QPlatformSurfaceEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QPlatformSurfaceEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QPlatformSurfaceEvent_Adaptor::~QPlatformSurfaceEvent_Adaptor() { }

//  Constructor QPlatformSurfaceEvent::QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) (adaptor class)

static void _init_ctor_QPlatformSurfaceEvent_Adaptor_4342 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("surfaceEventType");
  decl->add_arg<const qt_gsi::Converter<QPlatformSurfaceEvent::SurfaceEventType>::target_type & > (argspec_0);
  decl->set_return_new<QPlatformSurfaceEvent_Adaptor> ();
}

static void _call_ctor_QPlatformSurfaceEvent_Adaptor_4342 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPlatformSurfaceEvent::SurfaceEventType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPlatformSurfaceEvent::SurfaceEventType>::target_type & >() (args, heap);
  ret.write<QPlatformSurfaceEvent_Adaptor *> (new QPlatformSurfaceEvent_Adaptor (qt_gsi::QtToCppAdaptor<QPlatformSurfaceEvent::SurfaceEventType>(arg1).cref()));
}


// void QPlatformSurfaceEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPlatformSurfaceEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QPlatformSurfaceEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QPlatformSurfaceEvent> &qtdecl_QPlatformSurfaceEvent ();

static gsi::Methods methods_QPlatformSurfaceEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPlatformSurfaceEvent::QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType)\nThis method creates an object of class QPlatformSurfaceEvent.", &_init_ctor_QPlatformSurfaceEvent_Adaptor_4342, &_call_ctor_QPlatformSurfaceEvent_Adaptor_4342);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QPlatformSurfaceEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QPlatformSurfaceEvent_Adaptor> decl_QPlatformSurfaceEvent_Adaptor (qtdecl_QPlatformSurfaceEvent (), "QtGui", "QPlatformSurfaceEvent",
  methods_QPlatformSurfaceEvent_Adaptor (),
  "@qt\n@brief Binding of QPlatformSurfaceEvent");

}


//  Implementation of the enum wrapper class for QPlatformSurfaceEvent::SurfaceEventType
namespace qt_gsi
{

static gsi::Enum<QPlatformSurfaceEvent::SurfaceEventType> decl_QPlatformSurfaceEvent_SurfaceEventType_Enum ("QtGui", "QPlatformSurfaceEvent_SurfaceEventType",
    gsi::enum_const ("SurfaceCreated", QPlatformSurfaceEvent::SurfaceCreated, "@brief Enum constant QPlatformSurfaceEvent::SurfaceCreated") +
    gsi::enum_const ("SurfaceAboutToBeDestroyed", QPlatformSurfaceEvent::SurfaceAboutToBeDestroyed, "@brief Enum constant QPlatformSurfaceEvent::SurfaceAboutToBeDestroyed"),
  "@qt\n@brief This class represents the QPlatformSurfaceEvent::SurfaceEventType enum");

static gsi::QFlagsClass<QPlatformSurfaceEvent::SurfaceEventType > decl_QPlatformSurfaceEvent_SurfaceEventType_Enums ("QtGui", "QPlatformSurfaceEvent_QFlags_SurfaceEventType",
  "@qt\n@brief This class represents the QFlags<QPlatformSurfaceEvent::SurfaceEventType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPlatformSurfaceEvent> inject_QPlatformSurfaceEvent_SurfaceEventType_Enum_in_parent (decl_QPlatformSurfaceEvent_SurfaceEventType_Enum.defs ());
static gsi::ClassExt<QPlatformSurfaceEvent> decl_QPlatformSurfaceEvent_SurfaceEventType_Enum_as_child (decl_QPlatformSurfaceEvent_SurfaceEventType_Enum, "SurfaceEventType");
static gsi::ClassExt<QPlatformSurfaceEvent> decl_QPlatformSurfaceEvent_SurfaceEventType_Enums_as_child (decl_QPlatformSurfaceEvent_SurfaceEventType_Enums, "QFlags_SurfaceEventType");

}


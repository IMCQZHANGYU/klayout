
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
*  @file gsiDeclQOffscreenSurface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QOffscreenSurface>
#include <QScreen>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QOffscreenSurface

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QOffscreenSurface::staticMetaObject);
}


// void QOffscreenSurface::create()


static void _init_f_create_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_create_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QOffscreenSurface *)cls)->create ();
}


// void QOffscreenSurface::destroy()


static void _init_f_destroy_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_destroy_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QOffscreenSurface *)cls)->destroy ();
}


// QSurfaceFormat QOffscreenSurface::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSurfaceFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSurfaceFormat > ((QSurfaceFormat)((QOffscreenSurface *)cls)->format ());
}


// bool QOffscreenSurface::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QOffscreenSurface *)cls)->isValid ());
}


// QSurfaceFormat QOffscreenSurface::requestedFormat()


static void _init_f_requestedFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSurfaceFormat > ();
}

static void _call_f_requestedFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSurfaceFormat > ((QSurfaceFormat)((QOffscreenSurface *)cls)->requestedFormat ());
}


// QScreen *QOffscreenSurface::screen()


static void _init_f_screen_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QScreen * > ();
}

static void _call_f_screen_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QScreen * > ((QScreen *)((QOffscreenSurface *)cls)->screen ());
}


// void QOffscreenSurface::setFormat(const QSurfaceFormat &format)


static void _init_f_setFormat_2724 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QSurfaceFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFormat_2724 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSurfaceFormat &arg1 = gsi::arg_reader<const QSurfaceFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QOffscreenSurface *)cls)->setFormat (arg1);
}


// void QOffscreenSurface::setScreen(QScreen *screen)


static void _init_f_setScreen_1311 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen");
  decl->add_arg<QScreen * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScreen_1311 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QScreen *arg1 = gsi::arg_reader<QScreen * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QOffscreenSurface *)cls)->setScreen (arg1);
}


// QSize QOffscreenSurface::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QOffscreenSurface *)cls)->size ());
}


// QSurface::SurfaceType QOffscreenSurface::surfaceType()


static void _init_f_surfaceType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSurface::SurfaceType>::target_type > ();
}

static void _call_f_surfaceType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSurface::SurfaceType>::target_type > ((qt_gsi::Converter<QSurface::SurfaceType>::target_type)qt_gsi::CppToQtAdaptor<QSurface::SurfaceType>(((QOffscreenSurface *)cls)->surfaceType ()));
}


// static QString QOffscreenSurface::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QOffscreenSurface::tr (arg1, arg2, arg3));
}


//  base class cast for QObject

static void _init_f_QOffscreenSurface_as_QObject (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject *> ();
}

static void _call_f_QOffscreenSurface_as_QObject (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<QObject *> ((QObject *)(QOffscreenSurface *)cls);
}

static void _init_f_QOffscreenSurface_as_const_QObject (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QObject *> ();
}

static void _call_f_QOffscreenSurface_as_const_QObject (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QObject *> ((const QObject *)(const QOffscreenSurface *)cls);
}

//  base class cast for QSurface

static void _init_f_QOffscreenSurface_as_QSurface (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSurface *> ();
}

static void _call_f_QOffscreenSurface_as_QSurface (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<QSurface *> ((QSurface *)(QOffscreenSurface *)cls);
}

static void _init_f_QOffscreenSurface_as_const_QSurface (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QSurface *> ();
}

static void _call_f_QOffscreenSurface_as_const_QSurface (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QSurface *> ((const QSurface *)(const QOffscreenSurface *)cls);
}


namespace gsi
{

static gsi::Methods methods_QOffscreenSurface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Method void QOffscreenSurface::create()\n", false, &_init_f_create_0, &_call_f_create_0);
  methods += new qt_gsi::GenericMethod ("qt_destroy", "@brief Method void QOffscreenSurface::destroy()\n", false, &_init_f_destroy_0, &_call_f_destroy_0);
  methods += new qt_gsi::GenericMethod (":format", "@brief Method QSurfaceFormat QOffscreenSurface::format()\nThis is a reimplementation of QSurface::format", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QOffscreenSurface::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("requestedFormat", "@brief Method QSurfaceFormat QOffscreenSurface::requestedFormat()\n", true, &_init_f_requestedFormat_c0, &_call_f_requestedFormat_c0);
  methods += new qt_gsi::GenericMethod (":screen", "@brief Method QScreen *QOffscreenSurface::screen()\n", true, &_init_f_screen_c0, &_call_f_screen_c0);
  methods += new qt_gsi::GenericMethod ("setFormat|format=", "@brief Method void QOffscreenSurface::setFormat(const QSurfaceFormat &format)\n", false, &_init_f_setFormat_2724, &_call_f_setFormat_2724);
  methods += new qt_gsi::GenericMethod ("setScreen|screen=", "@brief Method void QOffscreenSurface::setScreen(QScreen *screen)\n", false, &_init_f_setScreen_1311, &_call_f_setScreen_1311);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method QSize QOffscreenSurface::size()\nThis is a reimplementation of QSurface::size", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("surfaceType", "@brief Method QSurface::SurfaceType QOffscreenSurface::surfaceType()\nThis is a reimplementation of QSurface::surfaceType", true, &_init_f_surfaceType_c0, &_call_f_surfaceType_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QOffscreenSurface::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QOffscreenSurface::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QScreen * > ("screenChanged(QScreen *)", "screenChanged", gsi::arg("screen"), "@brief Signal declaration for QOffscreenSurface::screenChanged(QScreen *screen)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QOffscreenSurface::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericMethod ("asQObject", "@brief Delivers the base class interface QObject of QOffscreenSurface\nClass QOffscreenSurface is derived from multiple base classes. This method delivers the QObject base class aspect.", false, &_init_f_QOffscreenSurface_as_QObject, &_call_f_QOffscreenSurface_as_QObject);
  methods += new qt_gsi::GenericMethod ("asConstQObject", "@brief Delivers the base class interface QObject of QOffscreenSurface\nClass QOffscreenSurface is derived from multiple base classes. This method delivers the QObject base class aspect.\n\nUse this version if you have a const reference.", true, &_init_f_QOffscreenSurface_as_const_QObject, &_call_f_QOffscreenSurface_as_const_QObject);
  methods += new qt_gsi::GenericMethod ("asQSurface", "@brief Delivers the base class interface QSurface of QOffscreenSurface\nClass QOffscreenSurface is derived from multiple base classes. This method delivers the QSurface base class aspect.", false, &_init_f_QOffscreenSurface_as_QSurface, &_call_f_QOffscreenSurface_as_QSurface);
  methods += new qt_gsi::GenericMethod ("asConstQSurface", "@brief Delivers the base class interface QSurface of QOffscreenSurface\nClass QOffscreenSurface is derived from multiple base classes. This method delivers the QSurface base class aspect.\n\nUse this version if you have a const reference.", true, &_init_f_QOffscreenSurface_as_const_QSurface, &_call_f_QOffscreenSurface_as_const_QSurface);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QOffscreenSurface> decl_QOffscreenSurface (qtdecl_QObject (), "QtGui", "QOffscreenSurface_Native",
  methods_QOffscreenSurface (),
  "@hide\n@alias QOffscreenSurface");

//  Additional base classes

gsi::Class<QSurface> &qtdecl_QSurface ();

gsi::ClassExt<QOffscreenSurface> base_class_QSurface_in_QOffscreenSurface (qtdecl_QSurface ());

GSI_QTGUI_PUBLIC gsi::Class<QOffscreenSurface> &qtdecl_QOffscreenSurface () { return decl_QOffscreenSurface; }

}


class QOffscreenSurface_Adaptor : public QOffscreenSurface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QOffscreenSurface_Adaptor();

  //  [adaptor ctor] QOffscreenSurface::QOffscreenSurface(QScreen *screen, QObject *parent)
  QOffscreenSurface_Adaptor() : QOffscreenSurface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QOffscreenSurface::QOffscreenSurface(QScreen *screen, QObject *parent)
  QOffscreenSurface_Adaptor(QScreen *screen) : QOffscreenSurface(screen)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QOffscreenSurface::QOffscreenSurface(QScreen *screen, QObject *parent)
  QOffscreenSurface_Adaptor(QScreen *screen, QObject *parent) : QOffscreenSurface(screen, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QOffscreenSurface::isSignalConnected(const QMetaMethod &signal)
  bool fp_QOffscreenSurface_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QOffscreenSurface::isSignalConnected(signal);
  }

  //  [expose] int QOffscreenSurface::receivers(const char *signal)
  int fp_QOffscreenSurface_receivers_c1731 (const char *signal) const {
    return QOffscreenSurface::receivers(signal);
  }

  //  [expose] void *QOffscreenSurface::resolveInterface(const char *name, int revision)
  void * fp_QOffscreenSurface_resolveInterface_c2390 (const char *name, int revision) const {
    return QOffscreenSurface::resolveInterface(name, revision);
  }

  //  [expose] QObject *QOffscreenSurface::sender()
  QObject * fp_QOffscreenSurface_sender_c0 () const {
    return QOffscreenSurface::sender();
  }

  //  [expose] int QOffscreenSurface::senderSignalIndex()
  int fp_QOffscreenSurface_senderSignalIndex_c0 () const {
    return QOffscreenSurface::senderSignalIndex();
  }

  //  [emitter impl] void QOffscreenSurface::destroyed(QObject *)
  void emitter_QOffscreenSurface_destroyed_1302(QObject *arg1)
  {
    emit QOffscreenSurface::destroyed(arg1);
  }

  //  [adaptor impl] bool QOffscreenSurface::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QOffscreenSurface::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QOffscreenSurface_Adaptor, bool, QEvent *>(&QOffscreenSurface_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QOffscreenSurface::event(_event);
    }
  }

  //  [adaptor impl] bool QOffscreenSurface::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QOffscreenSurface::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QOffscreenSurface_Adaptor, bool, QObject *, QEvent *>(&QOffscreenSurface_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QOffscreenSurface::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] QSurfaceFormat QOffscreenSurface::format()
  QSurfaceFormat cbs_format_c0_0() const
  {
    return QOffscreenSurface::format();
  }

  virtual QSurfaceFormat format() const
  {
    if (cb_format_c0_0.can_issue()) {
      return cb_format_c0_0.issue<QOffscreenSurface_Adaptor, QSurfaceFormat>(&QOffscreenSurface_Adaptor::cbs_format_c0_0);
    } else {
      return QOffscreenSurface::format();
    }
  }

  //  [emitter impl] void QOffscreenSurface::objectNameChanged(const QString &objectName)
  void emitter_QOffscreenSurface_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QOffscreenSurface::objectNameChanged(const QString &objectName)'");
  }

  //  [emitter impl] void QOffscreenSurface::screenChanged(QScreen *screen)
  void emitter_QOffscreenSurface_screenChanged_1311(QScreen *screen)
  {
    emit QOffscreenSurface::screenChanged(screen);
  }

  //  [adaptor impl] QSize QOffscreenSurface::size()
  QSize cbs_size_c0_0() const
  {
    return QOffscreenSurface::size();
  }

  virtual QSize size() const
  {
    if (cb_size_c0_0.can_issue()) {
      return cb_size_c0_0.issue<QOffscreenSurface_Adaptor, QSize>(&QOffscreenSurface_Adaptor::cbs_size_c0_0);
    } else {
      return QOffscreenSurface::size();
    }
  }

  //  [adaptor impl] QSurface::SurfaceType QOffscreenSurface::surfaceType()
  qt_gsi::Converter<QSurface::SurfaceType>::target_type cbs_surfaceType_c0_0() const
  {
    return qt_gsi::CppToQtAdaptor<QSurface::SurfaceType>(QOffscreenSurface::surfaceType());
  }

  virtual QSurface::SurfaceType surfaceType() const
  {
    if (cb_surfaceType_c0_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QSurface::SurfaceType>(cb_surfaceType_c0_0.issue<QOffscreenSurface_Adaptor, qt_gsi::Converter<QSurface::SurfaceType>::target_type>(&QOffscreenSurface_Adaptor::cbs_surfaceType_c0_0)).cref();
    } else {
      return QOffscreenSurface::surfaceType();
    }
  }

  //  [adaptor impl] void QOffscreenSurface::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QOffscreenSurface::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QOffscreenSurface_Adaptor, QChildEvent *>(&QOffscreenSurface_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QOffscreenSurface::childEvent(event);
    }
  }

  //  [adaptor impl] void QOffscreenSurface::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QOffscreenSurface::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QOffscreenSurface_Adaptor, QEvent *>(&QOffscreenSurface_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QOffscreenSurface::customEvent(event);
    }
  }

  //  [adaptor impl] void QOffscreenSurface::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QOffscreenSurface::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QOffscreenSurface_Adaptor, const QMetaMethod &>(&QOffscreenSurface_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QOffscreenSurface::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QOffscreenSurface::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QOffscreenSurface::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QOffscreenSurface_Adaptor, QTimerEvent *>(&QOffscreenSurface_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QOffscreenSurface::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_format_c0_0;
  gsi::Callback cb_size_c0_0;
  gsi::Callback cb_surfaceType_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QOffscreenSurface_Adaptor::~QOffscreenSurface_Adaptor() { }

//  Constructor QOffscreenSurface::QOffscreenSurface(QScreen *screen, QObject *parent) (adaptor class)

static void _init_ctor_QOffscreenSurface_Adaptor_2505 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen", true, "nullptr");
  decl->add_arg<QScreen * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QOffscreenSurface_Adaptor> ();
}

static void _call_ctor_QOffscreenSurface_Adaptor_2505 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QScreen *arg1 = args ? gsi::arg_reader<QScreen * >() (args, heap) : gsi::arg_maker<QScreen * >() (nullptr, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QOffscreenSurface_Adaptor *> (new QOffscreenSurface_Adaptor (arg1, arg2));
}


// void QOffscreenSurface::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QOffscreenSurface_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QOffscreenSurface::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QOffscreenSurface_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QOffscreenSurface::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ((QOffscreenSurface_Adaptor *)cls)->emitter_QOffscreenSurface_destroyed_1302 (arg1);
}


// void QOffscreenSurface::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QOffscreenSurface_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QOffscreenSurface::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QOffscreenSurface_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QOffscreenSurface::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QOffscreenSurface_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// QSurfaceFormat QOffscreenSurface::format()

static void _init_cbs_format_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSurfaceFormat > ();
}

static void _call_cbs_format_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSurfaceFormat > ((QSurfaceFormat)((QOffscreenSurface_Adaptor *)cls)->cbs_format_c0_0 ());
}

static void _set_callback_cbs_format_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_format_c0_0 = cb;
}


// exposed bool QOffscreenSurface::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QOffscreenSurface_Adaptor *)cls)->fp_QOffscreenSurface_isSignalConnected_c2394 (arg1));
}


// emitter void QOffscreenSurface::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QOffscreenSurface_Adaptor *)cls)->emitter_QOffscreenSurface_objectNameChanged_4567 (arg1);
}


// exposed int QOffscreenSurface::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QOffscreenSurface_Adaptor *)cls)->fp_QOffscreenSurface_receivers_c1731 (arg1));
}


// exposed void *QOffscreenSurface::resolveInterface(const char *name, int revision)

static void _init_fp_resolveInterface_c2390 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("revision");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void * > ();
}

static void _call_fp_resolveInterface_c2390 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<void * > ((void *)((QOffscreenSurface_Adaptor *)cls)->fp_QOffscreenSurface_resolveInterface_c2390 (arg1, arg2));
}


// emitter void QOffscreenSurface::screenChanged(QScreen *screen)

static void _init_emitter_screenChanged_1311 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen");
  decl->add_arg<QScreen * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_screenChanged_1311 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QScreen *arg1 = gsi::arg_reader<QScreen * >() (args, heap);
  ((QOffscreenSurface_Adaptor *)cls)->emitter_QOffscreenSurface_screenChanged_1311 (arg1);
}


// exposed QObject *QOffscreenSurface::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QOffscreenSurface_Adaptor *)cls)->fp_QOffscreenSurface_sender_c0 ());
}


// exposed int QOffscreenSurface::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QOffscreenSurface_Adaptor *)cls)->fp_QOffscreenSurface_senderSignalIndex_c0 ());
}


// QSize QOffscreenSurface::size()

static void _init_cbs_size_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_cbs_size_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QOffscreenSurface_Adaptor *)cls)->cbs_size_c0_0 ());
}

static void _set_callback_cbs_size_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_size_c0_0 = cb;
}


// QSurface::SurfaceType QOffscreenSurface::surfaceType()

static void _init_cbs_surfaceType_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSurface::SurfaceType>::target_type > ();
}

static void _call_cbs_surfaceType_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSurface::SurfaceType>::target_type > ((qt_gsi::Converter<QSurface::SurfaceType>::target_type)((QOffscreenSurface_Adaptor *)cls)->cbs_surfaceType_c0_0 ());
}

static void _set_callback_cbs_surfaceType_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_surfaceType_c0_0 = cb;
}


// void QOffscreenSurface::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QOffscreenSurface_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QOffscreenSurface_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QOffscreenSurface> &qtdecl_QOffscreenSurface ();

static gsi::Methods methods_QOffscreenSurface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QOffscreenSurface::QOffscreenSurface(QScreen *screen, QObject *parent)\nThis method creates an object of class QOffscreenSurface.", &_init_ctor_QOffscreenSurface_Adaptor_2505, &_call_ctor_QOffscreenSurface_Adaptor_2505);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QOffscreenSurface::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QOffscreenSurface::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QOffscreenSurface::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QOffscreenSurface::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QOffscreenSurface::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QOffscreenSurface::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("format", "@brief Virtual method QSurfaceFormat QOffscreenSurface::format()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_format_c0_0, &_call_cbs_format_c0_0);
  methods += new qt_gsi::GenericMethod ("format", "@hide", true, &_init_cbs_format_c0_0, &_call_cbs_format_c0_0, &_set_callback_cbs_format_c0_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QOffscreenSurface::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QOffscreenSurface::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QOffscreenSurface::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*resolveInterface", "@brief Method void *QOffscreenSurface::resolveInterface(const char *name, int revision)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_resolveInterface_c2390, &_call_fp_resolveInterface_c2390);
  methods += new qt_gsi::GenericMethod ("emit_screenChanged", "@brief Emitter for signal void QOffscreenSurface::screenChanged(QScreen *screen)\nCall this method to emit this signal.", false, &_init_emitter_screenChanged_1311, &_call_emitter_screenChanged_1311);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QOffscreenSurface::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QOffscreenSurface::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("size", "@brief Virtual method QSize QOffscreenSurface::size()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_size_c0_0, &_call_cbs_size_c0_0);
  methods += new qt_gsi::GenericMethod ("size", "@hide", true, &_init_cbs_size_c0_0, &_call_cbs_size_c0_0, &_set_callback_cbs_size_c0_0);
  methods += new qt_gsi::GenericMethod ("surfaceType", "@brief Virtual method QSurface::SurfaceType QOffscreenSurface::surfaceType()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_surfaceType_c0_0, &_call_cbs_surfaceType_c0_0);
  methods += new qt_gsi::GenericMethod ("surfaceType", "@hide", true, &_init_cbs_surfaceType_c0_0, &_call_cbs_surfaceType_c0_0, &_set_callback_cbs_surfaceType_c0_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QOffscreenSurface::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QOffscreenSurface_Adaptor> decl_QOffscreenSurface_Adaptor (qtdecl_QOffscreenSurface (), "QtGui", "QOffscreenSurface",
  methods_QOffscreenSurface_Adaptor (),
  "@qt\n@brief Binding of QOffscreenSurface");

}



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
*  @file gsiDeclQTouchEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTouchEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QObject>
#include <QPointingDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTouchEvent

// bool QTouchEvent::isBeginEvent()


static void _init_f_isBeginEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBeginEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTouchEvent *)cls)->isBeginEvent ());
}


// bool QTouchEvent::isEndEvent()


static void _init_f_isEndEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEndEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTouchEvent *)cls)->isEndEvent ());
}


// bool QTouchEvent::isUpdateEvent()


static void _init_f_isUpdateEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isUpdateEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTouchEvent *)cls)->isUpdateEvent ());
}


// QObject *QTouchEvent::target()


static void _init_f_target_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_target_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QTouchEvent *)cls)->target ());
}


// QFlags<QEventPoint::State> QTouchEvent::touchPointStates()


static void _init_f_touchPointStates_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QEventPoint::State> > ();
}

static void _call_f_touchPointStates_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QEventPoint::State> > ((QFlags<QEventPoint::State>)((QTouchEvent *)cls)->touchPointStates ());
}


// const QList<QEventPoint> &QTouchEvent::touchPoints()


static void _init_f_touchPoints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QList<QEventPoint> & > ();
}

static void _call_f_touchPoints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QList<QEventPoint> & > ((const QList<QEventPoint> &)((QTouchEvent *)cls)->touchPoints ());
}


namespace gsi
{

static gsi::Methods methods_QTouchEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("isBeginEvent?", "@brief Method bool QTouchEvent::isBeginEvent()\nThis is a reimplementation of QPointerEvent::isBeginEvent", true, &_init_f_isBeginEvent_c0, &_call_f_isBeginEvent_c0);
  methods += new qt_gsi::GenericMethod ("isEndEvent?", "@brief Method bool QTouchEvent::isEndEvent()\nThis is a reimplementation of QPointerEvent::isEndEvent", true, &_init_f_isEndEvent_c0, &_call_f_isEndEvent_c0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent?", "@brief Method bool QTouchEvent::isUpdateEvent()\nThis is a reimplementation of QPointerEvent::isUpdateEvent", true, &_init_f_isUpdateEvent_c0, &_call_f_isUpdateEvent_c0);
  methods += new qt_gsi::GenericMethod (":target", "@brief Method QObject *QTouchEvent::target()\n", true, &_init_f_target_c0, &_call_f_target_c0);
  methods += new qt_gsi::GenericMethod (":touchPointStates", "@brief Method QFlags<QEventPoint::State> QTouchEvent::touchPointStates()\n", true, &_init_f_touchPointStates_c0, &_call_f_touchPointStates_c0);
  methods += new qt_gsi::GenericMethod (":touchPoints", "@brief Method const QList<QEventPoint> &QTouchEvent::touchPoints()\n", true, &_init_f_touchPoints_c0, &_call_f_touchPoints_c0);
  return methods;
}

gsi::Class<QPointerEvent> &qtdecl_QPointerEvent ();

gsi::Class<QTouchEvent> decl_QTouchEvent (qtdecl_QPointerEvent (), "QtGui", "QTouchEvent_Native",
  methods_QTouchEvent (),
  "@hide\n@alias QTouchEvent");

GSI_QTGUI_PUBLIC gsi::Class<QTouchEvent> &qtdecl_QTouchEvent () { return decl_QTouchEvent; }

}


class QTouchEvent_Adaptor : public QTouchEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTouchEvent_Adaptor();

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType) : QTouchEvent(eventType)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, const QPointingDevice *device) : QTouchEvent(eventType, device)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers) : QTouchEvent(eventType, device, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &touchPoints) : QTouchEvent(eventType, device, modifiers, touchPoints)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<QEventPoint::State> touchPointStates, const QList<QEventPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<QEventPoint::State> touchPointStates) : QTouchEvent(eventType, device, modifiers, touchPointStates)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<QEventPoint::State> touchPointStates, const QList<QEventPoint> &touchPoints)
  QTouchEvent_Adaptor(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<QEventPoint::State> touchPointStates, const QList<QEventPoint> &touchPoints) : QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QTouchEvent::isBeginEvent()
  bool cbs_isBeginEvent_c0_0() const
  {
    return QTouchEvent::isBeginEvent();
  }

  virtual bool isBeginEvent() const
  {
    if (cb_isBeginEvent_c0_0.can_issue()) {
      return cb_isBeginEvent_c0_0.issue<QTouchEvent_Adaptor, bool>(&QTouchEvent_Adaptor::cbs_isBeginEvent_c0_0);
    } else {
      return QTouchEvent::isBeginEvent();
    }
  }

  //  [adaptor impl] bool QTouchEvent::isEndEvent()
  bool cbs_isEndEvent_c0_0() const
  {
    return QTouchEvent::isEndEvent();
  }

  virtual bool isEndEvent() const
  {
    if (cb_isEndEvent_c0_0.can_issue()) {
      return cb_isEndEvent_c0_0.issue<QTouchEvent_Adaptor, bool>(&QTouchEvent_Adaptor::cbs_isEndEvent_c0_0);
    } else {
      return QTouchEvent::isEndEvent();
    }
  }

  //  [adaptor impl] bool QTouchEvent::isUpdateEvent()
  bool cbs_isUpdateEvent_c0_0() const
  {
    return QTouchEvent::isUpdateEvent();
  }

  virtual bool isUpdateEvent() const
  {
    if (cb_isUpdateEvent_c0_0.can_issue()) {
      return cb_isUpdateEvent_c0_0.issue<QTouchEvent_Adaptor, bool>(&QTouchEvent_Adaptor::cbs_isUpdateEvent_c0_0);
    } else {
      return QTouchEvent::isUpdateEvent();
    }
  }

  //  [adaptor impl] void QTouchEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QTouchEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QTouchEvent_Adaptor, bool>(&QTouchEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QTouchEvent::setAccepted(accepted);
    }
  }

  //  [adaptor impl] void QTouchEvent::setTimestamp(quint64 timestamp)
  void cbs_setTimestamp_1103_0(quint64 timestamp)
  {
    QTouchEvent::setTimestamp(timestamp);
  }

  virtual void setTimestamp(quint64 timestamp)
  {
    if (cb_setTimestamp_1103_0.can_issue()) {
      cb_setTimestamp_1103_0.issue<QTouchEvent_Adaptor, quint64>(&QTouchEvent_Adaptor::cbs_setTimestamp_1103_0, timestamp);
    } else {
      QTouchEvent::setTimestamp(timestamp);
    }
  }

  gsi::Callback cb_isBeginEvent_c0_0;
  gsi::Callback cb_isEndEvent_c0_0;
  gsi::Callback cb_isUpdateEvent_c0_0;
  gsi::Callback cb_setAccepted_864_0;
  gsi::Callback cb_setTimestamp_1103_0;
};

QTouchEvent_Adaptor::~QTouchEvent_Adaptor() { }

//  Constructor QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &touchPoints) (adaptor class)

static void _init_ctor_QTouchEvent_Adaptor_10193 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("eventType");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("device", true, "nullptr");
  decl->add_arg<const QPointingDevice * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("modifiers", true, "Qt::NoModifier");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("touchPoints", true, "{}");
  decl->add_arg<const QList<QEventPoint> & > (argspec_3);
  decl->set_return_new<QTouchEvent_Adaptor> ();
}

static void _call_ctor_QTouchEvent_Adaptor_10193 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  const QPointingDevice *arg2 = args ? gsi::arg_reader<const QPointingDevice * >() (args, heap) : gsi::arg_maker<const QPointingDevice * >() (nullptr, heap);
  QFlags<Qt::KeyboardModifier> arg3 = args ? gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap) : gsi::arg_maker<QFlags<Qt::KeyboardModifier> >() (Qt::NoModifier, heap);
  const QList<QEventPoint> &arg4 = args ? gsi::arg_reader<const QList<QEventPoint> & >() (args, heap) : gsi::arg_maker<const QList<QEventPoint> & >() ({}, heap);
  ret.write<QTouchEvent_Adaptor *> (new QTouchEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, arg4));
}


//  Constructor QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<QEventPoint::State> touchPointStates, const QList<QEventPoint> &touchPoints) (adaptor class)

static void _init_ctor_QTouchEvent_Adaptor_12963 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("eventType");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("device");
  decl->add_arg<const QPointingDevice * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("touchPointStates");
  decl->add_arg<QFlags<QEventPoint::State> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("touchPoints", true, "{}");
  decl->add_arg<const QList<QEventPoint> & > (argspec_4);
  decl->set_return_new<QTouchEvent_Adaptor> ();
}

static void _call_ctor_QTouchEvent_Adaptor_12963 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  const QPointingDevice *arg2 = gsi::arg_reader<const QPointingDevice * >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg3 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  QFlags<QEventPoint::State> arg4 = gsi::arg_reader<QFlags<QEventPoint::State> >() (args, heap);
  const QList<QEventPoint> &arg5 = args ? gsi::arg_reader<const QList<QEventPoint> & >() (args, heap) : gsi::arg_maker<const QList<QEventPoint> & >() ({}, heap);
  ret.write<QTouchEvent_Adaptor *> (new QTouchEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, arg4, arg5));
}


// bool QTouchEvent::isBeginEvent()

static void _init_cbs_isBeginEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isBeginEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTouchEvent_Adaptor *)cls)->cbs_isBeginEvent_c0_0 ());
}

static void _set_callback_cbs_isBeginEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTouchEvent_Adaptor *)cls)->cb_isBeginEvent_c0_0 = cb;
}


// bool QTouchEvent::isEndEvent()

static void _init_cbs_isEndEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEndEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTouchEvent_Adaptor *)cls)->cbs_isEndEvent_c0_0 ());
}

static void _set_callback_cbs_isEndEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTouchEvent_Adaptor *)cls)->cb_isEndEvent_c0_0 = cb;
}


// bool QTouchEvent::isUpdateEvent()

static void _init_cbs_isUpdateEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isUpdateEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTouchEvent_Adaptor *)cls)->cbs_isUpdateEvent_c0_0 ());
}

static void _set_callback_cbs_isUpdateEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTouchEvent_Adaptor *)cls)->cb_isUpdateEvent_c0_0 = cb;
}


// void QTouchEvent::setAccepted(bool accepted)

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
  ((QTouchEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QTouchEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


// void QTouchEvent::setTimestamp(quint64 timestamp)

static void _init_cbs_setTimestamp_1103_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setTimestamp_1103_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = args.read<quint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchEvent_Adaptor *)cls)->cbs_setTimestamp_1103_0 (arg1);
}

static void _set_callback_cbs_setTimestamp_1103_0 (void *cls, const gsi::Callback &cb)
{
  ((QTouchEvent_Adaptor *)cls)->cb_setTimestamp_1103_0 = cb;
}


namespace gsi
{

gsi::Class<QTouchEvent> &qtdecl_QTouchEvent ();

static gsi::Methods methods_QTouchEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &touchPoints)\nThis method creates an object of class QTouchEvent.", &_init_ctor_QTouchEvent_Adaptor_10193, &_call_ctor_QTouchEvent_Adaptor_10193);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTouchEvent::QTouchEvent(QEvent::Type eventType, const QPointingDevice *device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<QEventPoint::State> touchPointStates, const QList<QEventPoint> &touchPoints)\nThis method creates an object of class QTouchEvent.", &_init_ctor_QTouchEvent_Adaptor_12963, &_call_ctor_QTouchEvent_Adaptor_12963);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@brief Virtual method bool QTouchEvent::isBeginEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@hide", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0, &_set_callback_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@brief Virtual method bool QTouchEvent::isEndEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@hide", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0, &_set_callback_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@brief Virtual method bool QTouchEvent::isUpdateEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@hide", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0, &_set_callback_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QTouchEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Virtual method void QTouchEvent::setTimestamp(quint64 timestamp)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@hide", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0, &_set_callback_cbs_setTimestamp_1103_0);
  return methods;
}

gsi::Class<QTouchEvent_Adaptor> decl_QTouchEvent_Adaptor (qtdecl_QTouchEvent (), "QtGui", "QTouchEvent",
  methods_QTouchEvent_Adaptor (),
  "@qt\n@brief Binding of QTouchEvent");

}


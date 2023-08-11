
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
*  @file gsiDeclQVideoProbe.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoProbe>
#include <QChildEvent>
#include <QEvent>
#include <QMediaObject>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QVideoFrame>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVideoProbe

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QVideoProbe::staticMetaObject);
}


// bool QVideoProbe::isActive()


static void _init_f_isActive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isActive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVideoProbe *)cls)->isActive ());
}


// bool QVideoProbe::setSource(QMediaObject *source)


static void _init_f_setSource_1782 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("source");
  decl->add_arg<QMediaObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setSource_1782 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaObject *arg1 = gsi::arg_reader<QMediaObject * >() (args, heap);
  ret.write<bool > ((bool)((QVideoProbe *)cls)->setSource (arg1));
}


// bool QVideoProbe::setSource(QMediaRecorder *source)


static void _init_f_setSource_2005 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("source");
  decl->add_arg<QMediaRecorder * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setSource_2005 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaRecorder *arg1 = gsi::arg_reader<QMediaRecorder * >() (args, heap);
  ret.write<bool > ((bool)((QVideoProbe *)cls)->setSource (arg1));
}


// static QString QVideoProbe::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QVideoProbe::tr (arg1, arg2, arg3));
}


// static QString QVideoProbe::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QVideoProbe::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QVideoProbe () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("isActive?", "@brief Method bool QVideoProbe::isActive()\n", true, &_init_f_isActive_c0, &_call_f_isActive_c0);
  methods += new qt_gsi::GenericMethod ("setSource", "@brief Method bool QVideoProbe::setSource(QMediaObject *source)\n", false, &_init_f_setSource_1782, &_call_f_setSource_1782);
  methods += new qt_gsi::GenericMethod ("setSource", "@brief Method bool QVideoProbe::setSource(QMediaRecorder *source)\n", false, &_init_f_setSource_2005, &_call_f_setSource_2005);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QVideoProbe::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("flush()", "flush", "@brief Signal declaration for QVideoProbe::flush()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QVideoProbe::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QVideoFrame & > ("videoFrameProbed(const QVideoFrame &)", "videoFrameProbed", gsi::arg("frame"), "@brief Signal declaration for QVideoProbe::videoFrameProbed(const QVideoFrame &frame)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QVideoProbe::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QVideoProbe::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QVideoProbe> decl_QVideoProbe (qtdecl_QObject (), "QtMultimedia", "QVideoProbe_Native",
  methods_QVideoProbe (),
  "@hide\n@alias QVideoProbe");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QVideoProbe> &qtdecl_QVideoProbe () { return decl_QVideoProbe; }

}


class QVideoProbe_Adaptor : public QVideoProbe, public qt_gsi::QtObjectBase
{
public:

  virtual ~QVideoProbe_Adaptor();

  //  [adaptor ctor] QVideoProbe::QVideoProbe(QObject *parent)
  QVideoProbe_Adaptor() : QVideoProbe()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QVideoProbe::QVideoProbe(QObject *parent)
  QVideoProbe_Adaptor(QObject *parent) : QVideoProbe(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QVideoProbe::isSignalConnected(const QMetaMethod &signal)
  bool fp_QVideoProbe_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QVideoProbe::isSignalConnected(signal);
  }

  //  [expose] int QVideoProbe::receivers(const char *signal)
  int fp_QVideoProbe_receivers_c1731 (const char *signal) const {
    return QVideoProbe::receivers(signal);
  }

  //  [expose] QObject *QVideoProbe::sender()
  QObject * fp_QVideoProbe_sender_c0 () const {
    return QVideoProbe::sender();
  }

  //  [expose] int QVideoProbe::senderSignalIndex()
  int fp_QVideoProbe_senderSignalIndex_c0 () const {
    return QVideoProbe::senderSignalIndex();
  }

  //  [emitter impl] void QVideoProbe::destroyed(QObject *)
  void emitter_QVideoProbe_destroyed_1302(QObject *arg1)
  {
    emit QVideoProbe::destroyed(arg1);
  }

  //  [adaptor impl] bool QVideoProbe::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QVideoProbe::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QVideoProbe_Adaptor, bool, QEvent *>(&QVideoProbe_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QVideoProbe::event(_event);
    }
  }

  //  [adaptor impl] bool QVideoProbe::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QVideoProbe::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QVideoProbe_Adaptor, bool, QObject *, QEvent *>(&QVideoProbe_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QVideoProbe::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QVideoProbe::flush()
  void emitter_QVideoProbe_flush_0()
  {
    emit QVideoProbe::flush();
  }

  //  [emitter impl] void QVideoProbe::objectNameChanged(const QString &objectName)
  void emitter_QVideoProbe_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QVideoProbe::objectNameChanged(const QString &objectName)'");
  }

  //  [emitter impl] void QVideoProbe::videoFrameProbed(const QVideoFrame &frame)
  void emitter_QVideoProbe_videoFrameProbed_2388(const QVideoFrame &frame)
  {
    emit QVideoProbe::videoFrameProbed(frame);
  }

  //  [adaptor impl] void QVideoProbe::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QVideoProbe::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QVideoProbe_Adaptor, QChildEvent *>(&QVideoProbe_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QVideoProbe::childEvent(event);
    }
  }

  //  [adaptor impl] void QVideoProbe::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QVideoProbe::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QVideoProbe_Adaptor, QEvent *>(&QVideoProbe_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QVideoProbe::customEvent(event);
    }
  }

  //  [adaptor impl] void QVideoProbe::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QVideoProbe::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QVideoProbe_Adaptor, const QMetaMethod &>(&QVideoProbe_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QVideoProbe::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QVideoProbe::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QVideoProbe::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QVideoProbe_Adaptor, QTimerEvent *>(&QVideoProbe_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QVideoProbe::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QVideoProbe_Adaptor::~QVideoProbe_Adaptor() { }

//  Constructor QVideoProbe::QVideoProbe(QObject *parent) (adaptor class)

static void _init_ctor_QVideoProbe_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QVideoProbe_Adaptor> ();
}

static void _call_ctor_QVideoProbe_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QVideoProbe_Adaptor *> (new QVideoProbe_Adaptor (arg1));
}


// void QVideoProbe::childEvent(QChildEvent *event)

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
  ((QVideoProbe_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoProbe_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QVideoProbe::customEvent(QEvent *event)

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
  ((QVideoProbe_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoProbe_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QVideoProbe::destroyed(QObject *)

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
  ((QVideoProbe_Adaptor *)cls)->emitter_QVideoProbe_destroyed_1302 (arg1);
}


// void QVideoProbe::disconnectNotify(const QMetaMethod &signal)

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
  ((QVideoProbe_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoProbe_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QVideoProbe::event(QEvent *event)

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
  ret.write<bool > ((bool)((QVideoProbe_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoProbe_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QVideoProbe::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QVideoProbe_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoProbe_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QVideoProbe::flush()

static void _init_emitter_flush_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_flush_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QVideoProbe_Adaptor *)cls)->emitter_QVideoProbe_flush_0 ();
}


// exposed bool QVideoProbe::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QVideoProbe_Adaptor *)cls)->fp_QVideoProbe_isSignalConnected_c2394 (arg1));
}


// emitter void QVideoProbe::objectNameChanged(const QString &objectName)

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
  ((QVideoProbe_Adaptor *)cls)->emitter_QVideoProbe_objectNameChanged_4567 (arg1);
}


// exposed int QVideoProbe::receivers(const char *signal)

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
  ret.write<int > ((int)((QVideoProbe_Adaptor *)cls)->fp_QVideoProbe_receivers_c1731 (arg1));
}


// exposed QObject *QVideoProbe::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QVideoProbe_Adaptor *)cls)->fp_QVideoProbe_sender_c0 ());
}


// exposed int QVideoProbe::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoProbe_Adaptor *)cls)->fp_QVideoProbe_senderSignalIndex_c0 ());
}


// void QVideoProbe::timerEvent(QTimerEvent *event)

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
  ((QVideoProbe_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoProbe_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// emitter void QVideoProbe::videoFrameProbed(const QVideoFrame &frame)

static void _init_emitter_videoFrameProbed_2388 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frame");
  decl->add_arg<const QVideoFrame & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_videoFrameProbed_2388 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrame &arg1 = gsi::arg_reader<const QVideoFrame & >() (args, heap);
  ((QVideoProbe_Adaptor *)cls)->emitter_QVideoProbe_videoFrameProbed_2388 (arg1);
}


namespace gsi
{

gsi::Class<QVideoProbe> &qtdecl_QVideoProbe ();

static gsi::Methods methods_QVideoProbe_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoProbe::QVideoProbe(QObject *parent)\nThis method creates an object of class QVideoProbe.", &_init_ctor_QVideoProbe_Adaptor_1302, &_call_ctor_QVideoProbe_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QVideoProbe::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QVideoProbe::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QVideoProbe::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QVideoProbe::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QVideoProbe::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QVideoProbe::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_flush", "@brief Emitter for signal void QVideoProbe::flush()\nCall this method to emit this signal.", false, &_init_emitter_flush_0, &_call_emitter_flush_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QVideoProbe::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QVideoProbe::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QVideoProbe::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QVideoProbe::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QVideoProbe::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QVideoProbe::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("emit_videoFrameProbed", "@brief Emitter for signal void QVideoProbe::videoFrameProbed(const QVideoFrame &frame)\nCall this method to emit this signal.", false, &_init_emitter_videoFrameProbed_2388, &_call_emitter_videoFrameProbed_2388);
  return methods;
}

gsi::Class<QVideoProbe_Adaptor> decl_QVideoProbe_Adaptor (qtdecl_QVideoProbe (), "QtMultimedia", "QVideoProbe",
  methods_QVideoProbe_Adaptor (),
  "@qt\n@brief Binding of QVideoProbe");

}


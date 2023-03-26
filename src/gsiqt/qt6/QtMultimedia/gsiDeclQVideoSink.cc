
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
*  @file gsiDeclQVideoSink.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoSink>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QSize>
#include <QThread>
#include <QTimerEvent>
#include <QVideoFrame>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVideoSink

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QVideoSink::staticMetaObject);
}


// void QVideoSink::setSubtitleText(const QString &subtitle)


static void _init_f_setSubtitleText_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subtitle");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSubtitleText_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSink *)cls)->setSubtitleText (arg1);
}


// void QVideoSink::setVideoFrame(const QVideoFrame &frame)


static void _init_f_setVideoFrame_2388 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frame");
  decl->add_arg<const QVideoFrame & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVideoFrame_2388 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrame &arg1 = gsi::arg_reader<const QVideoFrame & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSink *)cls)->setVideoFrame (arg1);
}


// QString QVideoSink::subtitleText()


static void _init_f_subtitleText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_subtitleText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QVideoSink *)cls)->subtitleText ());
}


// QVideoFrame QVideoSink::videoFrame()


static void _init_f_videoFrame_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVideoFrame > ();
}

static void _call_f_videoFrame_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoFrame > ((QVideoFrame)((QVideoSink *)cls)->videoFrame ());
}


// QSize QVideoSink::videoSize()


static void _init_f_videoSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_videoSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QVideoSink *)cls)->videoSize ());
}


// static QString QVideoSink::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QVideoSink::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QVideoSink () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("setSubtitleText|subtitleText=", "@brief Method void QVideoSink::setSubtitleText(const QString &subtitle)\n", false, &_init_f_setSubtitleText_2025, &_call_f_setSubtitleText_2025);
  methods += new qt_gsi::GenericMethod ("setVideoFrame|videoFrame=", "@brief Method void QVideoSink::setVideoFrame(const QVideoFrame &frame)\n", false, &_init_f_setVideoFrame_2388, &_call_f_setVideoFrame_2388);
  methods += new qt_gsi::GenericMethod (":subtitleText", "@brief Method QString QVideoSink::subtitleText()\n", true, &_init_f_subtitleText_c0, &_call_f_subtitleText_c0);
  methods += new qt_gsi::GenericMethod (":videoFrame", "@brief Method QVideoFrame QVideoSink::videoFrame()\n", true, &_init_f_videoFrame_c0, &_call_f_videoFrame_c0);
  methods += new qt_gsi::GenericMethod ("videoSize", "@brief Method QSize QVideoSink::videoSize()\n", true, &_init_f_videoSize_c0, &_call_f_videoSize_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QVideoSink::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QVideoSink::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("subtitleTextChanged(const QString &)", "subtitleTextChanged", gsi::arg("subtitleText"), "@brief Signal declaration for QVideoSink::subtitleTextChanged(const QString &subtitleText)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QVideoFrame & > ("videoFrameChanged(const QVideoFrame &)", "videoFrameChanged", gsi::arg("frame"), "@brief Signal declaration for QVideoSink::videoFrameChanged(const QVideoFrame &frame)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("videoSizeChanged()", "videoSizeChanged", "@brief Signal declaration for QVideoSink::videoSizeChanged()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QVideoSink::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QVideoSink> decl_QVideoSink (qtdecl_QObject (), "QtMultimedia", "QVideoSink_Native",
  methods_QVideoSink (),
  "@hide\n@alias QVideoSink");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QVideoSink> &qtdecl_QVideoSink () { return decl_QVideoSink; }

}


class QVideoSink_Adaptor : public QVideoSink, public qt_gsi::QtObjectBase
{
public:

  virtual ~QVideoSink_Adaptor();

  //  [adaptor ctor] QVideoSink::QVideoSink(QObject *parent)
  QVideoSink_Adaptor() : QVideoSink()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QVideoSink::QVideoSink(QObject *parent)
  QVideoSink_Adaptor(QObject *parent) : QVideoSink(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QVideoSink::isSignalConnected(const QMetaMethod &signal)
  bool fp_QVideoSink_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QVideoSink::isSignalConnected(signal);
  }

  //  [expose] int QVideoSink::receivers(const char *signal)
  int fp_QVideoSink_receivers_c1731 (const char *signal) const {
    return QVideoSink::receivers(signal);
  }

  //  [expose] QObject *QVideoSink::sender()
  QObject * fp_QVideoSink_sender_c0 () const {
    return QVideoSink::sender();
  }

  //  [expose] int QVideoSink::senderSignalIndex()
  int fp_QVideoSink_senderSignalIndex_c0 () const {
    return QVideoSink::senderSignalIndex();
  }

  //  [emitter impl] void QVideoSink::destroyed(QObject *)
  void emitter_QVideoSink_destroyed_1302(QObject *arg1)
  {
    emit QVideoSink::destroyed(arg1);
  }

  //  [adaptor impl] bool QVideoSink::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QVideoSink::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QVideoSink_Adaptor, bool, QEvent *>(&QVideoSink_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QVideoSink::event(_event);
    }
  }

  //  [adaptor impl] bool QVideoSink::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QVideoSink::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QVideoSink_Adaptor, bool, QObject *, QEvent *>(&QVideoSink_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QVideoSink::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QVideoSink::objectNameChanged(const QString &objectName)
  void emitter_QVideoSink_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QVideoSink::objectNameChanged(const QString &objectName)'");
  }

  //  [emitter impl] void QVideoSink::subtitleTextChanged(const QString &subtitleText)
  void emitter_QVideoSink_subtitleTextChanged_c2025(const QString &subtitleText)
  {
    emit QVideoSink::subtitleTextChanged(subtitleText);
  }

  //  [emitter impl] void QVideoSink::videoFrameChanged(const QVideoFrame &frame)
  void emitter_QVideoSink_videoFrameChanged_c2388(const QVideoFrame &frame)
  {
    emit QVideoSink::videoFrameChanged(frame);
  }

  //  [emitter impl] void QVideoSink::videoSizeChanged()
  void emitter_QVideoSink_videoSizeChanged_0()
  {
    emit QVideoSink::videoSizeChanged();
  }

  //  [adaptor impl] void QVideoSink::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QVideoSink::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QVideoSink_Adaptor, QChildEvent *>(&QVideoSink_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QVideoSink::childEvent(event);
    }
  }

  //  [adaptor impl] void QVideoSink::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QVideoSink::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QVideoSink_Adaptor, QEvent *>(&QVideoSink_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QVideoSink::customEvent(event);
    }
  }

  //  [adaptor impl] void QVideoSink::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QVideoSink::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QVideoSink_Adaptor, const QMetaMethod &>(&QVideoSink_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QVideoSink::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QVideoSink::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QVideoSink::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QVideoSink_Adaptor, QTimerEvent *>(&QVideoSink_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QVideoSink::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QVideoSink_Adaptor::~QVideoSink_Adaptor() { }

//  Constructor QVideoSink::QVideoSink(QObject *parent) (adaptor class)

static void _init_ctor_QVideoSink_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QVideoSink_Adaptor> ();
}

static void _call_ctor_QVideoSink_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QVideoSink_Adaptor *> (new QVideoSink_Adaptor (arg1));
}


// void QVideoSink::childEvent(QChildEvent *event)

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
  ((QVideoSink_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoSink_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QVideoSink::customEvent(QEvent *event)

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
  ((QVideoSink_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoSink_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QVideoSink::destroyed(QObject *)

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
  ((QVideoSink_Adaptor *)cls)->emitter_QVideoSink_destroyed_1302 (arg1);
}


// void QVideoSink::disconnectNotify(const QMetaMethod &signal)

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
  ((QVideoSink_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoSink_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QVideoSink::event(QEvent *event)

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
  ret.write<bool > ((bool)((QVideoSink_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoSink_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QVideoSink::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QVideoSink_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoSink_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QVideoSink::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QVideoSink_Adaptor *)cls)->fp_QVideoSink_isSignalConnected_c2394 (arg1));
}


// emitter void QVideoSink::objectNameChanged(const QString &objectName)

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
  ((QVideoSink_Adaptor *)cls)->emitter_QVideoSink_objectNameChanged_4567 (arg1);
}


// exposed int QVideoSink::receivers(const char *signal)

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
  ret.write<int > ((int)((QVideoSink_Adaptor *)cls)->fp_QVideoSink_receivers_c1731 (arg1));
}


// exposed QObject *QVideoSink::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QVideoSink_Adaptor *)cls)->fp_QVideoSink_sender_c0 ());
}


// exposed int QVideoSink::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoSink_Adaptor *)cls)->fp_QVideoSink_senderSignalIndex_c0 ());
}


// emitter void QVideoSink::subtitleTextChanged(const QString &subtitleText)

static void _init_emitter_subtitleTextChanged_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subtitleText");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_subtitleTextChanged_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QVideoSink_Adaptor *)cls)->emitter_QVideoSink_subtitleTextChanged_c2025 (arg1);
}


// void QVideoSink::timerEvent(QTimerEvent *event)

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
  ((QVideoSink_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoSink_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// emitter void QVideoSink::videoFrameChanged(const QVideoFrame &frame)

static void _init_emitter_videoFrameChanged_c2388 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frame");
  decl->add_arg<const QVideoFrame & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_videoFrameChanged_c2388 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrame &arg1 = gsi::arg_reader<const QVideoFrame & >() (args, heap);
  ((QVideoSink_Adaptor *)cls)->emitter_QVideoSink_videoFrameChanged_c2388 (arg1);
}


// emitter void QVideoSink::videoSizeChanged()

static void _init_emitter_videoSizeChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_videoSizeChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QVideoSink_Adaptor *)cls)->emitter_QVideoSink_videoSizeChanged_0 ();
}


namespace gsi
{

gsi::Class<QVideoSink> &qtdecl_QVideoSink ();

static gsi::Methods methods_QVideoSink_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoSink::QVideoSink(QObject *parent)\nThis method creates an object of class QVideoSink.", &_init_ctor_QVideoSink_Adaptor_1302, &_call_ctor_QVideoSink_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QVideoSink::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QVideoSink::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QVideoSink::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QVideoSink::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QVideoSink::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QVideoSink::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QVideoSink::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QVideoSink::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QVideoSink::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QVideoSink::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QVideoSink::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("emit_subtitleTextChanged", "@brief Emitter for signal void QVideoSink::subtitleTextChanged(const QString &subtitleText)\nCall this method to emit this signal.", true, &_init_emitter_subtitleTextChanged_c2025, &_call_emitter_subtitleTextChanged_c2025);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QVideoSink::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("emit_videoFrameChanged", "@brief Emitter for signal void QVideoSink::videoFrameChanged(const QVideoFrame &frame)\nCall this method to emit this signal.", true, &_init_emitter_videoFrameChanged_c2388, &_call_emitter_videoFrameChanged_c2388);
  methods += new qt_gsi::GenericMethod ("emit_videoSizeChanged", "@brief Emitter for signal void QVideoSink::videoSizeChanged()\nCall this method to emit this signal.", false, &_init_emitter_videoSizeChanged_0, &_call_emitter_videoSizeChanged_0);
  return methods;
}

gsi::Class<QVideoSink_Adaptor> decl_QVideoSink_Adaptor (qtdecl_QVideoSink (), "QtMultimedia", "QVideoSink",
  methods_QVideoSink_Adaptor (),
  "@qt\n@brief Binding of QVideoSink");

}


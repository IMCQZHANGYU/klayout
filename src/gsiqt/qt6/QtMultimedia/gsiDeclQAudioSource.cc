
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
*  @file gsiDeclQAudioSource.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioSource>
#include <QAudioDevice>
#include <QAudioFormat>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioSource

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioSource::staticMetaObject);
}


// qsizetype QAudioSource::bufferSize()


static void _init_f_bufferSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_bufferSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QAudioSource *)cls)->bufferSize ());
}


// qsizetype QAudioSource::bytesAvailable()


static void _init_f_bytesAvailable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_bytesAvailable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QAudioSource *)cls)->bytesAvailable ());
}


// qint64 QAudioSource::elapsedUSecs()


static void _init_f_elapsedUSecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_elapsedUSecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QAudioSource *)cls)->elapsedUSecs ());
}


// QAudio::Error QAudioSource::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudio::Error>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudio::Error>::target_type > ((qt_gsi::Converter<QAudio::Error>::target_type)qt_gsi::CppToQtAdaptor<QAudio::Error>(((QAudioSource *)cls)->error ()));
}


// QAudioFormat QAudioSource::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioFormat > ((QAudioFormat)((QAudioSource *)cls)->format ());
}


// bool QAudioSource::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioSource *)cls)->isNull ());
}


// qint64 QAudioSource::processedUSecs()


static void _init_f_processedUSecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_processedUSecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QAudioSource *)cls)->processedUSecs ());
}


// void QAudioSource::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSource *)cls)->reset ();
}


// void QAudioSource::resume()


static void _init_f_resume_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_resume_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSource *)cls)->resume ();
}


// void QAudioSource::setBufferSize(qsizetype bytes)


static void _init_f_setBufferSize_1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bytes");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBufferSize_1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSource *)cls)->setBufferSize (arg1);
}


// void QAudioSource::setVolume(double volume)


static void _init_f_setVolume_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("volume");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVolume_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSource *)cls)->setVolume (arg1);
}


// void QAudioSource::start(QIODevice *device)


static void _init_f_start_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_start_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSource *)cls)->start (arg1);
}


// QIODevice *QAudioSource::start()


static void _init_f_start_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_start_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QAudioSource *)cls)->start ());
}


// QAudio::State QAudioSource::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudio::State>::target_type > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudio::State>::target_type > ((qt_gsi::Converter<QAudio::State>::target_type)qt_gsi::CppToQtAdaptor<QAudio::State>(((QAudioSource *)cls)->state ()));
}


// void QAudioSource::stateChanged(QAudio::State state)


static void _init_f_stateChanged_1644 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<const qt_gsi::Converter<QAudio::State>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_stateChanged_1644 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::State>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudio::State>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSource *)cls)->stateChanged (qt_gsi::QtToCppAdaptor<QAudio::State>(arg1).cref());
}


// void QAudioSource::stop()


static void _init_f_stop_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_stop_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSource *)cls)->stop ();
}


// void QAudioSource::suspend()


static void _init_f_suspend_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_suspend_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioSource *)cls)->suspend ();
}


// double QAudioSource::volume()


static void _init_f_volume_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_volume_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QAudioSource *)cls)->volume ());
}


// static QString QAudioSource::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAudioSource::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioSource () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("bufferSize", "@brief Method qsizetype QAudioSource::bufferSize()\n", true, &_init_f_bufferSize_c0, &_call_f_bufferSize_c0);
  methods += new qt_gsi::GenericMethod ("bytesAvailable", "@brief Method qsizetype QAudioSource::bytesAvailable()\n", true, &_init_f_bytesAvailable_c0, &_call_f_bytesAvailable_c0);
  methods += new qt_gsi::GenericMethod ("elapsedUSecs", "@brief Method qint64 QAudioSource::elapsedUSecs()\n", true, &_init_f_elapsedUSecs_c0, &_call_f_elapsedUSecs_c0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QAudio::Error QAudioSource::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("format", "@brief Method QAudioFormat QAudioSource::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QAudioSource::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("processedUSecs", "@brief Method qint64 QAudioSource::processedUSecs()\n", true, &_init_f_processedUSecs_c0, &_call_f_processedUSecs_c0);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QAudioSource::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  methods += new qt_gsi::GenericMethod ("resume", "@brief Method void QAudioSource::resume()\n", false, &_init_f_resume_0, &_call_f_resume_0);
  methods += new qt_gsi::GenericMethod ("setBufferSize", "@brief Method void QAudioSource::setBufferSize(qsizetype bytes)\n", false, &_init_f_setBufferSize_1442, &_call_f_setBufferSize_1442);
  methods += new qt_gsi::GenericMethod ("setVolume", "@brief Method void QAudioSource::setVolume(double volume)\n", false, &_init_f_setVolume_1071, &_call_f_setVolume_1071);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QAudioSource::start(QIODevice *device)\n", false, &_init_f_start_1447, &_call_f_start_1447);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method QIODevice *QAudioSource::start()\n", false, &_init_f_start_0, &_call_f_start_0);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QAudio::State QAudioSource::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("stateChanged", "@brief Method void QAudioSource::stateChanged(QAudio::State state)\n", false, &_init_f_stateChanged_1644, &_call_f_stateChanged_1644);
  methods += new qt_gsi::GenericMethod ("stop", "@brief Method void QAudioSource::stop()\n", false, &_init_f_stop_0, &_call_f_stop_0);
  methods += new qt_gsi::GenericMethod ("suspend", "@brief Method void QAudioSource::suspend()\n", false, &_init_f_suspend_0, &_call_f_suspend_0);
  methods += new qt_gsi::GenericMethod ("volume", "@brief Method double QAudioSource::volume()\n", true, &_init_f_volume_c0, &_call_f_volume_c0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioSource::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAudioSource> decl_QAudioSource (qtdecl_QObject (), "QtMultimedia", "QAudioSource_Native",
  methods_QAudioSource (),
  "@hide\n@alias QAudioSource");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioSource> &qtdecl_QAudioSource () { return decl_QAudioSource; }

}


class QAudioSource_Adaptor : public QAudioSource, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioSource_Adaptor();

  //  [adaptor ctor] QAudioSource::QAudioSource(const QAudioFormat &format, QObject *parent)
  QAudioSource_Adaptor() : QAudioSource()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSource::QAudioSource(const QAudioFormat &format, QObject *parent)
  QAudioSource_Adaptor(const QAudioFormat &format) : QAudioSource(format)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSource::QAudioSource(const QAudioFormat &format, QObject *parent)
  QAudioSource_Adaptor(const QAudioFormat &format, QObject *parent) : QAudioSource(format, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSource::QAudioSource(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioSource_Adaptor(const QAudioDevice &audioDeviceInfo) : QAudioSource(audioDeviceInfo)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSource::QAudioSource(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioSource_Adaptor(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format) : QAudioSource(audioDeviceInfo, format)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioSource::QAudioSource(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioSource_Adaptor(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent) : QAudioSource(audioDeviceInfo, format, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAudioSource::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioSource_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioSource::isSignalConnected(signal);
  }

  //  [expose] int QAudioSource::receivers(const char *signal)
  int fp_QAudioSource_receivers_c1731 (const char *signal) const {
    return QAudioSource::receivers(signal);
  }

  //  [expose] QObject *QAudioSource::sender()
  QObject * fp_QAudioSource_sender_c0 () const {
    return QAudioSource::sender();
  }

  //  [expose] int QAudioSource::senderSignalIndex()
  int fp_QAudioSource_senderSignalIndex_c0 () const {
    return QAudioSource::senderSignalIndex();
  }

  //  [adaptor impl] bool QAudioSource::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QAudioSource::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioSource_Adaptor, bool, QEvent *>(&QAudioSource_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QAudioSource::event(_event);
    }
  }

  //  [adaptor impl] bool QAudioSource::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QAudioSource::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioSource_Adaptor, bool, QObject *, QEvent *>(&QAudioSource_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QAudioSource::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] void QAudioSource::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QAudioSource::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioSource_Adaptor, QChildEvent *>(&QAudioSource_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QAudioSource::childEvent(event);
    }
  }

  //  [adaptor impl] void QAudioSource::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QAudioSource::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioSource_Adaptor, QEvent *>(&QAudioSource_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QAudioSource::customEvent(event);
    }
  }

  //  [adaptor impl] void QAudioSource::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioSource::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioSource_Adaptor, const QMetaMethod &>(&QAudioSource_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioSource::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioSource::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QAudioSource::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioSource_Adaptor, QTimerEvent *>(&QAudioSource_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QAudioSource::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioSource_Adaptor::~QAudioSource_Adaptor() { }

//  Constructor QAudioSource::QAudioSource(const QAudioFormat &format, QObject *parent) (adaptor class)

static void _init_ctor_QAudioSource_Adaptor_3703 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format", true, "QAudioFormat()");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QAudioSource_Adaptor> ();
}

static void _call_ctor_QAudioSource_Adaptor_3703 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = args ? gsi::arg_reader<const QAudioFormat & >() (args, heap) : gsi::arg_maker<const QAudioFormat & >() (QAudioFormat(), heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QAudioSource_Adaptor *> (new QAudioSource_Adaptor (arg1, arg2));
}


//  Constructor QAudioSource::QAudioSource(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent) (adaptor class)

static void _init_ctor_QAudioSource_Adaptor_6079 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("audioDeviceInfo");
  decl->add_arg<const QAudioDevice & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QAudioFormat()");
  decl->add_arg<const QAudioFormat & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_2);
  decl->set_return_new<QAudioSource_Adaptor> ();
}

static void _call_ctor_QAudioSource_Adaptor_6079 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDevice &arg1 = gsi::arg_reader<const QAudioDevice & >() (args, heap);
  const QAudioFormat &arg2 = args ? gsi::arg_reader<const QAudioFormat & >() (args, heap) : gsi::arg_maker<const QAudioFormat & >() (QAudioFormat(), heap);
  QObject *arg3 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QAudioSource_Adaptor *> (new QAudioSource_Adaptor (arg1, arg2, arg3));
}


// void QAudioSource::childEvent(QChildEvent *event)

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
  ((QAudioSource_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSource_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioSource::customEvent(QEvent *event)

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
  ((QAudioSource_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSource_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QAudioSource::disconnectNotify(const QMetaMethod &signal)

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
  ((QAudioSource_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSource_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioSource::event(QEvent *event)

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
  ret.write<bool > ((bool)((QAudioSource_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSource_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioSource::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QAudioSource_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSource_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAudioSource::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QAudioSource_Adaptor *)cls)->fp_QAudioSource_isSignalConnected_c2394 (arg1));
}


// exposed int QAudioSource::receivers(const char *signal)

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
  ret.write<int > ((int)((QAudioSource_Adaptor *)cls)->fp_QAudioSource_receivers_c1731 (arg1));
}


// exposed QObject *QAudioSource::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioSource_Adaptor *)cls)->fp_QAudioSource_sender_c0 ());
}


// exposed int QAudioSource::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioSource_Adaptor *)cls)->fp_QAudioSource_senderSignalIndex_c0 ());
}


// void QAudioSource::timerEvent(QTimerEvent *event)

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
  ((QAudioSource_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSource_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioSource> &qtdecl_QAudioSource ();

static gsi::Methods methods_QAudioSource_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioSource::QAudioSource(const QAudioFormat &format, QObject *parent)\nThis method creates an object of class QAudioSource.", &_init_ctor_QAudioSource_Adaptor_3703, &_call_ctor_QAudioSource_Adaptor_3703);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioSource::QAudioSource(const QAudioDevice &audioDeviceInfo, const QAudioFormat &format, QObject *parent)\nThis method creates an object of class QAudioSource.", &_init_ctor_QAudioSource_Adaptor_6079, &_call_ctor_QAudioSource_Adaptor_6079);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioSource::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioSource::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioSource::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioSource::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioSource::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioSource::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioSource::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioSource::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioSource::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioSource::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioSource_Adaptor> decl_QAudioSource_Adaptor (qtdecl_QAudioSource (), "QtMultimedia", "QAudioSource",
  methods_QAudioSource_Adaptor (),
  "@qt\n@brief Binding of QAudioSource");

}


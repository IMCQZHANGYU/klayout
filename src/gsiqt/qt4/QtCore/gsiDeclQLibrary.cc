
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
*  @file gsiDeclQLibrary.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QLibrary>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QLibrary

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QLibrary::staticMetaObject);
}


// QString QLibrary::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QLibrary *)cls)->errorString ());
}


// QString QLibrary::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QLibrary *)cls)->fileName ());
}


// bool QLibrary::isLoaded()


static void _init_f_isLoaded_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isLoaded_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLibrary *)cls)->isLoaded ());
}


// bool QLibrary::load()


static void _init_f_load_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_load_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLibrary *)cls)->load ());
}


// QFlags<QLibrary::LoadHint> QLibrary::loadHints()


static void _init_f_loadHints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QLibrary::LoadHint> > ();
}

static void _call_f_loadHints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QLibrary::LoadHint> > ((QFlags<QLibrary::LoadHint>)((QLibrary *)cls)->loadHints ());
}


// void *QLibrary::resolve(const char *symbol)


static void _init_f_resolve_1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("symbol");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void * > ();
}

static void _call_f_resolve_1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<void * > ((void *)((QLibrary *)cls)->resolve (arg1));
}


// void QLibrary::setFileName(const QString &fileName)


static void _init_f_setFileName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFileName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLibrary *)cls)->setFileName (arg1);
}


// void QLibrary::setFileNameAndVersion(const QString &fileName, int verNum)


static void _init_f_setFileNameAndVersion_2684 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("verNum");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setFileNameAndVersion_2684 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLibrary *)cls)->setFileNameAndVersion (arg1, arg2);
}


// void QLibrary::setFileNameAndVersion(const QString &fileName, const QString &version)


static void _init_f_setFileNameAndVersion_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("version");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setFileNameAndVersion_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLibrary *)cls)->setFileNameAndVersion (arg1, arg2);
}


// void QLibrary::setLoadHints(QFlags<QLibrary::LoadHint> hints)


static void _init_f_setLoadHints_2841 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("hints");
  decl->add_arg<QFlags<QLibrary::LoadHint> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLoadHints_2841 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QLibrary::LoadHint> arg1 = gsi::arg_reader<QFlags<QLibrary::LoadHint> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLibrary *)cls)->setLoadHints (arg1);
}


// bool QLibrary::unload()


static void _init_f_unload_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_unload_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLibrary *)cls)->unload ());
}


// static bool QLibrary::isLibrary(const QString &fileName)


static void _init_f_isLibrary_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isLibrary_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QLibrary::isLibrary (arg1));
}


// static void *QLibrary::resolve(const QString &fileName, const char *symbol)


static void _init_f_resolve_3648 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("symbol");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<void * > ();
}

static void _call_f_resolve_3648 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<void * > ((void *)QLibrary::resolve (arg1, arg2));
}


// static void *QLibrary::resolve(const QString &fileName, int verNum, const char *symbol)


static void _init_f_resolve_4307 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("verNum");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("symbol");
  decl->add_arg<const char * > (argspec_2);
  decl->set_return<void * > ();
}

static void _call_f_resolve_4307 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const char *arg3 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<void * > ((void *)QLibrary::resolve (arg1, arg2, arg3));
}


// static void *QLibrary::resolve(const QString &fileName, const QString &version, const char *symbol)


static void _init_f_resolve_5565 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("version");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("symbol");
  decl->add_arg<const char * > (argspec_2);
  decl->set_return<void * > ();
}

static void _call_f_resolve_5565 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const char *arg3 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<void * > ((void *)QLibrary::resolve (arg1, arg2, arg3));
}


// static QString QLibrary::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QLibrary::tr (arg1, arg2));
}


// static QString QLibrary::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QLibrary::tr (arg1, arg2, arg3));
}


// static QString QLibrary::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QLibrary::trUtf8 (arg1, arg2));
}


// static QString QLibrary::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QLibrary::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QLibrary () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QLibrary::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod (":fileName", "@brief Method QString QLibrary::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod ("isLoaded?", "@brief Method bool QLibrary::isLoaded()\n", true, &_init_f_isLoaded_c0, &_call_f_isLoaded_c0);
  methods += new qt_gsi::GenericMethod ("load", "@brief Method bool QLibrary::load()\n", false, &_init_f_load_0, &_call_f_load_0);
  methods += new qt_gsi::GenericMethod (":loadHints", "@brief Method QFlags<QLibrary::LoadHint> QLibrary::loadHints()\n", true, &_init_f_loadHints_c0, &_call_f_loadHints_c0);
  methods += new qt_gsi::GenericMethod ("resolve", "@brief Method void *QLibrary::resolve(const char *symbol)\n", false, &_init_f_resolve_1731, &_call_f_resolve_1731);
  methods += new qt_gsi::GenericMethod ("setFileName|fileName=", "@brief Method void QLibrary::setFileName(const QString &fileName)\n", false, &_init_f_setFileName_2025, &_call_f_setFileName_2025);
  methods += new qt_gsi::GenericMethod ("setFileNameAndVersion", "@brief Method void QLibrary::setFileNameAndVersion(const QString &fileName, int verNum)\n", false, &_init_f_setFileNameAndVersion_2684, &_call_f_setFileNameAndVersion_2684);
  methods += new qt_gsi::GenericMethod ("setFileNameAndVersion", "@brief Method void QLibrary::setFileNameAndVersion(const QString &fileName, const QString &version)\n", false, &_init_f_setFileNameAndVersion_3942, &_call_f_setFileNameAndVersion_3942);
  methods += new qt_gsi::GenericMethod ("setLoadHints|loadHints=", "@brief Method void QLibrary::setLoadHints(QFlags<QLibrary::LoadHint> hints)\n", false, &_init_f_setLoadHints_2841, &_call_f_setLoadHints_2841);
  methods += new qt_gsi::GenericMethod ("unload", "@brief Method bool QLibrary::unload()\n", false, &_init_f_unload_0, &_call_f_unload_0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QLibrary::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("isLibrary?", "@brief Static method bool QLibrary::isLibrary(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_isLibrary_2025, &_call_f_isLibrary_2025);
  methods += new qt_gsi::GenericStaticMethod ("resolve", "@brief Static method void *QLibrary::resolve(const QString &fileName, const char *symbol)\nThis method is static and can be called without an instance.", &_init_f_resolve_3648, &_call_f_resolve_3648);
  methods += new qt_gsi::GenericStaticMethod ("resolve", "@brief Static method void *QLibrary::resolve(const QString &fileName, int verNum, const char *symbol)\nThis method is static and can be called without an instance.", &_init_f_resolve_4307, &_call_f_resolve_4307);
  methods += new qt_gsi::GenericStaticMethod ("resolve", "@brief Static method void *QLibrary::resolve(const QString &fileName, const QString &version, const char *symbol)\nThis method is static and can be called without an instance.", &_init_f_resolve_5565, &_call_f_resolve_5565);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QLibrary::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QLibrary::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QLibrary::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QLibrary::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QLibrary> decl_QLibrary (qtdecl_QObject (), "QtCore", "QLibrary_Native",
  methods_QLibrary (),
  "@hide\n@alias QLibrary");

GSI_QTCORE_PUBLIC gsi::Class<QLibrary> &qtdecl_QLibrary () { return decl_QLibrary; }

}


class QLibrary_Adaptor : public QLibrary, public qt_gsi::QtObjectBase
{
public:

  virtual ~QLibrary_Adaptor();

  //  [adaptor ctor] QLibrary::QLibrary(QObject *parent)
  QLibrary_Adaptor() : QLibrary()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QLibrary::QLibrary(QObject *parent)
  QLibrary_Adaptor(QObject *parent) : QLibrary(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QLibrary::QLibrary(const QString &fileName, QObject *parent)
  QLibrary_Adaptor(const QString &fileName) : QLibrary(fileName)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QLibrary::QLibrary(const QString &fileName, QObject *parent)
  QLibrary_Adaptor(const QString &fileName, QObject *parent) : QLibrary(fileName, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QLibrary::QLibrary(const QString &fileName, int verNum, QObject *parent)
  QLibrary_Adaptor(const QString &fileName, int verNum) : QLibrary(fileName, verNum)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QLibrary::QLibrary(const QString &fileName, int verNum, QObject *parent)
  QLibrary_Adaptor(const QString &fileName, int verNum, QObject *parent) : QLibrary(fileName, verNum, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QLibrary::QLibrary(const QString &fileName, const QString &version, QObject *parent)
  QLibrary_Adaptor(const QString &fileName, const QString &version) : QLibrary(fileName, version)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QLibrary::QLibrary(const QString &fileName, const QString &version, QObject *parent)
  QLibrary_Adaptor(const QString &fileName, const QString &version, QObject *parent) : QLibrary(fileName, version, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QLibrary::receivers(const char *signal)
  int fp_QLibrary_receivers_c1731 (const char *signal) const {
    return QLibrary::receivers(signal);
  }

  //  [expose] QObject *QLibrary::sender()
  QObject * fp_QLibrary_sender_c0 () const {
    return QLibrary::sender();
  }

  //  [adaptor impl] bool QLibrary::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QLibrary::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QLibrary_Adaptor, bool, QEvent *>(&QLibrary_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QLibrary::event(arg1);
    }
  }

  //  [adaptor impl] bool QLibrary::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QLibrary::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QLibrary_Adaptor, bool, QObject *, QEvent *>(&QLibrary_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QLibrary::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QLibrary::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QLibrary::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QLibrary_Adaptor, QChildEvent *>(&QLibrary_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QLibrary::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QLibrary::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QLibrary::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QLibrary_Adaptor, QEvent *>(&QLibrary_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QLibrary::customEvent(arg1);
    }
  }

  //  [emitter impl] void QLibrary::destroyed(QObject *)
  void emitter_QLibrary_destroyed_1302(QObject *arg1)
  {
    emit QLibrary::destroyed(arg1);
  }

  //  [adaptor impl] void QLibrary::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QLibrary::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QLibrary_Adaptor, const char *>(&QLibrary_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QLibrary::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QLibrary::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QLibrary::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QLibrary_Adaptor, QTimerEvent *>(&QLibrary_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QLibrary::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QLibrary_Adaptor::~QLibrary_Adaptor() { }

//  Constructor QLibrary::QLibrary(QObject *parent) (adaptor class)

static void _init_ctor_QLibrary_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QLibrary_Adaptor> ();
}

static void _call_ctor_QLibrary_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QLibrary_Adaptor *> (new QLibrary_Adaptor (arg1));
}


//  Constructor QLibrary::QLibrary(const QString &fileName, QObject *parent) (adaptor class)

static void _init_ctor_QLibrary_Adaptor_3219 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QLibrary_Adaptor> ();
}

static void _call_ctor_QLibrary_Adaptor_3219 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QLibrary_Adaptor *> (new QLibrary_Adaptor (arg1, arg2));
}


//  Constructor QLibrary::QLibrary(const QString &fileName, int verNum, QObject *parent) (adaptor class)

static void _init_ctor_QLibrary_Adaptor_3878 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("verNum");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_2);
  decl->set_return_new<QLibrary_Adaptor> ();
}

static void _call_ctor_QLibrary_Adaptor_3878 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  QObject *arg3 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QLibrary_Adaptor *> (new QLibrary_Adaptor (arg1, arg2, arg3));
}


//  Constructor QLibrary::QLibrary(const QString &fileName, const QString &version, QObject *parent) (adaptor class)

static void _init_ctor_QLibrary_Adaptor_5136 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("version");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_2);
  decl->set_return_new<QLibrary_Adaptor> ();
}

static void _call_ctor_QLibrary_Adaptor_5136 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  QObject *arg3 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QLibrary_Adaptor *> (new QLibrary_Adaptor (arg1, arg2, arg3));
}


// void QLibrary::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLibrary_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QLibrary_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QLibrary::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLibrary_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QLibrary_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QLibrary::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QLibrary_Adaptor *)cls)->emitter_QLibrary_destroyed_1302 (arg1);
}


// void QLibrary::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLibrary_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QLibrary_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QLibrary::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QLibrary_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QLibrary_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QLibrary::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QLibrary_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QLibrary_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QLibrary::receivers(const char *signal)

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
  ret.write<int > ((int)((QLibrary_Adaptor *)cls)->fp_QLibrary_receivers_c1731 (arg1));
}


// exposed QObject *QLibrary::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QLibrary_Adaptor *)cls)->fp_QLibrary_sender_c0 ());
}


// void QLibrary::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLibrary_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QLibrary_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QLibrary> &qtdecl_QLibrary ();

static gsi::Methods methods_QLibrary_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLibrary::QLibrary(QObject *parent)\nThis method creates an object of class QLibrary.", &_init_ctor_QLibrary_Adaptor_1302, &_call_ctor_QLibrary_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLibrary::QLibrary(const QString &fileName, QObject *parent)\nThis method creates an object of class QLibrary.", &_init_ctor_QLibrary_Adaptor_3219, &_call_ctor_QLibrary_Adaptor_3219);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLibrary::QLibrary(const QString &fileName, int verNum, QObject *parent)\nThis method creates an object of class QLibrary.", &_init_ctor_QLibrary_Adaptor_3878, &_call_ctor_QLibrary_Adaptor_3878);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLibrary::QLibrary(const QString &fileName, const QString &version, QObject *parent)\nThis method creates an object of class QLibrary.", &_init_ctor_QLibrary_Adaptor_5136, &_call_ctor_QLibrary_Adaptor_5136);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QLibrary::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QLibrary::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QLibrary::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QLibrary::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QLibrary::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QLibrary::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QLibrary::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QLibrary::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QLibrary::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QLibrary_Adaptor> decl_QLibrary_Adaptor (qtdecl_QLibrary (), "QtCore", "QLibrary",
  methods_QLibrary_Adaptor (),
  "@qt\n@brief Binding of QLibrary");

}


//  Implementation of the enum wrapper class for QLibrary::LoadHint
namespace qt_gsi
{

static gsi::Enum<QLibrary::LoadHint> decl_QLibrary_LoadHint_Enum ("QtCore", "QLibrary_LoadHint",
    gsi::enum_const ("ResolveAllSymbolsHint", QLibrary::ResolveAllSymbolsHint, "@brief Enum constant QLibrary::ResolveAllSymbolsHint") +
    gsi::enum_const ("ExportExternalSymbolsHint", QLibrary::ExportExternalSymbolsHint, "@brief Enum constant QLibrary::ExportExternalSymbolsHint") +
    gsi::enum_const ("LoadArchiveMemberHint", QLibrary::LoadArchiveMemberHint, "@brief Enum constant QLibrary::LoadArchiveMemberHint"),
  "@qt\n@brief This class represents the QLibrary::LoadHint enum");

static gsi::QFlagsClass<QLibrary::LoadHint > decl_QLibrary_LoadHint_Enums ("QtCore", "QLibrary_QFlags_LoadHint",
  "@qt\n@brief This class represents the QFlags<QLibrary::LoadHint> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QLibrary> inject_QLibrary_LoadHint_Enum_in_parent (decl_QLibrary_LoadHint_Enum.defs ());
static gsi::ClassExt<QLibrary> decl_QLibrary_LoadHint_Enum_as_child (decl_QLibrary_LoadHint_Enum, "LoadHint");
static gsi::ClassExt<QLibrary> decl_QLibrary_LoadHint_Enums_as_child (decl_QLibrary_LoadHint_Enums, "QFlags_LoadHint");

}



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
*  @file gsiDeclQTextList.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextList>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QTextBlock>
#include <QTextDocument>
#include <QTextListFormat>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextList

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QTextList::staticMetaObject);
}


// void QTextList::add(const QTextBlock &block)


static void _init_f_add_2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("block");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_add_2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextList *)cls)->add (arg1);
}


// int QTextList::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextList *)cls)->count ());
}


// QTextListFormat QTextList::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextListFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextListFormat > ((QTextListFormat)((QTextList *)cls)->format ());
}


// bool QTextList::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextList *)cls)->isEmpty ());
}


// QTextBlock QTextList::item(int i)


static void _init_f_item_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextBlock > ();
}

static void _call_f_item_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextBlock > ((QTextBlock)((QTextList *)cls)->item (arg1));
}


// int QTextList::itemNumber(const QTextBlock &)


static void _init_f_itemNumber_c2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_itemNumber_c2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  ret.write<int > ((int)((QTextList *)cls)->itemNumber (arg1));
}


// QString QTextList::itemText(const QTextBlock &)


static void _init_f_itemText_c2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_itemText_c2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  ret.write<QString > ((QString)((QTextList *)cls)->itemText (arg1));
}


// void QTextList::remove(const QTextBlock &)


static void _init_f_remove_2306 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_remove_2306 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextList *)cls)->remove (arg1);
}


// void QTextList::removeItem(int i)


static void _init_f_removeItem_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeItem_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextList *)cls)->removeItem (arg1);
}


// void QTextList::setFormat(const QTextListFormat &format)


static void _init_f_setFormat_2844 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QTextListFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFormat_2844 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextListFormat &arg1 = gsi::arg_reader<const QTextListFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextList *)cls)->setFormat (arg1);
}


// static QString QTextList::tr(const char *s, const char *c)


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
  ret.write<QString > ((QString)QTextList::tr (arg1, arg2));
}


// static QString QTextList::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QTextList::tr (arg1, arg2, arg3));
}


// static QString QTextList::trUtf8(const char *s, const char *c)


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
  ret.write<QString > ((QString)QTextList::trUtf8 (arg1, arg2));
}


// static QString QTextList::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QTextList::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QTextList () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("add", "@brief Method void QTextList::add(const QTextBlock &block)\n", false, &_init_f_add_2306, &_call_f_add_2306);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QTextList::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod (":format", "@brief Method QTextListFormat QTextList::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QTextList::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("item", "@brief Method QTextBlock QTextList::item(int i)\n", true, &_init_f_item_c767, &_call_f_item_c767);
  methods += new qt_gsi::GenericMethod ("itemNumber", "@brief Method int QTextList::itemNumber(const QTextBlock &)\n", true, &_init_f_itemNumber_c2306, &_call_f_itemNumber_c2306);
  methods += new qt_gsi::GenericMethod ("itemText", "@brief Method QString QTextList::itemText(const QTextBlock &)\n", true, &_init_f_itemText_c2306, &_call_f_itemText_c2306);
  methods += new qt_gsi::GenericMethod ("remove", "@brief Method void QTextList::remove(const QTextBlock &)\n", false, &_init_f_remove_2306, &_call_f_remove_2306);
  methods += new qt_gsi::GenericMethod ("removeItem", "@brief Method void QTextList::removeItem(int i)\n", false, &_init_f_removeItem_767, &_call_f_removeItem_767);
  methods += new qt_gsi::GenericMethod ("setFormat|format=", "@brief Method void QTextList::setFormat(const QTextListFormat &format)\n", false, &_init_f_setFormat_2844, &_call_f_setFormat_2844);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QTextList::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTextList::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTextList::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTextList::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTextList::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QTextBlockGroup> &qtdecl_QTextBlockGroup ();

qt_gsi::QtNativeClass<QTextList> decl_QTextList (qtdecl_QTextBlockGroup (), "QtGui", "QTextList_Native",
  methods_QTextList (),
  "@hide\n@alias QTextList");

GSI_QTGUI_PUBLIC gsi::Class<QTextList> &qtdecl_QTextList () { return decl_QTextList; }

}


class QTextList_Adaptor : public QTextList, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTextList_Adaptor();

  //  [adaptor ctor] QTextList::QTextList(QTextDocument *doc)
  QTextList_Adaptor(QTextDocument *doc) : QTextList(doc)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] QList<QTextBlock> QTextList::blockList()
  QList<QTextBlock> fp_QTextList_blockList_c0 () const {
    return QTextList::blockList();
  }

  //  [expose] int QTextList::receivers(const char *signal)
  int fp_QTextList_receivers_c1731 (const char *signal) const {
    return QTextList::receivers(signal);
  }

  //  [expose] QObject *QTextList::sender()
  QObject * fp_QTextList_sender_c0 () const {
    return QTextList::sender();
  }

  //  [adaptor impl] bool QTextList::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QTextList::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QTextList_Adaptor, bool, QEvent *>(&QTextList_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QTextList::event(arg1);
    }
  }

  //  [adaptor impl] bool QTextList::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QTextList::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QTextList_Adaptor, bool, QObject *, QEvent *>(&QTextList_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QTextList::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QTextList::blockFormatChanged(const QTextBlock &block)
  void cbs_blockFormatChanged_2306_0(const QTextBlock &block)
  {
    QTextList::blockFormatChanged(block);
  }

  virtual void blockFormatChanged(const QTextBlock &block)
  {
    if (cb_blockFormatChanged_2306_0.can_issue()) {
      cb_blockFormatChanged_2306_0.issue<QTextList_Adaptor, const QTextBlock &>(&QTextList_Adaptor::cbs_blockFormatChanged_2306_0, block);
    } else {
      QTextList::blockFormatChanged(block);
    }
  }

  //  [adaptor impl] void QTextList::blockInserted(const QTextBlock &block)
  void cbs_blockInserted_2306_0(const QTextBlock &block)
  {
    QTextList::blockInserted(block);
  }

  virtual void blockInserted(const QTextBlock &block)
  {
    if (cb_blockInserted_2306_0.can_issue()) {
      cb_blockInserted_2306_0.issue<QTextList_Adaptor, const QTextBlock &>(&QTextList_Adaptor::cbs_blockInserted_2306_0, block);
    } else {
      QTextList::blockInserted(block);
    }
  }

  //  [adaptor impl] void QTextList::blockRemoved(const QTextBlock &block)
  void cbs_blockRemoved_2306_0(const QTextBlock &block)
  {
    QTextList::blockRemoved(block);
  }

  virtual void blockRemoved(const QTextBlock &block)
  {
    if (cb_blockRemoved_2306_0.can_issue()) {
      cb_blockRemoved_2306_0.issue<QTextList_Adaptor, const QTextBlock &>(&QTextList_Adaptor::cbs_blockRemoved_2306_0, block);
    } else {
      QTextList::blockRemoved(block);
    }
  }

  //  [adaptor impl] void QTextList::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QTextList::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QTextList_Adaptor, QChildEvent *>(&QTextList_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QTextList::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QTextList::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QTextList::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QTextList_Adaptor, QEvent *>(&QTextList_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QTextList::customEvent(arg1);
    }
  }

  //  [emitter impl] void QTextList::destroyed(QObject *)
  void emitter_QTextList_destroyed_1302(QObject *arg1)
  {
    emit QTextList::destroyed(arg1);
  }

  //  [adaptor impl] void QTextList::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QTextList::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QTextList_Adaptor, const char *>(&QTextList_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QTextList::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QTextList::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QTextList::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QTextList_Adaptor, QTimerEvent *>(&QTextList_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QTextList::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_blockFormatChanged_2306_0;
  gsi::Callback cb_blockInserted_2306_0;
  gsi::Callback cb_blockRemoved_2306_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QTextList_Adaptor::~QTextList_Adaptor() { }

//  Constructor QTextList::QTextList(QTextDocument *doc) (adaptor class)

static void _init_ctor_QTextList_Adaptor_1955 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("doc");
  decl->add_arg<QTextDocument * > (argspec_0);
  decl->set_return_new<QTextList_Adaptor> ();
}

static void _call_ctor_QTextList_Adaptor_1955 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextDocument *arg1 = gsi::arg_reader<QTextDocument * >() (args, heap);
  ret.write<QTextList_Adaptor *> (new QTextList_Adaptor (arg1));
}


// void QTextList::blockFormatChanged(const QTextBlock &block)

static void _init_cbs_blockFormatChanged_2306_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("block");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_blockFormatChanged_2306_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = args.read<const QTextBlock & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextList_Adaptor *)cls)->cbs_blockFormatChanged_2306_0 (arg1);
}

static void _set_callback_cbs_blockFormatChanged_2306_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_blockFormatChanged_2306_0 = cb;
}


// void QTextList::blockInserted(const QTextBlock &block)

static void _init_cbs_blockInserted_2306_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("block");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_blockInserted_2306_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = args.read<const QTextBlock & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextList_Adaptor *)cls)->cbs_blockInserted_2306_0 (arg1);
}

static void _set_callback_cbs_blockInserted_2306_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_blockInserted_2306_0 = cb;
}


// exposed QList<QTextBlock> QTextList::blockList()

static void _init_fp_blockList_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QTextBlock> > ();
}

static void _call_fp_blockList_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QTextBlock> > ((QList<QTextBlock>)((QTextList_Adaptor *)cls)->fp_QTextList_blockList_c0 ());
}


// void QTextList::blockRemoved(const QTextBlock &block)

static void _init_cbs_blockRemoved_2306_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("block");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_blockRemoved_2306_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = args.read<const QTextBlock & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextList_Adaptor *)cls)->cbs_blockRemoved_2306_0 (arg1);
}

static void _set_callback_cbs_blockRemoved_2306_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_blockRemoved_2306_0 = cb;
}


// void QTextList::childEvent(QChildEvent *)

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
  ((QTextList_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QTextList::customEvent(QEvent *)

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
  ((QTextList_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QTextList::destroyed(QObject *)

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
  ((QTextList_Adaptor *)cls)->emitter_QTextList_destroyed_1302 (arg1);
}


// void QTextList::disconnectNotify(const char *signal)

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
  ((QTextList_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QTextList::event(QEvent *)

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
  ret.write<bool > ((bool)((QTextList_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QTextList::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QTextList_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QTextList::receivers(const char *signal)

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
  ret.write<int > ((int)((QTextList_Adaptor *)cls)->fp_QTextList_receivers_c1731 (arg1));
}


// exposed QObject *QTextList::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QTextList_Adaptor *)cls)->fp_QTextList_sender_c0 ());
}


// void QTextList::timerEvent(QTimerEvent *)

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
  ((QTextList_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextList_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QTextList> &qtdecl_QTextList ();

static gsi::Methods methods_QTextList_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextList::QTextList(QTextDocument *doc)\nThis method creates an object of class QTextList.", &_init_ctor_QTextList_Adaptor_1955, &_call_ctor_QTextList_Adaptor_1955);
  methods += new qt_gsi::GenericMethod ("*blockFormatChanged", "@brief Virtual method void QTextList::blockFormatChanged(const QTextBlock &block)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_blockFormatChanged_2306_0, &_call_cbs_blockFormatChanged_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockFormatChanged", "@hide", false, &_init_cbs_blockFormatChanged_2306_0, &_call_cbs_blockFormatChanged_2306_0, &_set_callback_cbs_blockFormatChanged_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockInserted", "@brief Virtual method void QTextList::blockInserted(const QTextBlock &block)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_blockInserted_2306_0, &_call_cbs_blockInserted_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockInserted", "@hide", false, &_init_cbs_blockInserted_2306_0, &_call_cbs_blockInserted_2306_0, &_set_callback_cbs_blockInserted_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockList", "@brief Method QList<QTextBlock> QTextList::blockList()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_blockList_c0, &_call_fp_blockList_c0);
  methods += new qt_gsi::GenericMethod ("*blockRemoved", "@brief Virtual method void QTextList::blockRemoved(const QTextBlock &block)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_blockRemoved_2306_0, &_call_cbs_blockRemoved_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockRemoved", "@hide", false, &_init_cbs_blockRemoved_2306_0, &_call_cbs_blockRemoved_2306_0, &_set_callback_cbs_blockRemoved_2306_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QTextList::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QTextList::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QTextList::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QTextList::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QTextList::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QTextList::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QTextList::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QTextList::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QTextList::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QTextList_Adaptor> decl_QTextList_Adaptor (qtdecl_QTextList (), "QtGui", "QTextList",
  methods_QTextList_Adaptor (),
  "@qt\n@brief Binding of QTextList");

}


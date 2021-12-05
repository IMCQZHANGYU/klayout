
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQStateMachine_SignalEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStateMachine>
#include <QEvent>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStateMachine::SignalEvent

// QList<QVariant> QStateMachine::SignalEvent::arguments()


static void _init_f_arguments_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QVariant> > ();
}

static void _call_f_arguments_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QVariant> > ((QList<QVariant>)((QStateMachine::SignalEvent *)cls)->arguments ());
}


// QObject *QStateMachine::SignalEvent::sender()


static void _init_f_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QStateMachine::SignalEvent *)cls)->sender ());
}


// int QStateMachine::SignalEvent::signalIndex()


static void _init_f_signalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_signalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QStateMachine::SignalEvent *)cls)->signalIndex ());
}


namespace gsi
{

static gsi::Methods methods_QStateMachine_SignalEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("arguments", "@brief Method QList<QVariant> QStateMachine::SignalEvent::arguments()\n", true, &_init_f_arguments_c0, &_call_f_arguments_c0);
  methods += new qt_gsi::GenericMethod ("sender", "@brief Method QObject *QStateMachine::SignalEvent::sender()\n", true, &_init_f_sender_c0, &_call_f_sender_c0);
  methods += new qt_gsi::GenericMethod ("signalIndex", "@brief Method int QStateMachine::SignalEvent::signalIndex()\n", true, &_init_f_signalIndex_c0, &_call_f_signalIndex_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QStateMachine::SignalEvent> decl_QStateMachine_SignalEvent (qtdecl_QEvent (), "QtCore", "QStateMachine_SignalEvent_Native",
  methods_QStateMachine_SignalEvent (),
  "@hide\n@alias QStateMachine_SignalEvent");

GSI_QTCORE_PUBLIC gsi::Class<QStateMachine::SignalEvent> &qtdecl_QStateMachine_SignalEvent () { return decl_QStateMachine_SignalEvent; }

}


class QStateMachine_SignalEvent_Adaptor : public QStateMachine::SignalEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QStateMachine_SignalEvent_Adaptor();

  //  [adaptor ctor] QStateMachine::SignalEvent::SignalEvent(QObject *sender, int signalIndex, const QList<QVariant> &arguments)
  QStateMachine_SignalEvent_Adaptor(QObject *sender, int signalIndex, const QList<QVariant> &arguments) : QStateMachine::SignalEvent(sender, signalIndex, arguments)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QStateMachine_SignalEvent_Adaptor::~QStateMachine_SignalEvent_Adaptor() { }

//  Constructor QStateMachine::SignalEvent::SignalEvent(QObject *sender, int signalIndex, const QList<QVariant> &arguments) (adaptor class)

static void _init_ctor_QStateMachine_SignalEvent_Adaptor_4587 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("signalIndex");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("arguments");
  decl->add_arg<const QList<QVariant> & > (argspec_2);
  decl->set_return_new<QStateMachine_SignalEvent_Adaptor> ();
}

static void _call_ctor_QStateMachine_SignalEvent_Adaptor_4587 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QList<QVariant> &arg3 = gsi::arg_reader<const QList<QVariant> & >() (args, heap);
  ret.write<QStateMachine_SignalEvent_Adaptor *> (new QStateMachine_SignalEvent_Adaptor (arg1, arg2, arg3));
}


namespace gsi
{

gsi::Class<QStateMachine::SignalEvent> &qtdecl_QStateMachine_SignalEvent ();

static gsi::Methods methods_QStateMachine_SignalEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStateMachine::SignalEvent::SignalEvent(QObject *sender, int signalIndex, const QList<QVariant> &arguments)\nThis method creates an object of class QStateMachine::SignalEvent.", &_init_ctor_QStateMachine_SignalEvent_Adaptor_4587, &_call_ctor_QStateMachine_SignalEvent_Adaptor_4587);
  return methods;
}

gsi::Class<QStateMachine_SignalEvent_Adaptor> decl_QStateMachine_SignalEvent_Adaptor (qtdecl_QStateMachine_SignalEvent (), "QtCore", "QStateMachine_SignalEvent",
  methods_QStateMachine_SignalEvent_Adaptor (),
  "@qt\n@brief Binding of QStateMachine::SignalEvent");

gsi::ClassExt<QStateMachine> decl_QStateMachine_SignalEvent_as_child (decl_QStateMachine_SignalEvent_Adaptor, "SignalEvent");
}


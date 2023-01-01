
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
*  @file gsiDeclQPagedPaintDevice.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPagedPaintDevice>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPagedPaintDevice

// bool QPagedPaintDevice::newPage()


static void _init_f_newPage_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_newPage_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPagedPaintDevice *)cls)->newPage ());
}


// QPageLayout QPagedPaintDevice::pageLayout()


static void _init_f_pageLayout_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPageLayout > ();
}

static void _call_f_pageLayout_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPageLayout > ((QPageLayout)((QPagedPaintDevice *)cls)->pageLayout ());
}


// QPageRanges QPagedPaintDevice::pageRanges()


static void _init_f_pageRanges_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPageRanges > ();
}

static void _call_f_pageRanges_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPageRanges > ((QPageRanges)((QPagedPaintDevice *)cls)->pageRanges ());
}


// bool QPagedPaintDevice::setPageLayout(const QPageLayout &pageLayout)


static void _init_f_setPageLayout_2413 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pageLayout");
  decl->add_arg<const QPageLayout & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setPageLayout_2413 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageLayout &arg1 = gsi::arg_reader<const QPageLayout & >() (args, heap);
  ret.write<bool > ((bool)((QPagedPaintDevice *)cls)->setPageLayout (arg1));
}


// bool QPagedPaintDevice::setPageMargins(const QMarginsF &margins, QPageLayout::Unit units)


static void _init_f_setPageMargins_4145 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margins");
  decl->add_arg<const QMarginsF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("units", true, "QPageLayout::Millimeter");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_setPageMargins_4145 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMarginsF &arg1 = gsi::arg_reader<const QMarginsF & >() (args, heap);
  const qt_gsi::Converter<QPageLayout::Unit>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QPageLayout::Unit>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QPageLayout::Unit>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QPageLayout::Unit>(heap, QPageLayout::Millimeter), heap);
  ret.write<bool > ((bool)((QPagedPaintDevice *)cls)->setPageMargins (arg1, qt_gsi::QtToCppAdaptor<QPageLayout::Unit>(arg2).cref()));
}


// bool QPagedPaintDevice::setPageOrientation(QPageLayout::Orientation orientation)


static void _init_f_setPageOrientation_2816 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("orientation");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Orientation>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setPageOrientation_2816 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageLayout::Orientation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QPageLayout::Orientation>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QPagedPaintDevice *)cls)->setPageOrientation (qt_gsi::QtToCppAdaptor<QPageLayout::Orientation>(arg1).cref()));
}


// void QPagedPaintDevice::setPageRanges(const QPageRanges &ranges)


static void _init_f_setPageRanges_2383 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ranges");
  decl->add_arg<const QPageRanges & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPageRanges_2383 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageRanges &arg1 = gsi::arg_reader<const QPageRanges & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPagedPaintDevice *)cls)->setPageRanges (arg1);
}


// bool QPagedPaintDevice::setPageSize(const QPageSize &pageSize)


static void _init_f_setPageSize_2186 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pageSize");
  decl->add_arg<const QPageSize & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setPageSize_2186 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageSize &arg1 = gsi::arg_reader<const QPageSize & >() (args, heap);
  ret.write<bool > ((bool)((QPagedPaintDevice *)cls)->setPageSize (arg1));
}


namespace gsi
{

static gsi::Methods methods_QPagedPaintDevice () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("newPage", "@brief Method bool QPagedPaintDevice::newPage()\n", false, &_init_f_newPage_0, &_call_f_newPage_0);
  methods += new qt_gsi::GenericMethod ("pageLayout", "@brief Method QPageLayout QPagedPaintDevice::pageLayout()\n", true, &_init_f_pageLayout_c0, &_call_f_pageLayout_c0);
  methods += new qt_gsi::GenericMethod ("pageRanges", "@brief Method QPageRanges QPagedPaintDevice::pageRanges()\n", true, &_init_f_pageRanges_c0, &_call_f_pageRanges_c0);
  methods += new qt_gsi::GenericMethod ("setPageLayout", "@brief Method bool QPagedPaintDevice::setPageLayout(const QPageLayout &pageLayout)\n", false, &_init_f_setPageLayout_2413, &_call_f_setPageLayout_2413);
  methods += new qt_gsi::GenericMethod ("setPageMargins", "@brief Method bool QPagedPaintDevice::setPageMargins(const QMarginsF &margins, QPageLayout::Unit units)\n", false, &_init_f_setPageMargins_4145, &_call_f_setPageMargins_4145);
  methods += new qt_gsi::GenericMethod ("setPageOrientation", "@brief Method bool QPagedPaintDevice::setPageOrientation(QPageLayout::Orientation orientation)\n", false, &_init_f_setPageOrientation_2816, &_call_f_setPageOrientation_2816);
  methods += new qt_gsi::GenericMethod ("setPageRanges", "@brief Method void QPagedPaintDevice::setPageRanges(const QPageRanges &ranges)\n", false, &_init_f_setPageRanges_2383, &_call_f_setPageRanges_2383);
  methods += new qt_gsi::GenericMethod ("setPageSize|pageSize=", "@brief Method bool QPagedPaintDevice::setPageSize(const QPageSize &pageSize)\n", false, &_init_f_setPageSize_2186, &_call_f_setPageSize_2186);
  return methods;
}

gsi::Class<QPaintDevice> &qtdecl_QPaintDevice ();

gsi::Class<QPagedPaintDevice> decl_QPagedPaintDevice (qtdecl_QPaintDevice (), "QtGui", "QPagedPaintDevice_Native",
  methods_QPagedPaintDevice (),
  "@hide\n@alias QPagedPaintDevice");

GSI_QTGUI_PUBLIC gsi::Class<QPagedPaintDevice> &qtdecl_QPagedPaintDevice () { return decl_QPagedPaintDevice; }

}


class QPagedPaintDevice_Adaptor : public QPagedPaintDevice, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPagedPaintDevice_Adaptor();

  //  [adaptor impl] bool QPagedPaintDevice::newPage()
  bool cbs_newPage_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("newPage");
  }

  virtual bool newPage()
  {
    if (cb_newPage_0_0.can_issue()) {
      return cb_newPage_0_0.issue<QPagedPaintDevice_Adaptor, bool>(&QPagedPaintDevice_Adaptor::cbs_newPage_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("newPage");
    }
  }

  //  [adaptor impl] QPaintEngine *QPagedPaintDevice::paintEngine()
  QPaintEngine * cbs_paintEngine_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("paintEngine");
  }

  virtual QPaintEngine * paintEngine() const
  {
    if (cb_paintEngine_c0_0.can_issue()) {
      return cb_paintEngine_c0_0.issue<QPagedPaintDevice_Adaptor, QPaintEngine *>(&QPagedPaintDevice_Adaptor::cbs_paintEngine_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("paintEngine");
    }
  }

  //  [adaptor impl] bool QPagedPaintDevice::setPageLayout(const QPageLayout &pageLayout)
  bool cbs_setPageLayout_2413_0(const QPageLayout &pageLayout)
  {
    return QPagedPaintDevice::setPageLayout(pageLayout);
  }

  virtual bool setPageLayout(const QPageLayout &pageLayout)
  {
    if (cb_setPageLayout_2413_0.can_issue()) {
      return cb_setPageLayout_2413_0.issue<QPagedPaintDevice_Adaptor, bool, const QPageLayout &>(&QPagedPaintDevice_Adaptor::cbs_setPageLayout_2413_0, pageLayout);
    } else {
      return QPagedPaintDevice::setPageLayout(pageLayout);
    }
  }

  //  [adaptor impl] bool QPagedPaintDevice::setPageMargins(const QMarginsF &margins, QPageLayout::Unit units)
  bool cbs_setPageMargins_4145_1(const QMarginsF &margins, const qt_gsi::Converter<QPageLayout::Unit>::target_type & units)
  {
    return QPagedPaintDevice::setPageMargins(margins, qt_gsi::QtToCppAdaptor<QPageLayout::Unit>(units).cref());
  }

  virtual bool setPageMargins(const QMarginsF &margins, QPageLayout::Unit units)
  {
    if (cb_setPageMargins_4145_1.can_issue()) {
      return cb_setPageMargins_4145_1.issue<QPagedPaintDevice_Adaptor, bool, const QMarginsF &, const qt_gsi::Converter<QPageLayout::Unit>::target_type &>(&QPagedPaintDevice_Adaptor::cbs_setPageMargins_4145_1, margins, qt_gsi::CppToQtAdaptor<QPageLayout::Unit>(units));
    } else {
      return QPagedPaintDevice::setPageMargins(margins, units);
    }
  }

  //  [adaptor impl] bool QPagedPaintDevice::setPageOrientation(QPageLayout::Orientation orientation)
  bool cbs_setPageOrientation_2816_0(const qt_gsi::Converter<QPageLayout::Orientation>::target_type & orientation)
  {
    return QPagedPaintDevice::setPageOrientation(qt_gsi::QtToCppAdaptor<QPageLayout::Orientation>(orientation).cref());
  }

  virtual bool setPageOrientation(QPageLayout::Orientation orientation)
  {
    if (cb_setPageOrientation_2816_0.can_issue()) {
      return cb_setPageOrientation_2816_0.issue<QPagedPaintDevice_Adaptor, bool, const qt_gsi::Converter<QPageLayout::Orientation>::target_type &>(&QPagedPaintDevice_Adaptor::cbs_setPageOrientation_2816_0, qt_gsi::CppToQtAdaptor<QPageLayout::Orientation>(orientation));
    } else {
      return QPagedPaintDevice::setPageOrientation(orientation);
    }
  }

  //  [adaptor impl] void QPagedPaintDevice::setPageRanges(const QPageRanges &ranges)
  void cbs_setPageRanges_2383_0(const QPageRanges &ranges)
  {
    QPagedPaintDevice::setPageRanges(ranges);
  }

  virtual void setPageRanges(const QPageRanges &ranges)
  {
    if (cb_setPageRanges_2383_0.can_issue()) {
      cb_setPageRanges_2383_0.issue<QPagedPaintDevice_Adaptor, const QPageRanges &>(&QPagedPaintDevice_Adaptor::cbs_setPageRanges_2383_0, ranges);
    } else {
      QPagedPaintDevice::setPageRanges(ranges);
    }
  }

  //  [adaptor impl] bool QPagedPaintDevice::setPageSize(const QPageSize &pageSize)
  bool cbs_setPageSize_2186_0(const QPageSize &pageSize)
  {
    return QPagedPaintDevice::setPageSize(pageSize);
  }

  virtual bool setPageSize(const QPageSize &pageSize)
  {
    if (cb_setPageSize_2186_0.can_issue()) {
      return cb_setPageSize_2186_0.issue<QPagedPaintDevice_Adaptor, bool, const QPageSize &>(&QPagedPaintDevice_Adaptor::cbs_setPageSize_2186_0, pageSize);
    } else {
      return QPagedPaintDevice::setPageSize(pageSize);
    }
  }

  //  [adaptor impl] void QPagedPaintDevice::initPainter(QPainter *painter)
  void cbs_initPainter_c1426_0(QPainter *painter) const
  {
    QPagedPaintDevice::initPainter(painter);
  }

  virtual void initPainter(QPainter *painter) const
  {
    if (cb_initPainter_c1426_0.can_issue()) {
      cb_initPainter_c1426_0.issue<QPagedPaintDevice_Adaptor, QPainter *>(&QPagedPaintDevice_Adaptor::cbs_initPainter_c1426_0, painter);
    } else {
      QPagedPaintDevice::initPainter(painter);
    }
  }

  //  [adaptor impl] int QPagedPaintDevice::metric(QPaintDevice::PaintDeviceMetric metric)
  int cbs_metric_c3445_0(const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & _metric) const
  {
    return QPagedPaintDevice::metric(qt_gsi::QtToCppAdaptor<QPaintDevice::PaintDeviceMetric>(_metric).cref());
  }

  virtual int metric(QPaintDevice::PaintDeviceMetric _metric) const
  {
    if (cb_metric_c3445_0.can_issue()) {
      return cb_metric_c3445_0.issue<QPagedPaintDevice_Adaptor, int, const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type &>(&QPagedPaintDevice_Adaptor::cbs_metric_c3445_0, qt_gsi::CppToQtAdaptor<QPaintDevice::PaintDeviceMetric>(_metric));
    } else {
      return QPagedPaintDevice::metric(_metric);
    }
  }

  //  [adaptor impl] QPaintDevice *QPagedPaintDevice::redirected(QPoint *offset)
  QPaintDevice * cbs_redirected_c1225_0(QPoint *offset) const
  {
    return QPagedPaintDevice::redirected(offset);
  }

  virtual QPaintDevice * redirected(QPoint *offset) const
  {
    if (cb_redirected_c1225_0.can_issue()) {
      return cb_redirected_c1225_0.issue<QPagedPaintDevice_Adaptor, QPaintDevice *, QPoint *>(&QPagedPaintDevice_Adaptor::cbs_redirected_c1225_0, offset);
    } else {
      return QPagedPaintDevice::redirected(offset);
    }
  }

  //  [adaptor impl] QPainter *QPagedPaintDevice::sharedPainter()
  QPainter * cbs_sharedPainter_c0_0() const
  {
    return QPagedPaintDevice::sharedPainter();
  }

  virtual QPainter * sharedPainter() const
  {
    if (cb_sharedPainter_c0_0.can_issue()) {
      return cb_sharedPainter_c0_0.issue<QPagedPaintDevice_Adaptor, QPainter *>(&QPagedPaintDevice_Adaptor::cbs_sharedPainter_c0_0);
    } else {
      return QPagedPaintDevice::sharedPainter();
    }
  }

  gsi::Callback cb_newPage_0_0;
  gsi::Callback cb_paintEngine_c0_0;
  gsi::Callback cb_setPageLayout_2413_0;
  gsi::Callback cb_setPageMargins_4145_1;
  gsi::Callback cb_setPageOrientation_2816_0;
  gsi::Callback cb_setPageRanges_2383_0;
  gsi::Callback cb_setPageSize_2186_0;
  gsi::Callback cb_initPainter_c1426_0;
  gsi::Callback cb_metric_c3445_0;
  gsi::Callback cb_redirected_c1225_0;
  gsi::Callback cb_sharedPainter_c0_0;
};

QPagedPaintDevice_Adaptor::~QPagedPaintDevice_Adaptor() { }

// void QPagedPaintDevice::initPainter(QPainter *painter)

static void _init_cbs_initPainter_c1426_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_initPainter_c1426_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = args.read<QPainter * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPagedPaintDevice_Adaptor *)cls)->cbs_initPainter_c1426_0 (arg1);
}

static void _set_callback_cbs_initPainter_c1426_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_initPainter_c1426_0 = cb;
}


// int QPagedPaintDevice::metric(QPaintDevice::PaintDeviceMetric metric)

static void _init_cbs_metric_c3445_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("metric");
  decl->add_arg<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_metric_c3445_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1 = args.read<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (heap);
  ret.write<int > ((int)((QPagedPaintDevice_Adaptor *)cls)->cbs_metric_c3445_0 (arg1));
}

static void _set_callback_cbs_metric_c3445_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_metric_c3445_0 = cb;
}


// bool QPagedPaintDevice::newPage()

static void _init_cbs_newPage_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_newPage_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPagedPaintDevice_Adaptor *)cls)->cbs_newPage_0_0 ());
}

static void _set_callback_cbs_newPage_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_newPage_0_0 = cb;
}


// QPaintEngine *QPagedPaintDevice::paintEngine()

static void _init_cbs_paintEngine_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPaintEngine * > ();
}

static void _call_cbs_paintEngine_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintEngine * > ((QPaintEngine *)((QPagedPaintDevice_Adaptor *)cls)->cbs_paintEngine_c0_0 ());
}

static void _set_callback_cbs_paintEngine_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_paintEngine_c0_0 = cb;
}


// QPaintDevice *QPagedPaintDevice::redirected(QPoint *offset)

static void _init_cbs_redirected_c1225_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<QPoint * > (argspec_0);
  decl->set_return<QPaintDevice * > ();
}

static void _call_cbs_redirected_c1225_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPoint *arg1 = args.read<QPoint * > (heap);
  ret.write<QPaintDevice * > ((QPaintDevice *)((QPagedPaintDevice_Adaptor *)cls)->cbs_redirected_c1225_0 (arg1));
}

static void _set_callback_cbs_redirected_c1225_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_redirected_c1225_0 = cb;
}


// bool QPagedPaintDevice::setPageLayout(const QPageLayout &pageLayout)

static void _init_cbs_setPageLayout_2413_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pageLayout");
  decl->add_arg<const QPageLayout & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_setPageLayout_2413_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageLayout &arg1 = args.read<const QPageLayout & > (heap);
  ret.write<bool > ((bool)((QPagedPaintDevice_Adaptor *)cls)->cbs_setPageLayout_2413_0 (arg1));
}

static void _set_callback_cbs_setPageLayout_2413_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_setPageLayout_2413_0 = cb;
}


// bool QPagedPaintDevice::setPageMargins(const QMarginsF &margins, QPageLayout::Unit units)

static void _init_cbs_setPageMargins_4145_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margins");
  decl->add_arg<const QMarginsF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("units");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_setPageMargins_4145_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMarginsF &arg1 = args.read<const QMarginsF & > (heap);
  const qt_gsi::Converter<QPageLayout::Unit>::target_type & arg2 = args.read<const qt_gsi::Converter<QPageLayout::Unit>::target_type & > (heap);
  ret.write<bool > ((bool)((QPagedPaintDevice_Adaptor *)cls)->cbs_setPageMargins_4145_1 (arg1, arg2));
}

static void _set_callback_cbs_setPageMargins_4145_1 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_setPageMargins_4145_1 = cb;
}


// bool QPagedPaintDevice::setPageOrientation(QPageLayout::Orientation orientation)

static void _init_cbs_setPageOrientation_2816_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("orientation");
  decl->add_arg<const qt_gsi::Converter<QPageLayout::Orientation>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_setPageOrientation_2816_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPageLayout::Orientation>::target_type & arg1 = args.read<const qt_gsi::Converter<QPageLayout::Orientation>::target_type & > (heap);
  ret.write<bool > ((bool)((QPagedPaintDevice_Adaptor *)cls)->cbs_setPageOrientation_2816_0 (arg1));
}

static void _set_callback_cbs_setPageOrientation_2816_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_setPageOrientation_2816_0 = cb;
}


// void QPagedPaintDevice::setPageRanges(const QPageRanges &ranges)

static void _init_cbs_setPageRanges_2383_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ranges");
  decl->add_arg<const QPageRanges & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setPageRanges_2383_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageRanges &arg1 = args.read<const QPageRanges & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPagedPaintDevice_Adaptor *)cls)->cbs_setPageRanges_2383_0 (arg1);
}

static void _set_callback_cbs_setPageRanges_2383_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_setPageRanges_2383_0 = cb;
}


// bool QPagedPaintDevice::setPageSize(const QPageSize &pageSize)

static void _init_cbs_setPageSize_2186_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pageSize");
  decl->add_arg<const QPageSize & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_setPageSize_2186_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPageSize &arg1 = args.read<const QPageSize & > (heap);
  ret.write<bool > ((bool)((QPagedPaintDevice_Adaptor *)cls)->cbs_setPageSize_2186_0 (arg1));
}

static void _set_callback_cbs_setPageSize_2186_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_setPageSize_2186_0 = cb;
}


// QPainter *QPagedPaintDevice::sharedPainter()

static void _init_cbs_sharedPainter_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPainter * > ();
}

static void _call_cbs_sharedPainter_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPainter * > ((QPainter *)((QPagedPaintDevice_Adaptor *)cls)->cbs_sharedPainter_c0_0 ());
}

static void _set_callback_cbs_sharedPainter_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPagedPaintDevice_Adaptor *)cls)->cb_sharedPainter_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QPagedPaintDevice> &qtdecl_QPagedPaintDevice ();

static gsi::Methods methods_QPagedPaintDevice_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("*initPainter", "@brief Virtual method void QPagedPaintDevice::initPainter(QPainter *painter)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_initPainter_c1426_0, &_call_cbs_initPainter_c1426_0);
  methods += new qt_gsi::GenericMethod ("*initPainter", "@hide", true, &_init_cbs_initPainter_c1426_0, &_call_cbs_initPainter_c1426_0, &_set_callback_cbs_initPainter_c1426_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@brief Virtual method int QPagedPaintDevice::metric(QPaintDevice::PaintDeviceMetric metric)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@hide", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0, &_set_callback_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("newPage", "@brief Virtual method bool QPagedPaintDevice::newPage()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_newPage_0_0, &_call_cbs_newPage_0_0);
  methods += new qt_gsi::GenericMethod ("newPage", "@hide", false, &_init_cbs_newPage_0_0, &_call_cbs_newPage_0_0, &_set_callback_cbs_newPage_0_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@brief Virtual method QPaintEngine *QPagedPaintDevice::paintEngine()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@hide", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0, &_set_callback_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("*redirected", "@brief Virtual method QPaintDevice *QPagedPaintDevice::redirected(QPoint *offset)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_redirected_c1225_0, &_call_cbs_redirected_c1225_0);
  methods += new qt_gsi::GenericMethod ("*redirected", "@hide", true, &_init_cbs_redirected_c1225_0, &_call_cbs_redirected_c1225_0, &_set_callback_cbs_redirected_c1225_0);
  methods += new qt_gsi::GenericMethod ("setPageLayout", "@brief Virtual method bool QPagedPaintDevice::setPageLayout(const QPageLayout &pageLayout)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setPageLayout_2413_0, &_call_cbs_setPageLayout_2413_0);
  methods += new qt_gsi::GenericMethod ("setPageLayout", "@hide", false, &_init_cbs_setPageLayout_2413_0, &_call_cbs_setPageLayout_2413_0, &_set_callback_cbs_setPageLayout_2413_0);
  methods += new qt_gsi::GenericMethod ("setPageMargins", "@brief Virtual method bool QPagedPaintDevice::setPageMargins(const QMarginsF &margins, QPageLayout::Unit units)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setPageMargins_4145_1, &_call_cbs_setPageMargins_4145_1);
  methods += new qt_gsi::GenericMethod ("setPageMargins", "@hide", false, &_init_cbs_setPageMargins_4145_1, &_call_cbs_setPageMargins_4145_1, &_set_callback_cbs_setPageMargins_4145_1);
  methods += new qt_gsi::GenericMethod ("setPageOrientation", "@brief Virtual method bool QPagedPaintDevice::setPageOrientation(QPageLayout::Orientation orientation)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setPageOrientation_2816_0, &_call_cbs_setPageOrientation_2816_0);
  methods += new qt_gsi::GenericMethod ("setPageOrientation", "@hide", false, &_init_cbs_setPageOrientation_2816_0, &_call_cbs_setPageOrientation_2816_0, &_set_callback_cbs_setPageOrientation_2816_0);
  methods += new qt_gsi::GenericMethod ("setPageRanges", "@brief Virtual method void QPagedPaintDevice::setPageRanges(const QPageRanges &ranges)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setPageRanges_2383_0, &_call_cbs_setPageRanges_2383_0);
  methods += new qt_gsi::GenericMethod ("setPageRanges", "@hide", false, &_init_cbs_setPageRanges_2383_0, &_call_cbs_setPageRanges_2383_0, &_set_callback_cbs_setPageRanges_2383_0);
  methods += new qt_gsi::GenericMethod ("setPageSize", "@brief Virtual method bool QPagedPaintDevice::setPageSize(const QPageSize &pageSize)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setPageSize_2186_0, &_call_cbs_setPageSize_2186_0);
  methods += new qt_gsi::GenericMethod ("setPageSize", "@hide", false, &_init_cbs_setPageSize_2186_0, &_call_cbs_setPageSize_2186_0, &_set_callback_cbs_setPageSize_2186_0);
  methods += new qt_gsi::GenericMethod ("*sharedPainter", "@brief Virtual method QPainter *QPagedPaintDevice::sharedPainter()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_sharedPainter_c0_0, &_call_cbs_sharedPainter_c0_0);
  methods += new qt_gsi::GenericMethod ("*sharedPainter", "@hide", true, &_init_cbs_sharedPainter_c0_0, &_call_cbs_sharedPainter_c0_0, &_set_callback_cbs_sharedPainter_c0_0);
  return methods;
}

gsi::Class<QPagedPaintDevice_Adaptor> decl_QPagedPaintDevice_Adaptor (qtdecl_QPagedPaintDevice (), "QtGui", "QPagedPaintDevice",
  methods_QPagedPaintDevice_Adaptor (),
  "@qt\n@brief Binding of QPagedPaintDevice");

}


//  Implementation of the enum wrapper class for QPagedPaintDevice::PdfVersion
namespace qt_gsi
{

static gsi::Enum<QPagedPaintDevice::PdfVersion> decl_QPagedPaintDevice_PdfVersion_Enum ("QtGui", "QPagedPaintDevice_PdfVersion",
    gsi::enum_const ("PdfVersion_1_4", QPagedPaintDevice::PdfVersion_1_4, "@brief Enum constant QPagedPaintDevice::PdfVersion_1_4") +
    gsi::enum_const ("PdfVersion_A1b", QPagedPaintDevice::PdfVersion_A1b, "@brief Enum constant QPagedPaintDevice::PdfVersion_A1b") +
    gsi::enum_const ("PdfVersion_1_6", QPagedPaintDevice::PdfVersion_1_6, "@brief Enum constant QPagedPaintDevice::PdfVersion_1_6"),
  "@qt\n@brief This class represents the QPagedPaintDevice::PdfVersion enum");

static gsi::QFlagsClass<QPagedPaintDevice::PdfVersion > decl_QPagedPaintDevice_PdfVersion_Enums ("QtGui", "QPagedPaintDevice_QFlags_PdfVersion",
  "@qt\n@brief This class represents the QFlags<QPagedPaintDevice::PdfVersion> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPagedPaintDevice> inject_QPagedPaintDevice_PdfVersion_Enum_in_parent (decl_QPagedPaintDevice_PdfVersion_Enum.defs ());
static gsi::ClassExt<QPagedPaintDevice> decl_QPagedPaintDevice_PdfVersion_Enum_as_child (decl_QPagedPaintDevice_PdfVersion_Enum, "PdfVersion");
static gsi::ClassExt<QPagedPaintDevice> decl_QPagedPaintDevice_PdfVersion_Enums_as_child (decl_QPagedPaintDevice_PdfVersion_Enums, "QFlags_PdfVersion");

}


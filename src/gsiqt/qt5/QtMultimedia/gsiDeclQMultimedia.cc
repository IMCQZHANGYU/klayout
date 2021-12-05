
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
*  @file gsiDeclQMultimedia.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMultimedia>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace QMultimedia

class QMultimedia_Namespace { };

namespace gsi
{
gsi::Class<QMultimedia_Namespace> decl_QMultimedia_Namespace ("QtMultimedia", "QMultimedia",
  gsi::Methods(),
  "@qt\n@brief This class represents the QMultimedia namespace");
}


//  Implementation of the enum wrapper class for QMultimedia::AvailabilityStatus
namespace qt_gsi
{

static gsi::Enum<QMultimedia::AvailabilityStatus> decl_QMultimedia_AvailabilityStatus_Enum ("QtMultimedia", "QMultimedia_AvailabilityStatus",
    gsi::enum_const ("Available", QMultimedia::Available, "@brief Enum constant QMultimedia::Available") +
    gsi::enum_const ("ServiceMissing", QMultimedia::ServiceMissing, "@brief Enum constant QMultimedia::ServiceMissing") +
    gsi::enum_const ("Busy", QMultimedia::Busy, "@brief Enum constant QMultimedia::Busy") +
    gsi::enum_const ("ResourceError", QMultimedia::ResourceError, "@brief Enum constant QMultimedia::ResourceError"),
  "@qt\n@brief This class represents the QMultimedia::AvailabilityStatus enum");

static gsi::QFlagsClass<QMultimedia::AvailabilityStatus > decl_QMultimedia_AvailabilityStatus_Enums ("QtMultimedia", "QMultimedia_QFlags_AvailabilityStatus",
  "@qt\n@brief This class represents the QFlags<QMultimedia::AvailabilityStatus> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMultimedia_Namespace> inject_QMultimedia_AvailabilityStatus_Enum_in_parent (decl_QMultimedia_AvailabilityStatus_Enum.defs ());
static gsi::ClassExt<QMultimedia_Namespace> decl_QMultimedia_AvailabilityStatus_Enum_as_child (decl_QMultimedia_AvailabilityStatus_Enum, "AvailabilityStatus");
static gsi::ClassExt<QMultimedia_Namespace> decl_QMultimedia_AvailabilityStatus_Enums_as_child (decl_QMultimedia_AvailabilityStatus_Enums, "QFlags_AvailabilityStatus");

}


//  Implementation of the enum wrapper class for QMultimedia::EncodingMode
namespace qt_gsi
{

static gsi::Enum<QMultimedia::EncodingMode> decl_QMultimedia_EncodingMode_Enum ("QtMultimedia", "QMultimedia_EncodingMode",
    gsi::enum_const ("ConstantQualityEncoding", QMultimedia::ConstantQualityEncoding, "@brief Enum constant QMultimedia::ConstantQualityEncoding") +
    gsi::enum_const ("ConstantBitRateEncoding", QMultimedia::ConstantBitRateEncoding, "@brief Enum constant QMultimedia::ConstantBitRateEncoding") +
    gsi::enum_const ("AverageBitRateEncoding", QMultimedia::AverageBitRateEncoding, "@brief Enum constant QMultimedia::AverageBitRateEncoding") +
    gsi::enum_const ("TwoPassEncoding", QMultimedia::TwoPassEncoding, "@brief Enum constant QMultimedia::TwoPassEncoding"),
  "@qt\n@brief This class represents the QMultimedia::EncodingMode enum");

static gsi::QFlagsClass<QMultimedia::EncodingMode > decl_QMultimedia_EncodingMode_Enums ("QtMultimedia", "QMultimedia_QFlags_EncodingMode",
  "@qt\n@brief This class represents the QFlags<QMultimedia::EncodingMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMultimedia_Namespace> inject_QMultimedia_EncodingMode_Enum_in_parent (decl_QMultimedia_EncodingMode_Enum.defs ());
static gsi::ClassExt<QMultimedia_Namespace> decl_QMultimedia_EncodingMode_Enum_as_child (decl_QMultimedia_EncodingMode_Enum, "EncodingMode");
static gsi::ClassExt<QMultimedia_Namespace> decl_QMultimedia_EncodingMode_Enums_as_child (decl_QMultimedia_EncodingMode_Enums, "QFlags_EncodingMode");

}


//  Implementation of the enum wrapper class for QMultimedia::EncodingQuality
namespace qt_gsi
{

static gsi::Enum<QMultimedia::EncodingQuality> decl_QMultimedia_EncodingQuality_Enum ("QtMultimedia", "QMultimedia_EncodingQuality",
    gsi::enum_const ("VeryLowQuality", QMultimedia::VeryLowQuality, "@brief Enum constant QMultimedia::VeryLowQuality") +
    gsi::enum_const ("LowQuality", QMultimedia::LowQuality, "@brief Enum constant QMultimedia::LowQuality") +
    gsi::enum_const ("NormalQuality", QMultimedia::NormalQuality, "@brief Enum constant QMultimedia::NormalQuality") +
    gsi::enum_const ("HighQuality", QMultimedia::HighQuality, "@brief Enum constant QMultimedia::HighQuality") +
    gsi::enum_const ("VeryHighQuality", QMultimedia::VeryHighQuality, "@brief Enum constant QMultimedia::VeryHighQuality"),
  "@qt\n@brief This class represents the QMultimedia::EncodingQuality enum");

static gsi::QFlagsClass<QMultimedia::EncodingQuality > decl_QMultimedia_EncodingQuality_Enums ("QtMultimedia", "QMultimedia_QFlags_EncodingQuality",
  "@qt\n@brief This class represents the QFlags<QMultimedia::EncodingQuality> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMultimedia_Namespace> inject_QMultimedia_EncodingQuality_Enum_in_parent (decl_QMultimedia_EncodingQuality_Enum.defs ());
static gsi::ClassExt<QMultimedia_Namespace> decl_QMultimedia_EncodingQuality_Enum_as_child (decl_QMultimedia_EncodingQuality_Enum, "EncodingQuality");
static gsi::ClassExt<QMultimedia_Namespace> decl_QMultimedia_EncodingQuality_Enums_as_child (decl_QMultimedia_EncodingQuality_Enums, "QFlags_EncodingQuality");

}


//  Implementation of the enum wrapper class for QMultimedia::SupportEstimate
namespace qt_gsi
{

static gsi::Enum<QMultimedia::SupportEstimate> decl_QMultimedia_SupportEstimate_Enum ("QtMultimedia", "QMultimedia_SupportEstimate",
    gsi::enum_const ("NotSupported", QMultimedia::NotSupported, "@brief Enum constant QMultimedia::NotSupported") +
    gsi::enum_const ("MaybeSupported", QMultimedia::MaybeSupported, "@brief Enum constant QMultimedia::MaybeSupported") +
    gsi::enum_const ("ProbablySupported", QMultimedia::ProbablySupported, "@brief Enum constant QMultimedia::ProbablySupported") +
    gsi::enum_const ("PreferredService", QMultimedia::PreferredService, "@brief Enum constant QMultimedia::PreferredService"),
  "@qt\n@brief This class represents the QMultimedia::SupportEstimate enum");

static gsi::QFlagsClass<QMultimedia::SupportEstimate > decl_QMultimedia_SupportEstimate_Enums ("QtMultimedia", "QMultimedia_QFlags_SupportEstimate",
  "@qt\n@brief This class represents the QFlags<QMultimedia::SupportEstimate> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMultimedia_Namespace> inject_QMultimedia_SupportEstimate_Enum_in_parent (decl_QMultimedia_SupportEstimate_Enum.defs ());
static gsi::ClassExt<QMultimedia_Namespace> decl_QMultimedia_SupportEstimate_Enum_as_child (decl_QMultimedia_SupportEstimate_Enum, "SupportEstimate");
static gsi::ClassExt<QMultimedia_Namespace> decl_QMultimedia_SupportEstimate_Enums_as_child (decl_QMultimedia_SupportEstimate_Enums, "QFlags_SupportEstimate");

}


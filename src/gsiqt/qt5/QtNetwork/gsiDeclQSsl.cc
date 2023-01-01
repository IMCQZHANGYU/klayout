
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
*  @file gsiDeclQSsl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSsl>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace QSsl

class QSsl_Namespace { };

namespace gsi
{
gsi::Class<QSsl_Namespace> decl_QSsl_Namespace ("QtNetwork", "QSsl",
  gsi::Methods(),
  "@qt\n@brief This class represents the QSsl namespace");
}


//  Implementation of the enum wrapper class for QSsl::AlternativeNameEntryType
namespace qt_gsi
{

static gsi::Enum<QSsl::AlternativeNameEntryType> decl_QSsl_AlternativeNameEntryType_Enum ("QtNetwork", "QSsl_AlternativeNameEntryType",
    gsi::enum_const ("EmailEntry", QSsl::EmailEntry, "@brief Enum constant QSsl::EmailEntry") +
    gsi::enum_const ("DnsEntry", QSsl::DnsEntry, "@brief Enum constant QSsl::DnsEntry"),
  "@qt\n@brief This class represents the QSsl::AlternativeNameEntryType enum");

static gsi::QFlagsClass<QSsl::AlternativeNameEntryType > decl_QSsl_AlternativeNameEntryType_Enums ("QtNetwork", "QSsl_QFlags_AlternativeNameEntryType",
  "@qt\n@brief This class represents the QFlags<QSsl::AlternativeNameEntryType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSsl_Namespace> inject_QSsl_AlternativeNameEntryType_Enum_in_parent (decl_QSsl_AlternativeNameEntryType_Enum.defs ());
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_AlternativeNameEntryType_Enum_as_child (decl_QSsl_AlternativeNameEntryType_Enum, "AlternativeNameEntryType");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_AlternativeNameEntryType_Enums_as_child (decl_QSsl_AlternativeNameEntryType_Enums, "QFlags_AlternativeNameEntryType");

}


//  Implementation of the enum wrapper class for QSsl::EncodingFormat
namespace qt_gsi
{

static gsi::Enum<QSsl::EncodingFormat> decl_QSsl_EncodingFormat_Enum ("QtNetwork", "QSsl_EncodingFormat",
    gsi::enum_const ("Pem", QSsl::Pem, "@brief Enum constant QSsl::Pem") +
    gsi::enum_const ("Der", QSsl::Der, "@brief Enum constant QSsl::Der"),
  "@qt\n@brief This class represents the QSsl::EncodingFormat enum");

static gsi::QFlagsClass<QSsl::EncodingFormat > decl_QSsl_EncodingFormat_Enums ("QtNetwork", "QSsl_QFlags_EncodingFormat",
  "@qt\n@brief This class represents the QFlags<QSsl::EncodingFormat> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSsl_Namespace> inject_QSsl_EncodingFormat_Enum_in_parent (decl_QSsl_EncodingFormat_Enum.defs ());
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_EncodingFormat_Enum_as_child (decl_QSsl_EncodingFormat_Enum, "EncodingFormat");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_EncodingFormat_Enums_as_child (decl_QSsl_EncodingFormat_Enums, "QFlags_EncodingFormat");

}


//  Implementation of the enum wrapper class for QSsl::KeyAlgorithm
namespace qt_gsi
{

static gsi::Enum<QSsl::KeyAlgorithm> decl_QSsl_KeyAlgorithm_Enum ("QtNetwork", "QSsl_KeyAlgorithm",
    gsi::enum_const ("Opaque", QSsl::Opaque, "@brief Enum constant QSsl::Opaque") +
    gsi::enum_const ("Rsa", QSsl::Rsa, "@brief Enum constant QSsl::Rsa") +
    gsi::enum_const ("Dsa", QSsl::Dsa, "@brief Enum constant QSsl::Dsa") +
    gsi::enum_const ("Ec", QSsl::Ec, "@brief Enum constant QSsl::Ec"),
  "@qt\n@brief This class represents the QSsl::KeyAlgorithm enum");

static gsi::QFlagsClass<QSsl::KeyAlgorithm > decl_QSsl_KeyAlgorithm_Enums ("QtNetwork", "QSsl_QFlags_KeyAlgorithm",
  "@qt\n@brief This class represents the QFlags<QSsl::KeyAlgorithm> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSsl_Namespace> inject_QSsl_KeyAlgorithm_Enum_in_parent (decl_QSsl_KeyAlgorithm_Enum.defs ());
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_KeyAlgorithm_Enum_as_child (decl_QSsl_KeyAlgorithm_Enum, "KeyAlgorithm");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_KeyAlgorithm_Enums_as_child (decl_QSsl_KeyAlgorithm_Enums, "QFlags_KeyAlgorithm");

}


//  Implementation of the enum wrapper class for QSsl::KeyType
namespace qt_gsi
{

static gsi::Enum<QSsl::KeyType> decl_QSsl_KeyType_Enum ("QtNetwork", "QSsl_KeyType",
    gsi::enum_const ("PrivateKey", QSsl::PrivateKey, "@brief Enum constant QSsl::PrivateKey") +
    gsi::enum_const ("PublicKey", QSsl::PublicKey, "@brief Enum constant QSsl::PublicKey"),
  "@qt\n@brief This class represents the QSsl::KeyType enum");

static gsi::QFlagsClass<QSsl::KeyType > decl_QSsl_KeyType_Enums ("QtNetwork", "QSsl_QFlags_KeyType",
  "@qt\n@brief This class represents the QFlags<QSsl::KeyType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSsl_Namespace> inject_QSsl_KeyType_Enum_in_parent (decl_QSsl_KeyType_Enum.defs ());
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_KeyType_Enum_as_child (decl_QSsl_KeyType_Enum, "KeyType");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_KeyType_Enums_as_child (decl_QSsl_KeyType_Enums, "QFlags_KeyType");

}


//  Implementation of the enum wrapper class for QSsl::SslOption
namespace qt_gsi
{

static gsi::Enum<QSsl::SslOption> decl_QSsl_SslOption_Enum ("QtNetwork", "QSsl_SslOption",
    gsi::enum_const ("SslOptionDisableEmptyFragments", QSsl::SslOptionDisableEmptyFragments, "@brief Enum constant QSsl::SslOptionDisableEmptyFragments") +
    gsi::enum_const ("SslOptionDisableSessionTickets", QSsl::SslOptionDisableSessionTickets, "@brief Enum constant QSsl::SslOptionDisableSessionTickets") +
    gsi::enum_const ("SslOptionDisableCompression", QSsl::SslOptionDisableCompression, "@brief Enum constant QSsl::SslOptionDisableCompression") +
    gsi::enum_const ("SslOptionDisableServerNameIndication", QSsl::SslOptionDisableServerNameIndication, "@brief Enum constant QSsl::SslOptionDisableServerNameIndication") +
    gsi::enum_const ("SslOptionDisableLegacyRenegotiation", QSsl::SslOptionDisableLegacyRenegotiation, "@brief Enum constant QSsl::SslOptionDisableLegacyRenegotiation") +
    gsi::enum_const ("SslOptionDisableSessionSharing", QSsl::SslOptionDisableSessionSharing, "@brief Enum constant QSsl::SslOptionDisableSessionSharing") +
    gsi::enum_const ("SslOptionDisableSessionPersistence", QSsl::SslOptionDisableSessionPersistence, "@brief Enum constant QSsl::SslOptionDisableSessionPersistence"),
  "@qt\n@brief This class represents the QSsl::SslOption enum");

static gsi::QFlagsClass<QSsl::SslOption > decl_QSsl_SslOption_Enums ("QtNetwork", "QSsl_QFlags_SslOption",
  "@qt\n@brief This class represents the QFlags<QSsl::SslOption> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSsl_Namespace> inject_QSsl_SslOption_Enum_in_parent (decl_QSsl_SslOption_Enum.defs ());
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_SslOption_Enum_as_child (decl_QSsl_SslOption_Enum, "SslOption");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_SslOption_Enums_as_child (decl_QSsl_SslOption_Enums, "QFlags_SslOption");

}


//  Implementation of the enum wrapper class for QSsl::SslProtocol
namespace qt_gsi
{

static gsi::Enum<QSsl::SslProtocol> decl_QSsl_SslProtocol_Enum ("QtNetwork", "QSsl_SslProtocol",
    gsi::enum_const ("SslV3", QSsl::SslV3, "@brief Enum constant QSsl::SslV3") +
    gsi::enum_const ("SslV2", QSsl::SslV2, "@brief Enum constant QSsl::SslV2") +
    gsi::enum_const ("TlsV1_0", QSsl::TlsV1_0, "@brief Enum constant QSsl::TlsV1_0") +
    gsi::enum_const ("TlsV1_1", QSsl::TlsV1_1, "@brief Enum constant QSsl::TlsV1_1") +
    gsi::enum_const ("TlsV1_2", QSsl::TlsV1_2, "@brief Enum constant QSsl::TlsV1_2") +
    gsi::enum_const ("AnyProtocol", QSsl::AnyProtocol, "@brief Enum constant QSsl::AnyProtocol") +
    gsi::enum_const ("TlsV1SslV3", QSsl::TlsV1SslV3, "@brief Enum constant QSsl::TlsV1SslV3") +
    gsi::enum_const ("SecureProtocols", QSsl::SecureProtocols, "@brief Enum constant QSsl::SecureProtocols") +
    gsi::enum_const ("TlsV1_0OrLater", QSsl::TlsV1_0OrLater, "@brief Enum constant QSsl::TlsV1_0OrLater") +
    gsi::enum_const ("TlsV1_1OrLater", QSsl::TlsV1_1OrLater, "@brief Enum constant QSsl::TlsV1_1OrLater") +
    gsi::enum_const ("TlsV1_2OrLater", QSsl::TlsV1_2OrLater, "@brief Enum constant QSsl::TlsV1_2OrLater") +
    gsi::enum_const ("UnknownProtocol", QSsl::UnknownProtocol, "@brief Enum constant QSsl::UnknownProtocol"),
  "@qt\n@brief This class represents the QSsl::SslProtocol enum");

static gsi::QFlagsClass<QSsl::SslProtocol > decl_QSsl_SslProtocol_Enums ("QtNetwork", "QSsl_QFlags_SslProtocol",
  "@qt\n@brief This class represents the QFlags<QSsl::SslProtocol> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSsl_Namespace> inject_QSsl_SslProtocol_Enum_in_parent (decl_QSsl_SslProtocol_Enum.defs ());
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_SslProtocol_Enum_as_child (decl_QSsl_SslProtocol_Enum, "SslProtocol");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_SslProtocol_Enums_as_child (decl_QSsl_SslProtocol_Enums, "QFlags_SslProtocol");

}


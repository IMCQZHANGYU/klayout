
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


//  Implementation of the enum wrapper class for QSsl::AlertLevel
namespace qt_gsi
{

static gsi::Enum<QSsl::AlertLevel> decl_QSsl_AlertLevel_Enum ("QtNetwork", "QSsl_AlertLevel",
    gsi::enum_const ("Warning", QSsl::AlertLevel::Warning, "@brief Enum constant QSsl::AlertLevel::Warning") +
    gsi::enum_const ("Fatal", QSsl::AlertLevel::Fatal, "@brief Enum constant QSsl::AlertLevel::Fatal") +
    gsi::enum_const ("Unknown", QSsl::AlertLevel::Unknown, "@brief Enum constant QSsl::AlertLevel::Unknown"),
  "@qt\n@brief This class represents the QSsl::AlertLevel enum");

static gsi::QFlagsClass<QSsl::AlertLevel > decl_QSsl_AlertLevel_Enums ("QtNetwork", "QSsl_QFlags_AlertLevel",
  "@qt\n@brief This class represents the QFlags<QSsl::AlertLevel> flag set");

static gsi::ClassExt<QSsl_Namespace> decl_QSsl_AlertLevel_Enum_as_child (decl_QSsl_AlertLevel_Enum, "AlertLevel");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_AlertLevel_Enums_as_child (decl_QSsl_AlertLevel_Enums, "QFlags_AlertLevel");

}


//  Implementation of the enum wrapper class for QSsl::AlertType
namespace qt_gsi
{

static gsi::Enum<QSsl::AlertType> decl_QSsl_AlertType_Enum ("QtNetwork", "QSsl_AlertType",
    gsi::enum_const ("CloseNotify", QSsl::AlertType::CloseNotify, "@brief Enum constant QSsl::AlertType::CloseNotify") +
    gsi::enum_const ("UnexpectedMessage", QSsl::AlertType::UnexpectedMessage, "@brief Enum constant QSsl::AlertType::UnexpectedMessage") +
    gsi::enum_const ("BadRecordMac", QSsl::AlertType::BadRecordMac, "@brief Enum constant QSsl::AlertType::BadRecordMac") +
    gsi::enum_const ("RecordOverflow", QSsl::AlertType::RecordOverflow, "@brief Enum constant QSsl::AlertType::RecordOverflow") +
    gsi::enum_const ("DecompressionFailure", QSsl::AlertType::DecompressionFailure, "@brief Enum constant QSsl::AlertType::DecompressionFailure") +
    gsi::enum_const ("HandshakeFailure", QSsl::AlertType::HandshakeFailure, "@brief Enum constant QSsl::AlertType::HandshakeFailure") +
    gsi::enum_const ("NoCertificate", QSsl::AlertType::NoCertificate, "@brief Enum constant QSsl::AlertType::NoCertificate") +
    gsi::enum_const ("BadCertificate", QSsl::AlertType::BadCertificate, "@brief Enum constant QSsl::AlertType::BadCertificate") +
    gsi::enum_const ("UnsupportedCertificate", QSsl::AlertType::UnsupportedCertificate, "@brief Enum constant QSsl::AlertType::UnsupportedCertificate") +
    gsi::enum_const ("CertificateRevoked", QSsl::AlertType::CertificateRevoked, "@brief Enum constant QSsl::AlertType::CertificateRevoked") +
    gsi::enum_const ("CertificateExpired", QSsl::AlertType::CertificateExpired, "@brief Enum constant QSsl::AlertType::CertificateExpired") +
    gsi::enum_const ("CertificateUnknown", QSsl::AlertType::CertificateUnknown, "@brief Enum constant QSsl::AlertType::CertificateUnknown") +
    gsi::enum_const ("IllegalParameter", QSsl::AlertType::IllegalParameter, "@brief Enum constant QSsl::AlertType::IllegalParameter") +
    gsi::enum_const ("UnknownCa", QSsl::AlertType::UnknownCa, "@brief Enum constant QSsl::AlertType::UnknownCa") +
    gsi::enum_const ("AccessDenied", QSsl::AlertType::AccessDenied, "@brief Enum constant QSsl::AlertType::AccessDenied") +
    gsi::enum_const ("DecodeError", QSsl::AlertType::DecodeError, "@brief Enum constant QSsl::AlertType::DecodeError") +
    gsi::enum_const ("DecryptError", QSsl::AlertType::DecryptError, "@brief Enum constant QSsl::AlertType::DecryptError") +
    gsi::enum_const ("ExportRestriction", QSsl::AlertType::ExportRestriction, "@brief Enum constant QSsl::AlertType::ExportRestriction") +
    gsi::enum_const ("ProtocolVersion", QSsl::AlertType::ProtocolVersion, "@brief Enum constant QSsl::AlertType::ProtocolVersion") +
    gsi::enum_const ("InsufficientSecurity", QSsl::AlertType::InsufficientSecurity, "@brief Enum constant QSsl::AlertType::InsufficientSecurity") +
    gsi::enum_const ("InternalError", QSsl::AlertType::InternalError, "@brief Enum constant QSsl::AlertType::InternalError") +
    gsi::enum_const ("InappropriateFallback", QSsl::AlertType::InappropriateFallback, "@brief Enum constant QSsl::AlertType::InappropriateFallback") +
    gsi::enum_const ("UserCancelled", QSsl::AlertType::UserCancelled, "@brief Enum constant QSsl::AlertType::UserCancelled") +
    gsi::enum_const ("NoRenegotiation", QSsl::AlertType::NoRenegotiation, "@brief Enum constant QSsl::AlertType::NoRenegotiation") +
    gsi::enum_const ("MissingExtension", QSsl::AlertType::MissingExtension, "@brief Enum constant QSsl::AlertType::MissingExtension") +
    gsi::enum_const ("UnsupportedExtension", QSsl::AlertType::UnsupportedExtension, "@brief Enum constant QSsl::AlertType::UnsupportedExtension") +
    gsi::enum_const ("CertificateUnobtainable", QSsl::AlertType::CertificateUnobtainable, "@brief Enum constant QSsl::AlertType::CertificateUnobtainable") +
    gsi::enum_const ("UnrecognizedName", QSsl::AlertType::UnrecognizedName, "@brief Enum constant QSsl::AlertType::UnrecognizedName") +
    gsi::enum_const ("BadCertificateStatusResponse", QSsl::AlertType::BadCertificateStatusResponse, "@brief Enum constant QSsl::AlertType::BadCertificateStatusResponse") +
    gsi::enum_const ("BadCertificateHashValue", QSsl::AlertType::BadCertificateHashValue, "@brief Enum constant QSsl::AlertType::BadCertificateHashValue") +
    gsi::enum_const ("UnknownPskIdentity", QSsl::AlertType::UnknownPskIdentity, "@brief Enum constant QSsl::AlertType::UnknownPskIdentity") +
    gsi::enum_const ("CertificateRequired", QSsl::AlertType::CertificateRequired, "@brief Enum constant QSsl::AlertType::CertificateRequired") +
    gsi::enum_const ("NoApplicationProtocol", QSsl::AlertType::NoApplicationProtocol, "@brief Enum constant QSsl::AlertType::NoApplicationProtocol") +
    gsi::enum_const ("UnknownAlertMessage", QSsl::AlertType::UnknownAlertMessage, "@brief Enum constant QSsl::AlertType::UnknownAlertMessage"),
  "@qt\n@brief This class represents the QSsl::AlertType enum");

static gsi::QFlagsClass<QSsl::AlertType > decl_QSsl_AlertType_Enums ("QtNetwork", "QSsl_QFlags_AlertType",
  "@qt\n@brief This class represents the QFlags<QSsl::AlertType> flag set");

static gsi::ClassExt<QSsl_Namespace> decl_QSsl_AlertType_Enum_as_child (decl_QSsl_AlertType_Enum, "AlertType");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_AlertType_Enums_as_child (decl_QSsl_AlertType_Enums, "QFlags_AlertType");

}


//  Implementation of the enum wrapper class for QSsl::AlternativeNameEntryType
namespace qt_gsi
{

static gsi::Enum<QSsl::AlternativeNameEntryType> decl_QSsl_AlternativeNameEntryType_Enum ("QtNetwork", "QSsl_AlternativeNameEntryType",
    gsi::enum_const ("EmailEntry", QSsl::EmailEntry, "@brief Enum constant QSsl::EmailEntry") +
    gsi::enum_const ("DnsEntry", QSsl::DnsEntry, "@brief Enum constant QSsl::DnsEntry") +
    gsi::enum_const ("IpAddressEntry", QSsl::IpAddressEntry, "@brief Enum constant QSsl::IpAddressEntry"),
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


//  Implementation of the enum wrapper class for QSsl::ImplementedClass
namespace qt_gsi
{

static gsi::Enum<QSsl::ImplementedClass> decl_QSsl_ImplementedClass_Enum ("QtNetwork", "QSsl_ImplementedClass",
    gsi::enum_const ("Key", QSsl::ImplementedClass::Key, "@brief Enum constant QSsl::ImplementedClass::Key") +
    gsi::enum_const ("Certificate", QSsl::ImplementedClass::Certificate, "@brief Enum constant QSsl::ImplementedClass::Certificate") +
    gsi::enum_const ("Socket", QSsl::ImplementedClass::Socket, "@brief Enum constant QSsl::ImplementedClass::Socket") +
    gsi::enum_const ("DiffieHellman", QSsl::ImplementedClass::DiffieHellman, "@brief Enum constant QSsl::ImplementedClass::DiffieHellman") +
    gsi::enum_const ("EllipticCurve", QSsl::ImplementedClass::EllipticCurve, "@brief Enum constant QSsl::ImplementedClass::EllipticCurve") +
    gsi::enum_const ("Dtls", QSsl::ImplementedClass::Dtls, "@brief Enum constant QSsl::ImplementedClass::Dtls") +
    gsi::enum_const ("DtlsCookie", QSsl::ImplementedClass::DtlsCookie, "@brief Enum constant QSsl::ImplementedClass::DtlsCookie"),
  "@qt\n@brief This class represents the QSsl::ImplementedClass enum");

static gsi::QFlagsClass<QSsl::ImplementedClass > decl_QSsl_ImplementedClass_Enums ("QtNetwork", "QSsl_QFlags_ImplementedClass",
  "@qt\n@brief This class represents the QFlags<QSsl::ImplementedClass> flag set");

static gsi::ClassExt<QSsl_Namespace> decl_QSsl_ImplementedClass_Enum_as_child (decl_QSsl_ImplementedClass_Enum, "ImplementedClass");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_ImplementedClass_Enums_as_child (decl_QSsl_ImplementedClass_Enums, "QFlags_ImplementedClass");

}


//  Implementation of the enum wrapper class for QSsl::KeyAlgorithm
namespace qt_gsi
{

static gsi::Enum<QSsl::KeyAlgorithm> decl_QSsl_KeyAlgorithm_Enum ("QtNetwork", "QSsl_KeyAlgorithm",
    gsi::enum_const ("Opaque", QSsl::Opaque, "@brief Enum constant QSsl::Opaque") +
    gsi::enum_const ("Rsa", QSsl::Rsa, "@brief Enum constant QSsl::Rsa") +
    gsi::enum_const ("Dsa", QSsl::Dsa, "@brief Enum constant QSsl::Dsa") +
    gsi::enum_const ("Ec", QSsl::Ec, "@brief Enum constant QSsl::Ec") +
    gsi::enum_const ("Dh", QSsl::Dh, "@brief Enum constant QSsl::Dh"),
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
    gsi::enum_const ("SslOptionDisableSessionPersistence", QSsl::SslOptionDisableSessionPersistence, "@brief Enum constant QSsl::SslOptionDisableSessionPersistence") +
    gsi::enum_const ("SslOptionDisableServerCipherPreference", QSsl::SslOptionDisableServerCipherPreference, "@brief Enum constant QSsl::SslOptionDisableServerCipherPreference"),
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
    gsi::enum_const ("TlsV1_0", QSsl::TlsV1_0, "@brief Enum constant QSsl::TlsV1_0") +
    gsi::enum_const ("TlsV1_1", QSsl::TlsV1_1, "@brief Enum constant QSsl::TlsV1_1") +
    gsi::enum_const ("TlsV1_2", QSsl::TlsV1_2, "@brief Enum constant QSsl::TlsV1_2") +
    gsi::enum_const ("AnyProtocol", QSsl::AnyProtocol, "@brief Enum constant QSsl::AnyProtocol") +
    gsi::enum_const ("SecureProtocols", QSsl::SecureProtocols, "@brief Enum constant QSsl::SecureProtocols") +
    gsi::enum_const ("TlsV1_0OrLater", QSsl::TlsV1_0OrLater, "@brief Enum constant QSsl::TlsV1_0OrLater") +
    gsi::enum_const ("TlsV1_1OrLater", QSsl::TlsV1_1OrLater, "@brief Enum constant QSsl::TlsV1_1OrLater") +
    gsi::enum_const ("TlsV1_2OrLater", QSsl::TlsV1_2OrLater, "@brief Enum constant QSsl::TlsV1_2OrLater") +
    gsi::enum_const ("DtlsV1_0", QSsl::DtlsV1_0, "@brief Enum constant QSsl::DtlsV1_0") +
    gsi::enum_const ("DtlsV1_0OrLater", QSsl::DtlsV1_0OrLater, "@brief Enum constant QSsl::DtlsV1_0OrLater") +
    gsi::enum_const ("DtlsV1_2", QSsl::DtlsV1_2, "@brief Enum constant QSsl::DtlsV1_2") +
    gsi::enum_const ("DtlsV1_2OrLater", QSsl::DtlsV1_2OrLater, "@brief Enum constant QSsl::DtlsV1_2OrLater") +
    gsi::enum_const ("TlsV1_3", QSsl::TlsV1_3, "@brief Enum constant QSsl::TlsV1_3") +
    gsi::enum_const ("TlsV1_3OrLater", QSsl::TlsV1_3OrLater, "@brief Enum constant QSsl::TlsV1_3OrLater") +
    gsi::enum_const ("UnknownProtocol", QSsl::UnknownProtocol, "@brief Enum constant QSsl::UnknownProtocol"),
  "@qt\n@brief This class represents the QSsl::SslProtocol enum");

static gsi::QFlagsClass<QSsl::SslProtocol > decl_QSsl_SslProtocol_Enums ("QtNetwork", "QSsl_QFlags_SslProtocol",
  "@qt\n@brief This class represents the QFlags<QSsl::SslProtocol> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSsl_Namespace> inject_QSsl_SslProtocol_Enum_in_parent (decl_QSsl_SslProtocol_Enum.defs ());
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_SslProtocol_Enum_as_child (decl_QSsl_SslProtocol_Enum, "SslProtocol");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_SslProtocol_Enums_as_child (decl_QSsl_SslProtocol_Enums, "QFlags_SslProtocol");

}


//  Implementation of the enum wrapper class for QSsl::SupportedFeature
namespace qt_gsi
{

static gsi::Enum<QSsl::SupportedFeature> decl_QSsl_SupportedFeature_Enum ("QtNetwork", "QSsl_SupportedFeature",
    gsi::enum_const ("CertificateVerification", QSsl::SupportedFeature::CertificateVerification, "@brief Enum constant QSsl::SupportedFeature::CertificateVerification") +
    gsi::enum_const ("ClientSideAlpn", QSsl::SupportedFeature::ClientSideAlpn, "@brief Enum constant QSsl::SupportedFeature::ClientSideAlpn") +
    gsi::enum_const ("ServerSideAlpn", QSsl::SupportedFeature::ServerSideAlpn, "@brief Enum constant QSsl::SupportedFeature::ServerSideAlpn") +
    gsi::enum_const ("Ocsp", QSsl::SupportedFeature::Ocsp, "@brief Enum constant QSsl::SupportedFeature::Ocsp") +
    gsi::enum_const ("Psk", QSsl::SupportedFeature::Psk, "@brief Enum constant QSsl::SupportedFeature::Psk") +
    gsi::enum_const ("SessionTicket", QSsl::SupportedFeature::SessionTicket, "@brief Enum constant QSsl::SupportedFeature::SessionTicket") +
    gsi::enum_const ("Alerts", QSsl::SupportedFeature::Alerts, "@brief Enum constant QSsl::SupportedFeature::Alerts"),
  "@qt\n@brief This class represents the QSsl::SupportedFeature enum");

static gsi::QFlagsClass<QSsl::SupportedFeature > decl_QSsl_SupportedFeature_Enums ("QtNetwork", "QSsl_QFlags_SupportedFeature",
  "@qt\n@brief This class represents the QFlags<QSsl::SupportedFeature> flag set");

static gsi::ClassExt<QSsl_Namespace> decl_QSsl_SupportedFeature_Enum_as_child (decl_QSsl_SupportedFeature_Enum, "SupportedFeature");
static gsi::ClassExt<QSsl_Namespace> decl_QSsl_SupportedFeature_Enums_as_child (decl_QSsl_SupportedFeature_Enums, "QFlags_SupportedFeature");

}


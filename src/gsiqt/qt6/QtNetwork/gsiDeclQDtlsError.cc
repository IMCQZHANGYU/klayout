
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
*  @file gsiDeclQDtlsError.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDtlsClientVerifier>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// enum QDtlsError


//  Implementation of the enum wrapper class for ::QDtlsError
namespace qt_gsi
{

static gsi::Enum<QDtlsError> decl_QDtlsError_Enum ("QtNetwork", "QDtlsError",
    gsi::enum_const ("NoError", QDtlsError::NoError, "@brief Enum constant QDtlsError::NoError") +
    gsi::enum_const ("InvalidInputParameters", QDtlsError::InvalidInputParameters, "@brief Enum constant QDtlsError::InvalidInputParameters") +
    gsi::enum_const ("InvalidOperation", QDtlsError::InvalidOperation, "@brief Enum constant QDtlsError::InvalidOperation") +
    gsi::enum_const ("UnderlyingSocketError", QDtlsError::UnderlyingSocketError, "@brief Enum constant QDtlsError::UnderlyingSocketError") +
    gsi::enum_const ("RemoteClosedConnectionError", QDtlsError::RemoteClosedConnectionError, "@brief Enum constant QDtlsError::RemoteClosedConnectionError") +
    gsi::enum_const ("PeerVerificationError", QDtlsError::PeerVerificationError, "@brief Enum constant QDtlsError::PeerVerificationError") +
    gsi::enum_const ("TlsInitializationError", QDtlsError::TlsInitializationError, "@brief Enum constant QDtlsError::TlsInitializationError") +
    gsi::enum_const ("TlsFatalError", QDtlsError::TlsFatalError, "@brief Enum constant QDtlsError::TlsFatalError") +
    gsi::enum_const ("TlsNonFatalError", QDtlsError::TlsNonFatalError, "@brief Enum constant QDtlsError::TlsNonFatalError"),
  "@qt\n@brief This class represents the QDtlsError enum");

static gsi::QFlagsClass<QDtlsError > decl_QDtlsError_Enums ("QtNetwork", "QFlags_QDtlsError",
  "@qt\n@brief This class represents the QFlags<QDtlsError> flag set");

}


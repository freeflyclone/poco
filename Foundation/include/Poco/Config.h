//
// Config.h
//
// $Id: //poco/1.4/Foundation/include/Poco/Config.h#3 $
//
// Library: Foundation
// Package: Core
// Module:  Foundation
//
// Feature configuration for the POCO libraries.
//
// Copyright (c) 2006-2010, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef Foundation_Config_INCLUDED
#define Foundation_Config_INCLUDED


// Define to enable Windows Unicode (UTF-8) support
#define POCO_WIN32_UTF8

// Define to enable C++11 support
//#define POCO_ENABLE_CPP11


// Define to disable implicit linking
// #define POCO_NO_AUTOMATIC_LIBS


// Define to disable FPEnvironment support
// #define POCO_NO_FPENVIRONMENT


// Define if std::wstring is not available
// #define POCO_NO_WSTRING


// Define to disable shared memory
// #define POCO_NO_SHAREDMEMORY


// Define if no <locale> header is available (such as on WinCE)
// #define POCO_NO_LOCALE


// Define to desired default thread stack size
// Zero means OS default
#ifndef POCO_THREAD_STACK_SIZE
	#define POCO_THREAD_STACK_SIZE 0
#endif


// Define to override system-provided
// minimum thread priority value on POSIX
// platforms (returned by Poco::Thread::getMinOSPriority()).
// #define POCO_THREAD_PRIORITY_MIN 0


// Define to override system-provided
// maximum thread priority value on POSIX
// platforms (returned by Poco::Thread::getMaxOSPriority()).
// #define POCO_THREAD_PRIORITY_MAX 31


// Define to disable small object optimization.
// If not defined, Any and Dynamic::Var (and similar
// optimization candidates) will be auto-allocated on the
// stack in cases when value holder fits into .
// #define POCO_NO_SOO

// Following are options to remove certain features
// to reduce library/executable size for smaller
// embedded platforms. By enabling these options,
// the size of a statically executable can be
// reduced by a few 100 Kbytes.


// No automatic registration of FileChannel in
// LoggingFactory - avoids FileChannel and friends 
// being linked to executable.
// #define POCO_NO_FILECHANNEL


// No automatic registration of SplitterChannel in
// LoggingFactory - avoids SplitterChannel being
// linked to executable.
// #define POCO_NO_SPLITTERCHANNEL


// No automatic registration of SyslogChannel in
// LoggingFactory - avoids SyslogChannel being
// linked to executable on Unix/Linux systems.
// #define POCO_NO_SYSLOGCHANNEL


// Define to enable MSVC secure warnings
// #define POCO_MSVC_SECURE_WARNINGS


// No support for INI file configurations in
// Poco::Util::Application.
// #define POCO_UTIL_NO_INIFILECONFIGURATION


// No support for JSON configuration in 
// Poco::Util::Application. Avoids linking of JSON
// library and saves a few 100 Kbytes.
// #define POCO_UTIL_NO_JSONCONFIGURATION


// No support for XML configuration in 
// Poco::Util::Application. Avoids linking of XML
// library and saves a few 100 Kbytes.
// #define POCO_UTIL_NO_XMLCONFIGURATION


// No IPv6 support
// Define to disable IPv6
// #define POCO_NET_NO_IPv6


// Windows CE has no locale support
#if defined(_WIN32_WCE)
	#define POCO_NO_LOCALE
#endif


#endif // Foundation_Config_INCLUDED

/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is [Open Source Virtual Machine.].
 *
 * The Initial Developer of the Original Code is
 * Adobe System Incorporated.
 * Portions created by the Initial Developer are Copyright (C) 1993-2006
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *   Adobe AS3 Team
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */


#ifndef __GCTypes__
#define __GCTypes__

#ifdef _MAC
#include <stdint.h>
#endif

#if defined(HAVE_VISIBILITY_ATTRIBUTE)
#define MMGC_VISIBILITY_DEFAULT __attribute__ ((visibility ("default")))
#else
#define MMGC_VISIBILITY_DEFAULT
#endif

#ifdef WIN32
#define MMGC_EXPORT __declspec(dllexport)
#define MMGC_IMPORT __declspec(dllimport)
#else
#define MMGC_EXPORT MMGC_VISIBILITY_DEFAULT
#define MMGC_IMPORT MMGC_VISIBILITY_DEFAULT
#endif

// If we're not making a MMgc DLL, MMGC_API is a no-op
#ifndef MMGC_DLL
#define MMGC_API
#else
#ifdef MMGC_IMPL
#define MMGC_API MMGC_EXPORT
#else
#define MMGC_API MMGC_IMPORT
#endif
#endif // MMGC_DLL

namespace MMgc
{
	#ifdef _MSC_VER
	typedef __int64          int64;
	typedef __int64          sint64;
	typedef unsigned __int64 uint64;
	#elif defined(_MAC)
	typedef int64_t          int64;
	typedef int64_t          sint64;
	typedef uint64_t         uint64;
	#else
	typedef long long          int64;
	typedef long long          sint64;
	typedef unsigned long long         uint64;
	#endif

	typedef unsigned int  uint32;
	typedef signed   int  int32;
	
	typedef unsigned short uint16;
	typedef signed   short int16;
	
	typedef unsigned char  uint8;
	typedef signed   char  int8;

	// math friendly pointer (64 bits in LP 64 systems)
	#if defined (_MSC_VER) && (_MSC_VER >= 1300)
	    #define MMGC_TYPE_IS_POINTER_SIZED __w64
	#else
	    #define MMGC_TYPE_IS_POINTER_SIZED
	#endif	
	
	#ifdef MMGC_64BIT
	typedef MMGC_TYPE_IS_POINTER_SIZED uint64 uintptr;
	typedef MMGC_TYPE_IS_POINTER_SIZED int64 sintptr;
	#else
	typedef MMGC_TYPE_IS_POINTER_SIZED uint32 uintptr;
	typedef MMGC_TYPE_IS_POINTER_SIZED int32 sintptr;
	#endif

	/* wchar is our version of wchar_t, since wchar_t is different sizes
	   on different platforms, but we want to use UTF-16 uniformly. */
	typedef unsigned short wchar;

    typedef void* (*GCMallocFuncPtr)(size_t size);
    typedef void (*GCFreeFuncPtr)(void* mem);
	
    #ifndef NULL
    #define NULL 0
    #endif
}

#endif /* __GCTypes__ */

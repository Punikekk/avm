//                     DO NOT EDIT THIS FILE
//
//  This file has been generated by the script core/avmfeatures.as,
//  from a set of configuration parameters in that file.
//
//  If you feel you need to make changes below, instead edit the configuration
//  file and rerun it to get a new version of this file.
//
//  ***** BEGIN LICENSE BLOCK *****
//  Version: MPL 1.1/GPL 2.0/LGPL 2.1
//
//  The contents of this file are subject to the Mozilla Public License Version
//  1.1 (the "License"); you may not use this file except in compliance with
//  the License. You may obtain a copy of the License at
//  http://www.mozilla.org/MPL/
//
//  Software distributed under the License is distributed on an "AS IS" basis,
//  WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
//  for the specific language governing rights and limitations under the
//  License.
//
//  The Original Code is [Open Source Virtual Machine.].
//
//  The Initial Developer of the Original Code is
//  Adobe System Incorporated.
//  Portions created by the Initial Developer are Copyright (C) 2009
//  the Initial Developer. All Rights Reserved.
//
//  Contributor(s):
//    Adobe AS3 Team
//
//  Alternatively, the contents of this file may be used under the terms of
//  either the GNU General Public License Version 2 or later (the "GPL"), or
//  the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
//  in which case the provisions of the GPL or the LGPL are applicable instead
//  of those above. If you wish to allow use of your version of this file only
//  under the terms of either the GPL or the LGPL, and not to allow others to
//  use your version of this file under the terms of the MPL, indicate your
//  decision by deleting the provisions above and replace them with the notice
//  and other provisions required by the GPL or the LGPL. If you do not delete
//  the provisions above, a recipient may use your version of this file under
//  the terms of any one of the MPL, the GPL or the LGPL.
//
//  ***** END LICENSE BLOCK ****
#undef VMCFG_32BIT
#undef VMCFG_64BIT
#undef MMGC_64BIT
#undef AVMPLUS_64BIT
#undef VMCFG_UNALIGNED_INT_ACCESS
#undef VMCFG_UNALIGNED_FP_ACCESS
#undef VMCFG_BIG_ENDIAN
#undef VMCFG_LITTLE_ENDIAN
#undef VMCFG_DOUBLE_MSW_FIRST
#undef VMCFG_IA32
#undef VMCFG_SSE2
#undef MMGC_IA32
#undef AVMPLUS_IA32
#undef VMCFG_AMD64
#undef VMCFG_SSE2
#undef MMGC_AMD64
#undef AVMPLUS_AMD64
#undef VMCFG_ARM
#undef MMGC_ARM
#undef AVMPLUS_ARM
#undef VMCFG_PPC
#undef MMGC_PPC
#undef AVMPLUS_PPC
#undef VMCFG_SPARC
#undef MMGC_SPARC
#undef AVMPLUS_SPARC
#undef VMCFG_MIPS
#undef AVMPLUS_MIPS
#undef VMCFG_SH4
#undef AVMPLUS_UNIX
#undef AVMPLUS_MAC
#undef MMGC_MAC
#undef AVMPLUS_WIN32
#undef VMCFG_SYMBIAN
#undef VMCFG_DEBUGGER
#undef VMCFG_VERIFYALL
#undef AVMPLUS_VERBOSE
#undef DEBUGGER
#undef VMCFG_DEBUGGER_STUB
#undef AVMPLUS_SAMPLER
#undef VMCFG_VTUNE
#undef AVMPLUS_VERBOSE
#undef VMCFG_NANOJIT
#undef VMCFG_LOOKUP_CACHE
#undef VMCFG_METHODENV_IMPL32
#undef FEATURE_NANOJIT
#undef VMCFG_OSR
#undef VMCFG_AOT
#undef VMCFG_AOTSHELL
#undef VMCFG_CDECL
#undef VMCFG_METHODENV_IMPL32
#undef VMCFG_BUFFER_GUARD
#undef VMCFG_MACH_EXCEPTIONS
#undef VMCFG_INTERPRETER
#undef VMCFG_INTERPRETER
#undef VMCFG_WORDCODE
#undef VMCFG_WORDCODE_PEEPHOLE
#undef VMCFG_LOOKUP_CACHE
#undef VMCFG_DIRECT_THREADED
#undef VMCFG_SELFTEST
#undef VMCFG_EVAL
#undef AVMPLUS_JIT_READONLY
#undef VMCFG_PROTECT_JITMEM
#undef MMGC_LOCKING
#undef MMGC_USE_SYSTEM_MALLOC
#undef MMGC_ENABLE_CPP_EXCEPTIONS
#undef MMGC_INTERIOR_PTRS
#undef AVMPLUS_WITH_JNI
#undef AVMPLUS_HEAP_ALLOCA
#undef MMGC_OVERRIDE_GLOBAL_NEW
#undef MMGC_MEMORY_PROFILER
#undef VMCFG_CACHE_GQCN
#undef MMGC_VALGRIND
#undef VMCFG_SAFEPOINTS
#undef VMCFG_SWF12
#undef VMCFG_FLOAT
#undef VMCFG_FLOAT4
#undef VMCFG_SWF13
#undef VMCFG_SWF14
#undef VMCFG_SWF15
#undef VMCFG_SWF16
#undef VMCFG_SWF17
#undef VMCFG_SWF18
#undef VMCFG_SWF19
#undef VMCFG_SWF20

#undef VMCFG_TWEAK_SIN_COS_NONFINITE
#undef VMCFG_EPOC_EMULATOR
#undef VMCFG_EXACT_TRACING
#undef VMCFG_SELECTABLE_EXACT_TRACING
#undef MMGC_HEAP_GRAPH



/* AVMSYSTEM_32BIT
 *
 * Selects a 32-bit architecture
 */
#if !defined AVMSYSTEM_32BIT || AVMSYSTEM_32BIT != 0 && AVMSYSTEM_32BIT != 1
#  error "AVMSYSTEM_32BIT must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_64BIT
 *
 * Selects a 64-bit architecture
 */
#if !defined AVMSYSTEM_64BIT || AVMSYSTEM_64BIT != 0 && AVMSYSTEM_64BIT != 1
#  error "AVMSYSTEM_64BIT must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_UNALIGNED_INT_ACCESS
 *
 * Selects an architecture that allows load/store of unaligned 16- and 32-bit ints.
 * There may be a performance penalty, but it will not generate a runtime
 * fault, and will be at least as efficient as separate instructions to load
 * and assembly the word one byte at a time.
 */
#if !defined AVMSYSTEM_UNALIGNED_INT_ACCESS || AVMSYSTEM_UNALIGNED_INT_ACCESS != 0 && AVMSYSTEM_UNALIGNED_INT_ACCESS != 1
#  error "AVMSYSTEM_UNALIGNED_INT_ACCESS must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_UNALIGNED_FP_ACCESS
 *
 * Selects an architecture that allows load/store of unaligned 32- and 64-bit floats.
 * There may be a performance penalty, but it will not generate a runtime
 * fault, and will be at least as efficient as separate instructions to load
 * and assembly the word one byte at a time. (Note that if this is not set,
 * it is assumed that 64-bit floats require 8-byte alignment.)
 */
#if !defined AVMSYSTEM_UNALIGNED_FP_ACCESS || AVMSYSTEM_UNALIGNED_FP_ACCESS != 0 && AVMSYSTEM_UNALIGNED_FP_ACCESS != 1
#  error "AVMSYSTEM_UNALIGNED_FP_ACCESS must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_BIG_ENDIAN
 *
 * Selects a big-endian architecture: the most significant byte of a word
 * is stored at the lowest byte address of the word
 */
#if !defined AVMSYSTEM_BIG_ENDIAN || AVMSYSTEM_BIG_ENDIAN != 0 && AVMSYSTEM_BIG_ENDIAN != 1
#  error "AVMSYSTEM_BIG_ENDIAN must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_LITTLE_ENDIAN
 *
 * Selects a little-endian architecture: the least significant byte of a word
 * is stored at the lowest byte address of the word
 */
#if !defined AVMSYSTEM_LITTLE_ENDIAN || AVMSYSTEM_LITTLE_ENDIAN != 0 && AVMSYSTEM_LITTLE_ENDIAN != 1
#  error "AVMSYSTEM_LITTLE_ENDIAN must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_DOUBLE_MSW_FIRST
 *
 * Selects a reverse floating-point layout on little-endian systems:
 * the most significant word (containing the sign, exponent, and most
 * significant bits of the significand) are at the lower word address.
 * Each word is stored little-endian, however.
 */
#if !defined AVMSYSTEM_DOUBLE_MSW_FIRST || AVMSYSTEM_DOUBLE_MSW_FIRST != 0 && AVMSYSTEM_DOUBLE_MSW_FIRST != 1
#  error "AVMSYSTEM_DOUBLE_MSW_FIRST must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_IA32
 *
 * Selects the x86-32 architecture
 */
#if !defined AVMSYSTEM_IA32 || AVMSYSTEM_IA32 != 0 && AVMSYSTEM_IA32 != 1
#  error "AVMSYSTEM_IA32 must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_AMD64
 *
 * Selects the x86-64 architecture
 */
#if !defined AVMSYSTEM_AMD64 || AVMSYSTEM_AMD64 != 0 && AVMSYSTEM_AMD64 != 1
#  error "AVMSYSTEM_AMD64 must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_ARM
 *
 * Selects the ARM architecture (version left unspecified for now).
 */
#if !defined AVMSYSTEM_ARM || AVMSYSTEM_ARM != 0 && AVMSYSTEM_ARM != 1
#  error "AVMSYSTEM_ARM must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_PPC
 *
 * Selects the PowerPC / Power architecture.  Whether it's the 32-bit or the
 * 64-bit version of the architecture is controlled independently.
 */
#if !defined AVMSYSTEM_PPC || AVMSYSTEM_PPC != 0 && AVMSYSTEM_PPC != 1
#  error "AVMSYSTEM_PPC must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_SPARC
 *
 * Selects the 32-bit SPARC architecture.
 */
#if !defined AVMSYSTEM_SPARC || AVMSYSTEM_SPARC != 0 && AVMSYSTEM_SPARC != 1
#  error "AVMSYSTEM_SPARC must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_MIPS
 *
 * Selects the MIPS architecture (version left unspecified for now).
 */
#if !defined AVMSYSTEM_MIPS || AVMSYSTEM_MIPS != 0 && AVMSYSTEM_MIPS != 1
#  error "AVMSYSTEM_MIPS must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_SH4
 *
 * Selects the 32-bit SH4 architecture.
 */
#if !defined AVMSYSTEM_SH4 || AVMSYSTEM_SH4 != 0 && AVMSYSTEM_SH4 != 1
#  error "AVMSYSTEM_SH4 must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_UNIX
 *
 * Selects Unix / Linux (but not MacOS)
 */
#if !defined AVMSYSTEM_UNIX || AVMSYSTEM_UNIX != 0 && AVMSYSTEM_UNIX != 1
#  error "AVMSYSTEM_UNIX must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_MAC
 *
 * Selects MacOS X
 */
#if !defined AVMSYSTEM_MAC || AVMSYSTEM_MAC != 0 && AVMSYSTEM_MAC != 1
#  error "AVMSYSTEM_MAC must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_WIN32
 *
 * Selects Win32, Win64, Windows Mobile
 */
#if !defined AVMSYSTEM_WIN32 || AVMSYSTEM_WIN32 != 0 && AVMSYSTEM_WIN32 != 1
#  error "AVMSYSTEM_WIN32 must be defined and 0 or 1 (only)."
#endif


/* AVMSYSTEM_SYMBIAN
 *
 * Selects Symbian
 */
#if !defined AVMSYSTEM_SYMBIAN || AVMSYSTEM_SYMBIAN != 0 && AVMSYSTEM_SYMBIAN != 1
#  error "AVMSYSTEM_SYMBIAN must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_DEBUGGER
 *
 * Selects the AVM debugger API, including retaining debug information at
 * run-time and human-readable error messages for run-time errors.
 *
 * There is a performance penalty to enabling this; clients that want
 * maximal execution performance and don't care about debugging should
 * disable it.
 *
 * If you enable the debugger you may want to consider enabling support for
 * specific language strings for error messages in order to avoid getting
 * them all.  See the AVMPLUS_ERROR_LANG_ macros in core/ErrorConstants.h.
 * It's easiest to define the ones you want in core/avmbuild.h.
 */
#if !defined AVMFEATURE_DEBUGGER || AVMFEATURE_DEBUGGER != 0 && AVMFEATURE_DEBUGGER != 1
#  error "AVMFEATURE_DEBUGGER must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_DEBUGGER_STUB
 *
 * This is used to compile AVM with the debugger API enabled, but
 * certain bits of functionality reduced to no-ops.
 */
#if !defined AVMFEATURE_DEBUGGER_STUB || AVMFEATURE_DEBUGGER_STUB != 0 && AVMFEATURE_DEBUGGER_STUB != 1
#  error "AVMFEATURE_DEBUGGER_STUB must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_ALLOCATION_SAMPLER
 *
 * Enable the sample-based memory profiler.  This makes allocation a
 * little more expensive if a sampler callback is not installed, and
 * more expensive still if it is installed.
 *
 * FIXME: more information needed.
 *
 * Note that this is enabled always by AVMFEATURE_DEBUGGER.
 *
 * It is known that the Flash Player wants to enable this if SCRIPT_DEBUGGER
 * is enabled in the Player code.
 */
#if !defined AVMFEATURE_ALLOCATION_SAMPLER || AVMFEATURE_ALLOCATION_SAMPLER != 0 && AVMFEATURE_ALLOCATION_SAMPLER != 1
#  error "AVMFEATURE_ALLOCATION_SAMPLER must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_VTUNE
 *
 * Selects vtune profiling of jit'd code.  Requires Windows x86,
 * and could support windows x64 after more testing.
 * turns on AVMPLUS_VERBOSE solely to get method/class names for profiling
 */
#if !defined AVMFEATURE_VTUNE || AVMFEATURE_VTUNE != 0 && AVMFEATURE_VTUNE != 1
#  error "AVMFEATURE_VTUNE must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_JIT
 *
 * Enables the just-in-time compiler.  This will typically increase performance
 * significantly but may result in significantly higher memory consumption.
 */
#if !defined AVMFEATURE_JIT || AVMFEATURE_JIT != 0 && AVMFEATURE_JIT != 1
#  error "AVMFEATURE_JIT must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_OSR
 *
 * Enables delayed JIT-compilation with on-stack replacement.
 * The default OSR compilation strategy either compiles a method eagerly
 * or interprets it always, thus the OSR invocation threshold must be
 * separately configured at runtime to obtain meaningful results.
 */
#if !defined AVMFEATURE_OSR || AVMFEATURE_OSR != 0 && AVMFEATURE_OSR != 1
#  error "AVMFEATURE_OSR must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_AOT
 *
 * Enables the ahead-of-time compiler.
 */
#if !defined AVMFEATURE_AOT || AVMFEATURE_AOT != 0 && AVMFEATURE_AOT != 1
#  error "AVMFEATURE_AOT must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_BUFFER_GUARD
 *
 * Enables the exception based caching code, right now this is used
 * exclusively by AOT.
 */
#if !defined AVMFEATURE_BUFFER_GUARD || AVMFEATURE_BUFFER_GUARD != 0 && AVMFEATURE_BUFFER_GUARD != 1
#  error "AVMFEATURE_BUFFER_GUARD must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_ABC_INTERP
 *
 * Selects the ABC interpreter.  Appropriate for platforms that run
 * the interpreter only for initialization code and for
 * platforms that are exceptionally memory-constrained.
 */
#if !defined AVMFEATURE_ABC_INTERP || AVMFEATURE_ABC_INTERP != 0 && AVMFEATURE_ABC_INTERP != 1
#  error "AVMFEATURE_ABC_INTERP must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_WORDCODE_INTERP
 *
 * Selects the wordcode interpreter.  Appropriate for platforms that run the
 * interpreter for some or all methods and are not exceptionally memory-constrained.
 */
#if !defined AVMFEATURE_WORDCODE_INTERP || AVMFEATURE_WORDCODE_INTERP != 0 && AVMFEATURE_WORDCODE_INTERP != 1
#  error "AVMFEATURE_WORDCODE_INTERP must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_THREADED_INTERP
 *
 * Selects the faster, direct threaded wordcode interpreter.
 * This is appropriate only for C++ compilers that support GCC-style computed
 * "goto".  It is believed that RCVT, Intel's C++ compiler, and the Sunpro
 * compiler all do.
 */
#if !defined AVMFEATURE_THREADED_INTERP || AVMFEATURE_THREADED_INTERP != 0 && AVMFEATURE_THREADED_INTERP != 1
#  error "AVMFEATURE_THREADED_INTERP must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SELFTEST
 *
 * AVMFEATURE_SELFTEST enables the built-in selftests.  These can be run by -Dselftest
 * at the shell or by calling the global function avmplus::selftests(), see extensions/Selftest.h.
 * Mostly they are useful for AVM development, not for embedders.
 *
 * Apart from code size considerations this can be enabled for release builds.
 */
#if !defined AVMFEATURE_SELFTEST || AVMFEATURE_SELFTEST != 0 && AVMFEATURE_SELFTEST != 1
#  error "AVMFEATURE_SELFTEST must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_EVAL
 *
 * Select support for the AS3 run-time compiler.  NOT RECOMMENDED.  The run-time compiler
 * is still undergoing development.
 */
#if !defined AVMFEATURE_EVAL || AVMFEATURE_EVAL != 0 && AVMFEATURE_EVAL != 1
#  error "AVMFEATURE_EVAL must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_PROTECT_JITMEM
 *
 * Makes all JIT code buffers read-only whenever JIT code is executing,
 * to reduce the probability of heap overflow attacks.
 */
#if !defined AVMFEATURE_PROTECT_JITMEM || AVMFEATURE_PROTECT_JITMEM != 0 && AVMFEATURE_PROTECT_JITMEM != 1
#  error "AVMFEATURE_PROTECT_JITMEM must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SHARED_GCHEAP
 *
 * Selects locking around calls to the memory block manager (GCHeap), allowing multiple
 * threads to share the block manager.  Any client with more than one thread that uses
 * MMgc either for garbage collected or manually managed memory wants this; the Flash
 * Player requires it.
 */
#if !defined AVMFEATURE_SHARED_GCHEAP || AVMFEATURE_SHARED_GCHEAP != 0 && AVMFEATURE_SHARED_GCHEAP != 1
#  error "AVMFEATURE_SHARED_GCHEAP must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_USE_SYSTEM_MALLOC
 *
 * Make MMgc's overridden global new and delete operators delegate allocation and
 * deallocation to VMPI_alloc and VMPI_free instead of going to FixedMalloc.
 *
 * Whether you want this or not probably depends on the performance of the
 * underlying malloc and might depend on memory consumption patterns.  On desktop
 * systems you probably want this to be disabled.
 */
#if !defined AVMFEATURE_USE_SYSTEM_MALLOC || AVMFEATURE_USE_SYSTEM_MALLOC != 0 && AVMFEATURE_USE_SYSTEM_MALLOC != 1
#  error "AVMFEATURE_USE_SYSTEM_MALLOC must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_CPP_EXCEPTIONS
 *
 * Support C++ exceptions in the MMgc API.  At the time of writing (Apr 2009)
 * this means decorating the global new and delete operator with appropriate 'throw'
 * clauses.  It is unlikely to mean anything more, as AVM+ and MMgc do not use and
 * do not generally support C++ exceptions.
 *
 * Note that even if this is enabled, the global new and delete operators may
 * not throw exceptions when memory can't be allocated, because the out-of-memory
 * handling in MMgc may take precedence.
 *
 * FixedMalloc never throws an exception for a failed allocation.
 */
#if !defined AVMFEATURE_CPP_EXCEPTIONS || AVMFEATURE_CPP_EXCEPTIONS != 0 && AVMFEATURE_CPP_EXCEPTIONS != 1
#  error "AVMFEATURE_CPP_EXCEPTIONS must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_INTERIOR_POINTERS
 *
 * Recognize a pointer or pointer-like value into anywhere in an object as referencing
 * that object during marking in the garbage collector.
 *
 * Enabling this tends to be increase GC cost but it can be a useful debugging aid.
 */
#if !defined AVMFEATURE_INTERIOR_POINTERS || AVMFEATURE_INTERIOR_POINTERS != 0 && AVMFEATURE_INTERIOR_POINTERS != 1
#  error "AVMFEATURE_INTERIOR_POINTERS must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_JNI
 *
 * Enable interfacing to Java so you can access java methods/properties like
 * native AS properties; e.g.
 * var hello = JObject.create("java.lang.String", " hello world ");
 * print(hello.indexOf('o'));
 */
#if !defined AVMFEATURE_JNI || AVMFEATURE_JNI != 0 && AVMFEATURE_JNI != 1
#  error "AVMFEATURE_JNI must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_HEAP_ALLOCA
 *
 * If enabled then always divert VMPI_alloca() to a separately managed stack,
 * to avoid blowing the stack on small systems or to support systems that
 * don't provide alloca().  If disabled then smallish allocations are handled
 * by the built-in alloca() (which must be provided) and larger allocations
 * are handled by diverting to a separately managed stack; the latter case is
 * mainly a security issue, as alloca() will do strange things if given sufficiently
 * large requests.
 */
#if !defined AVMFEATURE_HEAP_ALLOCA || AVMFEATURE_HEAP_ALLOCA != 0 && AVMFEATURE_HEAP_ALLOCA != 1
#  error "AVMFEATURE_HEAP_ALLOCA must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_OVERRIDE_GLOBAL_NEW
 *
 * Enabling this will cause the mmfx_* memory macros to use global new/delete.
 * By default we use specialized new/delete operators and avoid global new/delete.  However
 * this requires some tricks to get multiple inheritance and private destructors to work
 * so some codebases may want to use the simpler path of overriding global new/delete.
 * Note that this feature works independently of AVMFEATURE_USE_SYSTEM_MALLOC.
 */
#if !defined AVMFEATURE_OVERRIDE_GLOBAL_NEW || AVMFEATURE_OVERRIDE_GLOBAL_NEW != 0 && AVMFEATURE_OVERRIDE_GLOBAL_NEW != 1
#  error "AVMFEATURE_OVERRIDE_GLOBAL_NEW must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_MEMORY_PROFILER
 *
 * Enabling this will compile in code to enable memory profiling. (Must still be
 * enabled at runtime.)
 */
#if !defined AVMFEATURE_MEMORY_PROFILER || AVMFEATURE_MEMORY_PROFILER != 0 && AVMFEATURE_MEMORY_PROFILER != 1
#  error "AVMFEATURE_MEMORY_PROFILER must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_CACHE_GQCN
 *
 * Enabling this will cache the result of getQualifiedClassName, making it run
 * much more quickly, at the expense of more memory usage.
 */
#if !defined AVMFEATURE_CACHE_GQCN || AVMFEATURE_CACHE_GQCN != 0 && AVMFEATURE_CACHE_GQCN != 1
#  error "AVMFEATURE_CACHE_GQCN must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_VALGRIND
 *
 * Enabling this will compile in code to tell valgrind about how MMgc allocates memory.
 */
#if !defined AVMFEATURE_VALGRIND || AVMFEATURE_VALGRIND != 0 && AVMFEATURE_VALGRIND != 1
#  error "AVMFEATURE_VALGRIND must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SAFEPOINTS
 *
 * Enables safepoints and the mechanism to dispatch SafepointTasks
 */
#if !defined AVMFEATURE_SAFEPOINTS || AVMFEATURE_SAFEPOINTS != 0 && AVMFEATURE_SAFEPOINTS != 1
#  error "AVMFEATURE_SAFEPOINTS must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF12
 *
 * Enabling this will support SWF12 / ABC version 47.12
 */
#if !defined AVMFEATURE_SWF12 || AVMFEATURE_SWF12 != 0 && AVMFEATURE_SWF12 != 1
#  error "AVMFEATURE_SWF12 must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF13
 *
 * Enabling this will support SWF13 / ABC version 47.13
 */
#if !defined AVMFEATURE_SWF13 || AVMFEATURE_SWF13 != 0 && AVMFEATURE_SWF13 != 1
#  error "AVMFEATURE_SWF13 must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF14
 *
 * Enabling this will support SWF14 / ABC version 47.14
 */
#if !defined AVMFEATURE_SWF14 || AVMFEATURE_SWF14 != 0 && AVMFEATURE_SWF14 != 1
#  error "AVMFEATURE_SWF14 must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF15
 *
 * Enabling this will support SWF15 / ABC version 47.15
 */
#if !defined AVMFEATURE_SWF15 || AVMFEATURE_SWF15 != 0 && AVMFEATURE_SWF15 != 1
#  error "AVMFEATURE_SWF15 must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF16
 *
 * Enabling this will support SWF16 / ABC version 47.16
 */
#if !defined AVMFEATURE_SWF16 || AVMFEATURE_SWF16 != 0 && AVMFEATURE_SWF16 != 1
#  error "AVMFEATURE_SWF16 must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF17
 *
 * Enabling this will support SWF17 / ABC version 47.17
 */
#if !defined AVMFEATURE_SWF17 || AVMFEATURE_SWF17 != 0 && AVMFEATURE_SWF17 != 1
#  error "AVMFEATURE_SWF17 must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF18
 *
 * Enabling this will support SWF18 / ABC version 47.18
 */
#if !defined AVMFEATURE_SWF18 || AVMFEATURE_SWF18 != 0 && AVMFEATURE_SWF18 != 1
#  error "AVMFEATURE_SWF18 must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF19
 *
 * Enabling this will support SWF19 / ABC version 47.19
 */
#if !defined AVMFEATURE_SWF19 || AVMFEATURE_SWF19 != 0 && AVMFEATURE_SWF19 != 1
#  error "AVMFEATURE_SWF19 must be defined and 0 or 1 (only)."
#endif


/* AVMFEATURE_SWF20
 *
 * Enabling this will support SWF20 / ABC version 47.20
 */
#if !defined AVMFEATURE_SWF20 || AVMFEATURE_SWF20 != 0 && AVMFEATURE_SWF20 != 1
#  error "AVMFEATURE_SWF20 must be defined and 0 or 1 (only)."
#endif



/* AVMTWEAK_SIN_COS_NONFINITE
 *
 * Various iphone SDK versions - at least - botch sin() and cos() around NaN
 * and infinity.  See https://bugzilla.mozilla.org/show_bug.cgi?id=556149.
 */
#if !defined AVMTWEAK_SIN_COS_NONFINITE
#  define AVMTWEAK_SIN_COS_NONFINITE 0
#endif
#if AVMTWEAK_SIN_COS_NONFINITE != 0 && AVMTWEAK_SIN_COS_NONFINITE != 1
#  error "AVMTWEAK_SIN_COS_NONFINITE must be defined and 0 or 1 (only)."
#endif


/* AVMTWEAK_EPOC_EMULATOR
 *
 * The current (June 2010) EPOC/Symbian emulator has certain limitations,
 * described throughout the code where this tweak is used.
 */
#if !defined AVMTWEAK_EPOC_EMULATOR
#  define AVMTWEAK_EPOC_EMULATOR 0
#endif
#if AVMTWEAK_EPOC_EMULATOR != 0 && AVMTWEAK_EPOC_EMULATOR != 1
#  error "AVMTWEAK_EPOC_EMULATOR must be defined and 0 or 1 (only)."
#endif


/* AVMTWEAK_EXACT_TRACING
 *
 * Compile-time selected exact tracing
 */
#if !defined AVMTWEAK_EXACT_TRACING
#  define AVMTWEAK_EXACT_TRACING 1
#endif
#if AVMTWEAK_EXACT_TRACING != 0 && AVMTWEAK_EXACT_TRACING != 1
#  error "AVMTWEAK_EXACT_TRACING must be defined and 0 or 1 (only)."
#endif


/* AVMTWEAK_SELECTABLE_EXACT_TRACING
 *
 * Run-time selectable exact tracing, for experimentation
 */
#if !defined AVMTWEAK_SELECTABLE_EXACT_TRACING
#  define AVMTWEAK_SELECTABLE_EXACT_TRACING 0
#endif
#if AVMTWEAK_SELECTABLE_EXACT_TRACING != 0 && AVMTWEAK_SELECTABLE_EXACT_TRACING != 1
#  error "AVMTWEAK_SELECTABLE_EXACT_TRACING must be defined and 0 or 1 (only)."
#endif


/* AVMTWEAK_HEAP_GRAPH
 *
 * Heap graph, enables blacklist feature for inspecting object reachability
 */
#if !defined AVMTWEAK_HEAP_GRAPH
#  define AVMTWEAK_HEAP_GRAPH 0
#endif
#if AVMTWEAK_HEAP_GRAPH != 0 && AVMTWEAK_HEAP_GRAPH != 1
#  error "AVMTWEAK_HEAP_GRAPH must be defined and 0 or 1 (only)."
#endif

#if AVMSYSTEM_32BIT
#  if AVMSYSTEM_64BIT
#    error "AVMSYSTEM_64BIT is precluded for AVMSYSTEM_32BIT"
#  endif
#endif
#if AVMSYSTEM_64BIT
#  if AVMSYSTEM_32BIT
#    error "AVMSYSTEM_32BIT is precluded for AVMSYSTEM_64BIT"
#  endif
#endif


#if AVMSYSTEM_BIG_ENDIAN
#  if AVMSYSTEM_LITTLE_ENDIAN
#    error "AVMSYSTEM_LITTLE_ENDIAN is precluded for AVMSYSTEM_BIG_ENDIAN"
#  endif
#endif
#if AVMSYSTEM_LITTLE_ENDIAN
#  if AVMSYSTEM_BIG_ENDIAN
#    error "AVMSYSTEM_BIG_ENDIAN is precluded for AVMSYSTEM_LITTLE_ENDIAN"
#  endif
#endif
#if AVMSYSTEM_DOUBLE_MSW_FIRST
#  if !AVMSYSTEM_LITTLE_ENDIAN
#    error "AVMSYSTEM_LITTLE_ENDIAN is required for AVMSYSTEM_DOUBLE_MSW_FIRST"
#  endif
#endif
#if AVMSYSTEM_IA32
#  if AVMSYSTEM_64BIT
#    error "AVMSYSTEM_64BIT is precluded for AVMSYSTEM_IA32"
#  endif
#endif
#if AVMSYSTEM_AMD64
#  if !AVMSYSTEM_64BIT
#    error "AVMSYSTEM_64BIT is required for AVMSYSTEM_AMD64"
#  endif
#endif
#if AVMSYSTEM_ARM
#  if AVMSYSTEM_64BIT
#    error "AVMSYSTEM_64BIT is precluded for AVMSYSTEM_ARM"
#  endif
#endif

#if AVMSYSTEM_SPARC
#  if AVMSYSTEM_64BIT
#    error "AVMSYSTEM_64BIT is precluded for AVMSYSTEM_SPARC"
#  endif
#endif

#if AVMSYSTEM_SH4
#  if AVMSYSTEM_64BIT
#    error "AVMSYSTEM_64BIT is precluded for AVMSYSTEM_SH4"
#  endif
#endif





#if AVMFEATURE_DEBUGGER_STUB
#  if !AVMFEATURE_DEBUGGER
#    error "AVMFEATURE_DEBUGGER is required for AVMFEATURE_DEBUGGER_STUB"
#  endif
#endif

#if AVMFEATURE_VTUNE
#  if !AVMSYSTEM_WIN32
#    error "AVMSYSTEM_WIN32 is required for AVMFEATURE_VTUNE"
#  endif
#  if !AVMSYSTEM_IA32
#    error "AVMSYSTEM_IA32 is required for AVMFEATURE_VTUNE"
#  endif
#endif
#if AVMFEATURE_JIT
#if AVMSYSTEM_IA32+AVMSYSTEM_AMD64+AVMSYSTEM_ARM+AVMSYSTEM_PPC+AVMSYSTEM_SPARC+AVMSYSTEM_MIPS+AVMSYSTEM_SH4 != 1
#  error "Exactly one of AVMSYSTEM_IA32,AVMSYSTEM_AMD64,AVMSYSTEM_ARM,AVMSYSTEM_PPC,AVMSYSTEM_SPARC,AVMSYSTEM_MIPS,AVMSYSTEM_SH4 must be defined."
#endif

#endif
#if AVMFEATURE_OSR
#  if !AVMFEATURE_JIT
#    error "AVMFEATURE_JIT is required for AVMFEATURE_OSR"
#  endif
#endif
#if AVMFEATURE_AOT
#if AVMSYSTEM_IA32+AVMSYSTEM_ARM != 1
#  error "Exactly one of AVMSYSTEM_IA32,AVMSYSTEM_ARM must be defined."
#endif

#endif
#if AVMFEATURE_BUFFER_GUARD
#if AVMFEATURE_AOT != 1
#  error "Exactly one of AVMFEATURE_AOT must be defined."
#endif

#endif


#if AVMFEATURE_THREADED_INTERP
#  if !AVMFEATURE_WORDCODE_INTERP
#    error "AVMFEATURE_WORDCODE_INTERP is required for AVMFEATURE_THREADED_INTERP"
#  endif
#endif















#if AVMFEATURE_SWF13
#  if !AVMFEATURE_SWF12
#    error "AVMFEATURE_SWF12 is required for AVMFEATURE_SWF13"
#  endif
#endif
#if AVMFEATURE_SWF14
#  if !AVMFEATURE_SWF13
#    error "AVMFEATURE_SWF13 is required for AVMFEATURE_SWF14"
#  endif
#endif
#if AVMFEATURE_SWF15
#  if !AVMFEATURE_SWF14
#    error "AVMFEATURE_SWF14 is required for AVMFEATURE_SWF15"
#  endif
#endif
#if AVMFEATURE_SWF16
#  if !AVMFEATURE_SWF15
#    error "AVMFEATURE_SWF15 is required for AVMFEATURE_SWF16"
#  endif
#endif
#if AVMFEATURE_SWF17
#  if !AVMFEATURE_SWF16
#    error "AVMFEATURE_SWF16 is required for AVMFEATURE_SWF17"
#  endif
#endif
#if AVMFEATURE_SWF18
#  if !AVMFEATURE_SWF17
#    error "AVMFEATURE_SWF17 is required for AVMFEATURE_SWF18"
#  endif
#endif
#if AVMFEATURE_SWF19
#  if !AVMFEATURE_SWF18
#    error "AVMFEATURE_SWF18 is required for AVMFEATURE_SWF19"
#  endif
#endif
#if AVMFEATURE_SWF20
#  if !AVMFEATURE_SWF19
#    error "AVMFEATURE_SWF19 is required for AVMFEATURE_SWF20"
#  endif
#endif








#if AVMSYSTEM_IA32+AVMSYSTEM_AMD64+AVMSYSTEM_ARM+AVMSYSTEM_PPC+AVMSYSTEM_SPARC+AVMSYSTEM_MIPS+AVMSYSTEM_SH4 > 1
#  error "At most one of AVMSYSTEM_IA32,AVMSYSTEM_AMD64,AVMSYSTEM_ARM,AVMSYSTEM_PPC,AVMSYSTEM_SPARC,AVMSYSTEM_MIPS,AVMSYSTEM_SH4 must be defined."
#endif
#if AVMFEATURE_WORDCODE_INTERP+AVMFEATURE_ABC_INTERP > 1
#  error "At most one of AVMFEATURE_WORDCODE_INTERP,AVMFEATURE_ABC_INTERP must be defined."
#endif
#if AVMFEATURE_WORDCODE_INTERP+AVMFEATURE_JIT > 1
#  error "At most one of AVMFEATURE_WORDCODE_INTERP,AVMFEATURE_JIT must be defined."
#endif
#if AVMFEATURE_AOT+AVMFEATURE_JIT > 1
#  error "At most one of AVMFEATURE_AOT,AVMFEATURE_JIT must be defined."
#endif
#if AVMFEATURE_AOT+AVMFEATURE_ABC_INTERP > 1
#  error "At most one of AVMFEATURE_AOT,AVMFEATURE_ABC_INTERP must be defined."
#endif
#if AVMFEATURE_AOT+AVMFEATURE_WORDCODE_INTERP > 1
#  error "At most one of AVMFEATURE_AOT,AVMFEATURE_WORDCODE_INTERP must be defined."
#endif
#if AVMTWEAK_EXACT_TRACING+AVMTWEAK_SELECTABLE_EXACT_TRACING > 1
#  error "At most one of AVMTWEAK_EXACT_TRACING,AVMTWEAK_SELECTABLE_EXACT_TRACING must be defined."
#endif

#if AVMSYSTEM_UNIX+AVMSYSTEM_MAC+AVMSYSTEM_WIN32+AVMSYSTEM_SYMBIAN != 1
#  error "Exactly one of AVMSYSTEM_UNIX,AVMSYSTEM_MAC,AVMSYSTEM_WIN32,AVMSYSTEM_SYMBIAN must be defined."
#endif

#if AVMSYSTEM_32BIT
#  define VMCFG_32BIT
#endif
#if AVMSYSTEM_64BIT
#  define VMCFG_64BIT
#endif
#if AVMSYSTEM_64BIT
#  define MMGC_64BIT
#endif
#if AVMSYSTEM_64BIT
#  define AVMPLUS_64BIT
#endif
#if AVMSYSTEM_UNALIGNED_INT_ACCESS
#  define VMCFG_UNALIGNED_INT_ACCESS
#endif
#if AVMSYSTEM_UNALIGNED_FP_ACCESS
#  define VMCFG_UNALIGNED_FP_ACCESS
#endif
#if AVMSYSTEM_BIG_ENDIAN
#  define VMCFG_BIG_ENDIAN
#endif
#if AVMSYSTEM_LITTLE_ENDIAN
#  define VMCFG_LITTLE_ENDIAN
#endif
#if AVMSYSTEM_DOUBLE_MSW_FIRST
#  define VMCFG_DOUBLE_MSW_FIRST
#endif
#if AVMSYSTEM_IA32
#  define VMCFG_IA32
#endif
#if AVMSYSTEM_IA32
#  define VMCFG_SSE2
#endif
#if AVMSYSTEM_IA32
#  define MMGC_IA32
#endif
#if AVMSYSTEM_IA32
#  define AVMPLUS_IA32
#endif
#if AVMSYSTEM_AMD64
#  define VMCFG_AMD64
#endif
#if AVMSYSTEM_AMD64
#  define VMCFG_SSE2
#endif
#if AVMSYSTEM_AMD64
#  define MMGC_AMD64
#endif
#if AVMSYSTEM_AMD64
#  define AVMPLUS_AMD64
#endif
#if AVMSYSTEM_ARM
#  define VMCFG_ARM
#endif
#if AVMSYSTEM_ARM
#  define MMGC_ARM
#endif
#if AVMSYSTEM_ARM
#  define AVMPLUS_ARM
#endif
#if AVMSYSTEM_PPC
#  define VMCFG_PPC
#endif
#if AVMSYSTEM_PPC
#  define MMGC_PPC
#endif
#if AVMSYSTEM_PPC
#  define AVMPLUS_PPC
#endif
#if AVMSYSTEM_SPARC
#  define VMCFG_SPARC
#endif
#if AVMSYSTEM_SPARC
#  define MMGC_SPARC
#endif
#if AVMSYSTEM_SPARC
#  define AVMPLUS_SPARC
#endif
#if AVMSYSTEM_MIPS
#  define VMCFG_MIPS
#endif
#if AVMSYSTEM_MIPS
#  define AVMPLUS_MIPS
#endif
#if AVMSYSTEM_SH4
#  define VMCFG_SH4
#endif
#if AVMSYSTEM_UNIX
#  define AVMPLUS_UNIX
#endif
#if AVMSYSTEM_MAC
#  define AVMPLUS_MAC
#endif
#if AVMSYSTEM_MAC
#  define MMGC_MAC
#endif
#if AVMSYSTEM_WIN32
#  define AVMPLUS_WIN32
#endif
#if AVMSYSTEM_SYMBIAN
#  define VMCFG_SYMBIAN
#endif
#if AVMFEATURE_DEBUGGER
#  define VMCFG_DEBUGGER
#endif
#if AVMFEATURE_DEBUGGER
#  define VMCFG_VERIFYALL
#endif
#if AVMFEATURE_DEBUGGER
#  define AVMPLUS_VERBOSE
#endif
#if AVMFEATURE_DEBUGGER
#  define DEBUGGER
#endif
#if AVMFEATURE_DEBUGGER_STUB
#  define VMCFG_DEBUGGER_STUB
#endif
#if AVMFEATURE_ALLOCATION_SAMPLER
#  define AVMPLUS_SAMPLER
#endif
#if AVMFEATURE_VTUNE
#  define VMCFG_VTUNE
#endif
#if AVMFEATURE_VTUNE
#  define AVMPLUS_VERBOSE
#endif
#if AVMFEATURE_JIT
#  define VMCFG_NANOJIT
#endif
#if AVMFEATURE_JIT
#  define VMCFG_LOOKUP_CACHE
#endif
#if AVMFEATURE_JIT
#  define VMCFG_METHODENV_IMPL32
#endif
#if AVMFEATURE_JIT
#  define FEATURE_NANOJIT
#endif
#if AVMFEATURE_OSR
#  define VMCFG_OSR
#endif
#if AVMFEATURE_AOT
#  define VMCFG_AOT
#endif
#if AVMFEATURE_AOT
#  define VMCFG_AOTSHELL
#endif
#if AVMFEATURE_AOT
#  define VMCFG_CDECL
#endif
#if AVMFEATURE_AOT
#  define VMCFG_METHODENV_IMPL32
#endif
#if AVMFEATURE_BUFFER_GUARD
#  define VMCFG_BUFFER_GUARD
#endif
#if AVMFEATURE_BUFFER_GUARD
#  define VMCFG_MACH_EXCEPTIONS
#endif
#if AVMFEATURE_ABC_INTERP
#  define VMCFG_INTERPRETER
#endif
#if AVMFEATURE_WORDCODE_INTERP
#  define VMCFG_INTERPRETER
#endif
#if AVMFEATURE_WORDCODE_INTERP
#  define VMCFG_WORDCODE
#endif
#if AVMFEATURE_WORDCODE_INTERP
#  define VMCFG_WORDCODE_PEEPHOLE
#endif
#if AVMFEATURE_WORDCODE_INTERP
#  define VMCFG_LOOKUP_CACHE
#endif
#if AVMFEATURE_THREADED_INTERP
#  define VMCFG_DIRECT_THREADED
#endif
#if AVMFEATURE_SELFTEST
#  define VMCFG_SELFTEST
#endif
#if AVMFEATURE_EVAL
#  define VMCFG_EVAL
#endif
#if AVMFEATURE_PROTECT_JITMEM
#  define AVMPLUS_JIT_READONLY
#endif
#if AVMFEATURE_PROTECT_JITMEM
#  define VMCFG_PROTECT_JITMEM
#endif
#if AVMFEATURE_SHARED_GCHEAP
#  define MMGC_LOCKING
#endif
#if AVMFEATURE_USE_SYSTEM_MALLOC
#  define MMGC_USE_SYSTEM_MALLOC
#endif
#if AVMFEATURE_CPP_EXCEPTIONS
#  define MMGC_ENABLE_CPP_EXCEPTIONS
#endif
#if AVMFEATURE_INTERIOR_POINTERS
#  define MMGC_INTERIOR_PTRS
#endif
#if AVMFEATURE_JNI
#  define AVMPLUS_WITH_JNI
#endif
#if AVMFEATURE_HEAP_ALLOCA
#  define AVMPLUS_HEAP_ALLOCA
#endif
#if AVMFEATURE_OVERRIDE_GLOBAL_NEW
#  define MMGC_OVERRIDE_GLOBAL_NEW
#endif
#if AVMFEATURE_MEMORY_PROFILER
#  define MMGC_MEMORY_PROFILER
#endif
#if AVMFEATURE_CACHE_GQCN
#  define VMCFG_CACHE_GQCN
#endif
#if AVMFEATURE_VALGRIND
#  define MMGC_VALGRIND
#endif
#if AVMFEATURE_SAFEPOINTS
#  define VMCFG_SAFEPOINTS
#endif
#if AVMFEATURE_SWF12
#  define VMCFG_SWF12
#endif
#if AVMFEATURE_SWF12
#  define VMCFG_FLOAT
#endif
#if AVMFEATURE_SWF12
#  define VMCFG_FLOAT4
#endif
#if AVMFEATURE_SWF13
#  define VMCFG_SWF13
#endif
#if AVMFEATURE_SWF14
#  define VMCFG_SWF14
#endif
#if AVMFEATURE_SWF15
#  define VMCFG_SWF15
#endif
#if AVMFEATURE_SWF16
#  define VMCFG_SWF16
#endif
#if AVMFEATURE_SWF17
#  define VMCFG_SWF17
#endif
#if AVMFEATURE_SWF18
#  define VMCFG_SWF18
#endif
#if AVMFEATURE_SWF19
#  define VMCFG_SWF19
#endif
#if AVMFEATURE_SWF20
#  define VMCFG_SWF20
#endif

#if AVMTWEAK_SIN_COS_NONFINITE
#  define VMCFG_TWEAK_SIN_COS_NONFINITE
#endif
#if AVMTWEAK_EPOC_EMULATOR
#  define VMCFG_EPOC_EMULATOR
#endif
#if AVMTWEAK_EXACT_TRACING
#  define VMCFG_EXACT_TRACING
#endif
#if AVMTWEAK_SELECTABLE_EXACT_TRACING
#  define VMCFG_SELECTABLE_EXACT_TRACING
#endif
#if AVMTWEAK_HEAP_GRAPH
#  define MMGC_HEAP_GRAPH
#endif

#ifdef AVMSHELL_BUILD
extern const char * const avmfeatures;
#endif


/* -*- Mode: C++; c-basic-offset: 2; indent-tabs-mode: nil; tab-width: 2 -*- */
/* vi: set ts=4 sw=4 expandtab: (add to ~/.vimrc: set modeline modelines=5) */
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
 * Portions created by the Initial Developer are Copyright (C) 2010
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

namespace halfmoon {
using profiler::MethodProfileMgr;
using profiler::MethodProfile;

/***
  * Manager that lives across compilation units. 
  */
class JitManager {
  // Information about each method.
  struct MethodData {
    InstrGraph* ir;
    InterpreterData* interp_data;
    GprMethodProc code;
    DeoptData* deopt_data; // Not to be confused with Mason's bailout stuff below.
    BailoutData* bailout_data;
    MethodData(BailoutData* deoptMetaData) :
    ir(0), interp_data(0), code(0),
    deopt_data(0), bailout_data(deoptMetaData) {
    }
  };

public:
  JitManager(Allocator& mgr_alloc, PoolObject* pool);
  void cleanup();

  // Initialize the manager and save it in PoolObject.codeMgr.
  static JitManager* init(PoolObject*);

  /** Get the interpreter instance for env's method. */
  static const InterpreterData& interpreter(MethodEnv* env);

  static MethodProfile* getProfile(MethodInfo*);
  static MethodProfile* getProfile(MethodEnv* env) {
      return getProfile(env->method);
  }

  /** Return the lattice for this JIT instance. */
  Lattice* lattice() { return &lattice_; }
  InfoManager* infos() { return &infos_; }

  /***
   * Return the implementation or interpreter stub for method, or 0 if
   * we don't have anything.
   */
  GprMethodProc getImpl(MethodInfo* method);

  /** Make an interpreter for this IR and save it. */
  void set_interp(MethodInfo* method, InstrGraph* ir);

  // Generate LIR for the method.
  void set_lir(MethodInfo* method, InstrGraph* ir, 
              ProfiledInformation* profiled_info);

  // Just save IR for the method.
  void set_ir(MethodInfo* method, InstrGraph* ir);

  InstrGraph* ir(MethodInfo* method);

  /** Allocate a new MethodData object. */
  MethodData* ensureMethodData(MethodInfo* method);

  // Return the allocator that has this manager's lifetime.
  Allocator& mgr_alloc() {
    return mgr_alloc_;
  }

  MethodProfileMgr* profile_mgr() const {
    return profile_mgr_;
  }

  CodeAlloc& meta_alloc() {
    return meta_alloc_;
  }

private:
  // Return true if we have saved interpreter data for this method.
  bool haveInterp(int method_id) {
    assert(checkMethodId(method_id));
    MethodData* md = methods_[method_id];
    return md && md->interp_data;
  }

  // Return true if we have saved compiled code for this method.
  bool haveCode(int method_id) {
    assert(checkMethodId(method_id));
    MethodData* md = methods_[method_id];
    return md && md->code;
  }

  // Check if this object manages this method
  bool haveMethod(int method_id) {
    assert(checkMethodId(method_id));
    return methods_[method_id] != 0;
  }

  // Return true if this is a valid method_id.
  bool checkMethodId(int method_id) {
    return method_id >= 0 && method_id < method_count_;
  }

private:
  Allocator& mgr_alloc_;    // Allocator with this object's lifetime.
  Allocator0 mgr_alloc0_;   // zeroing wrapper for mgr_alloc_.
  Lattice lattice_;
  InfoManager infos_;
  CodeAlloc meta_alloc_;    // allocator for deoptimization metadata (similar to code, but R/W)
  int method_count_;        // Number of methods in PoolObject.
  MethodData** methods_;    // MethodData for each method we compiled.
  MethodProfileMgr* profile_mgr_;
};

} // end halfmoon namespace

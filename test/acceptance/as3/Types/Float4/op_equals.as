/* -*- c-basic-offset: 4; indent-tabs-mode: nil; tab-width: 4 -*- */
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
 * Portions created by the Initial Developer are Copyright (C) 2011
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
include "floatUtil.as";


var SECTION = "5.6.1";
var VERSION = "AS3";
var TITLE   = "The == operator augmented by float4 values";

startTest();
writeHeaderToLog( SECTION + " "+ TITLE);

function check(param1:*, param2:*):* { return param1 == param2; }

AddTestCase("float4(1f) == float4(1f)", true, float4(1f) == float4(1f));
AddTestCase("float4(0f) == float4(0f)", true, float4(0f) == float4(0f));
AddTestCase("float4(0f) == float4(-0f)", true, float4(0f) == float4(-0f));
AddTestCase("float4(-0f) == float4(0f)", true, float4(-0f) == float4(0f));
AddTestCase("float4(1f) == float4(2f)", false, float4(1f) == float4(2f));
AddTestCase("float4(2f) == float4(1f)", false, float4(2f) == float4(1f));

AddTestCase("function float4(1f) == float4(1f)", true, check(float4(1f), float4(1f)));
AddTestCase("function float4(0f) == float4(0f)", true, check(float4(0f), float4(0f)));
AddTestCase("function float4(0f) == float4(-0f)", true, check(float4(0f), float4(-0f)));
AddTestCase("function float4(0f) == float4(-0f)", true, check(float4(-0f), float4(0f)));
AddTestCase("function float4(1f) == float4(2f)", false, check(float4(1f), float4(2f)));
AddTestCase("function float4(2f) == float4(1f)", false, check(float4(2f), float4(1f)));


AddTestCase("float4(1f, 2f, 3f, 4f) == float4(0f, 2f, 3f, 4f)", false, float4(1f, 2f, 3f, 4f) == float4(0f, 2f, 3f, 4f));
AddTestCase("float4(1f, 1f, 3f, 4f) == float4(0f, 2f, 3f, 4f)", false, float4(1f, 2f, 3f, 4f) == float4(1f, 1f, 3f, 4f));
AddTestCase("float4(1f, 2f, 2f, 4f) == float4(0f, 2f, 3f, 4f)", false, float4(1f, 2f, 3f, 4f) == float4(1f, 2f, 2f, 4f));
AddTestCase("float4(1f, 2f, 3f, 5f) == float4(0f, 2f, 3f, 4f)", false, float4(1f, 2f, 3f, 4f) == float4(1f, 2f, 3f, 5f));

AddTestCase("function float4(1f, 2f, 3f, 4f) == float4(0f, 2f, 3f, 4f)", false, check(float4(1f, 2f, 3f, 4f), float4(0f, 2f, 3f, 4f)));
AddTestCase("function float4(1f, 1f, 3f, 4f) == float4(0f, 2f, 3f, 4f)", false, check(float4(1f, 2f, 3f, 4f), float4(1f, 1f, 3f, 4f)));
AddTestCase("function float4(1f, 2f, 2f, 4f) == float4(0f, 2f, 3f, 4f)", false, check(float4(1f, 2f, 3f, 4f), float4(1f, 2f, 2f, 4f)));
AddTestCase("function float4(1f, 2f, 3f, 5f) == float4(0f, 2f, 3f, 4f)", false, check(float4(1f, 2f, 3f, 4f), float4(1f, 2f, 3f, 5f)));

// Bug 698365 - float4 mixed-representation equality incorrect
// https://bugzilla.mozilla.org/show_bug.cgi?id=698365
AddStrictTestCase("float4(1,1,1,1) == 1", true, float4(1,1,1,1) == 1);
AddStrictTestCase("float4(1,1,1,1) == 1 check()", true, check(float4(1,1,1,1), 1));
var one = 1;
AddStrictTestCase("float4(1,1,1,1) == one", true, float4(1,1,1,1) == one);
AddStrictTestCase("float4(1,1,1,1) == one check()", true, check(float4(1,1,1,1), one));

AddStrictTestCase("float4(2.125, 2.125, 2.125, 2.125) == 2.125", true, float4(2.125, 2.125, 2.125, 2.125) == 2.125);
AddStrictTestCase("float4(2.125, 2.125, 2.125, 2.125) == 2.125 check()", true, check(float4(2.125, 2.125, 2.125, 2.125), 2.125));
AddStrictTestCase("2.125 == float4(2.125, 2.125, 2.125, 2.125)", true, 2.125 == float4(2.125, 2.125, 2.125, 2.125));
AddStrictTestCase("2.125 == float4(2.125, 2.125, 2.125, 2.125) check()", true, check(2.125, float4(2.125, 2.125, 2.125, 2.125)));

// FIXME: https://bugzilla.mozilla.org/show_bug.cgi?id=698365
// Uncomment the following testcase once the above bug is fixed.
// AddStrictTestCase("float4(1,1,1,1) == true", true, float4(1,1,1,1) == true);
AddStrictTestCase("float4(1,1,1,1) == true check()", true, check(float4(1,1,1,1), true));
var _true = true;
AddStrictTestCase("float4(1,1,1,1) == _true", true, float4(1,1,1,1) == _true);
AddStrictTestCase("float4(1,1,1,1) == _true check()", true, check(float4(1,1,1,1), _true));


test();


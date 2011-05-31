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

package {

    var SECTION = "15.2.2";
    var VERSION = "ECMA_3";
    startTest();
    var TITLE   = "JSON ecma-262 testcases";

    writeHeaderToLog( SECTION + " "+ TITLE);

    // set the Object.toString and Array.toString to show each property value
    // instead of [Object object] for testing
    var oldObject = Object.prototype.toString;
    var oldArray = Array.prototype.toString;

    function jformat(x) {
        if (x is String)
            return '"' + x + '"';
        else
            return x;
    }

    Object.prototype.toString = (function () {
        var s = "{";
        var first = true;
        for ( var i in this ) {
            if (this.hasOwnProperty(i)) {
                if (!first)
                    s += ",";
                s += jformat(String(i)) + ":" + jformat(this[i]);
                first = false;
            }
        }
        return s + "}";
    });
    Array.prototype.toString = (function () {
        var s = "[";
        var first = true;
        for ( var i=0 ; i < this.length ; i++ ) {
            if (!first)
                s += ",";
            first = false;
            if (!this.hasOwnProperty(i))
                continue;
            s += jformat(this[i]);
        }
        return s + "]";
    });

    startTest();

    AddTestCase("15.12.2-0-1: JSON.parse must exist as a function","function",typeof(JSON.parse));
    AddTestCase("15.12.2.0-2: JSON.parse must exist as a function taking 2 parameters",2,JSON.parse.length);

    //JSON.parse - parsing an object where property name is a null character

    var nullChars = new Array();
    nullChars[0] = '\"\u0000\"';
    nullChars[1] = '\"\u0001\"';
    nullChars[2] = '\"\u0002\"';
    nullChars[3] = '\"\u0003\"';
    nullChars[4] = '\"\u0004\"';
    nullChars[5] = '\"\u0005\"';
    nullChars[6] = '\"\u0006\"';
    nullChars[7] = '\"\u0007\"';
    nullChars[8] = '\"\u0008\"';
    nullChars[9] = '\"\u0009\"';
    nullChars[10] = '\"\u000A\"';
    nullChars[11] = '\"\u000B\"';
    nullChars[12] = '\"\u000C\"';
    nullChars[13] = '\"\u000D\"';
    nullChars[14] = '\"\u000E\"';
    nullChars[15] = '\"\u000F\"';
    nullChars[16] = '\"\u0010\"';
    nullChars[17] = '\"\u0011\"';
    nullChars[18] = '\"\u0012\"';
    nullChars[19] = '\"\u0013\"';
    nullChars[20] = '\"\u0014\"';
    nullChars[21] = '\"\u0015\"';
    nullChars[22] = '\"\u0016\"';
    nullChars[23] = '\"\u0017\"';
    nullChars[24] = '\"\u0018\"';
    nullChars[25] = '\"\u0019\"';
    nullChars[26] = '\"\u001A\"';
    nullChars[27] = '\"\u001B\"';
    nullChars[28] = '\"\u001C\"';
    nullChars[29] = '\"\u001D\"';
    nullChars[30] = '\"\u001E\"';
    nullChars[31] = '\"\u001F\"';

    var index;
    var object;

    var result1 = true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{ ' + nullChars[index] + ' : "John" } ');
            result1 = (result1 && false);
        } catch (e) {
            result1 = (result1 && (e instanceof SyntaxError));
        }
    }

    AddTestCase("15.12.2-2-1: JSON.parse - parsing an object where property name is a null character",true,result1);

    var result2=true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{ ' + nullChars[index] + "name" + ' : "John" } ');
            result2 = (result2 && false);
        } catch (e) {
            result2 = (result2 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-2: JSON.parse - parsing an object where property name starts with a null character",true,result2);

    var result3=true;
    for (index in nullChars) {
        try {
            var obj = JSON.parse('{' + "name" + nullChars[index] + ' : "John" } ');
            result3 = (result3 && false);
        } catch (e) {
            result3 = (result3 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-3: JSON.parse - parsing an object where property name ends with a null character",true,result3);

    var result4=true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{' + nullChars[index] + "name" + nullChars[index] + ' : "John" } ');
            result4 = (result4 && false);
        } catch (e) {
            result4 = (result4 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-4: JSON.parse - parsing an object where property name starts and ends with a null character",true,result4);

    var result5=true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{ ' + "na" + nullChars[index] + "me" + ' : "John" } ');
            result5 = (result5 && false);
        } catch (e) {
            result5 = (result5 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-5: JSON.parse - parsing an object where property name middles with a null character",true,result5);

    var result6=true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{ "name" : ' + nullChars[index] + ' } ');
            result6 = (result6 && false);
        } catch (e) {
            result6 = (result6 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-6: JSON.parse - parsing an object where property value is a null character",true,result6);

    var result7=true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{ "name" : ' + nullChars[index] + "John" + ' } ');
            result7 = (result7 && false);
        } catch (e) {
            result7 = (result7 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-7: JSON.parse - parsing an object where property value starts with a null character",true,result7);

    var result8=true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{ "name" : ' + "John" + nullChars[index] + ' } ');
            result8 = (result8 && false);
        } catch (e) {
            result8 = (result8 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-8: JSON.parse - parsing an object where property value ends with a null character",true,result8);

    var result9=true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{ "name" : ' + nullChars[index] + "John" + nullChars[index] + ' } ');
            result9 = (result9 && false);
        } catch (e) {
            result9 = (result9 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-9: JSON.parse - parsing an object where property value starts and ends with a null character",true,result9);

    var result10=true;
    for (index in nullChars) {
        try {
            obj = JSON.parse('{ "name" : ' + "Jo" + nullChars[index] + "hn" + ' } ');
            result10 = (result10 && false);
        } catch (e) {
            result10 = (result10 && (e instanceof SyntaxError));
        }
    }
    AddTestCase("15.12.2-2-10: JSON.parse - parsing an object where property value middles with a null character",true,result10);

    test();
    
    Object.prototype.toString = oldObject;
    Array.prototype.toString = oldArray;

}

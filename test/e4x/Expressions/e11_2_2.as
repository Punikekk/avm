/* ***** BEGIN LICENSE BLOCK ***** 
 Version: MPL 1.1/GPL 2.0/LGPL 2.1 

The contents of this file are subject to the Mozilla Public License Version 1.1 (the 
"License"); you may not use this file except in compliance with the License. You may obtain 
a copy of the License at http://www.mozilla.org/MPL/ 

Software distributed under the License is distributed on an "AS IS" basis, WITHOUT 
WARRANTY OF ANY KIND, either express or implied. See the License for the specific 
language governing rights and limitations under the License. 

The Original Code is [Open Source Virtual Machine.] 

The Initial Developer of the Original Code is Adobe System Incorporated.  Portions created 
by the Initial Developer are Copyright (C)[ 2005-2006 ] Adobe Systems Incorporated. All Rights 
Reserved. 

Contributor(s): Adobe AS3 Team

Alternatively, the contents of this file may be used under the terms of either the GNU 
General Public License Version 2 or later (the "GPL"), or the GNU Lesser General Public 
License Version 2.1 or later (the "LGPL"), in which case the provisions of the GPL or the 
LGPL are applicable instead of those above. If you wish to allow use of your version of this 
file only under the terms of either the GPL or the LGPL, and not to allow others to use your 
version of this file under the terms of the MPL, indicate your decision by deleting provisions 
above and replace them with the notice and other provisions required by the GPL or the 
LGPL. If you do not delete the provisions above, a recipient may use your version of this file 
under the terms of any one of the MPL, the GPL or the LGPL. 

 ***** END LICENSE BLOCK ***** */
/* -*- Mode: java; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * The contents of this file are subject to the Netscape Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/NPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is Rhino code, released
 * May 6, 1999.
 *
 * The Initial Developer of the Original Code is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1997-2000 Netscape Communications Corporation. All
 * Rights Reserved.
 *
 * Contributor(s):
 * Igor Bukanov 
 * Rob Ginda rginda@netscape.com
 *
 * Alternatively, the contents of this file may be used under the
 * terms of the GNU Public License (the "GPL"), in which case the
 * provisions of the GPL are applicable instead of those above.
 * If you wish to allow use of your version of this file only
 * under the terms of the GPL and not to allow others to use your
 * version of this file under the NPL, indicate your decision by
 * deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL.  If you do not delete
 * the provisions above, a recipient may use your version of this
 * file under either the NPL or the GPL.
 */

START("11.2.2 - Function Calls");


rectangle = <rectangle>
            <x>50</x>
            <y>75</y>
            <length>20</length>
            <width>30</width>
            </rectangle>;    


TEST(1, 1, rectangle.length());

TEST(2, <length>20</length>, rectangle.length);

shipto = <shipto>
         <name>Fred Jones</name>
         <street>123 Foobar Ave.</street>
         <citystatezip>Redmond, WA, 98008</citystatezip>
         </shipto>;


upperName = shipto.name.toUpperCase();
TEST(3, "FRED JONES", upperName);

upperName = shipto.name.toString().toUpperCase();
TEST(4, "FRED JONES", upperName);
upperName = shipto.name.toUpperCase();
TEST(5, "FRED JONES", upperName);

citystatezip = shipto.citystatezip.split(", ");
state = citystatezip[1];
TEST(6, "WA", state);
zip = citystatezip[2];
TEST(7, "98008", zip);


citystatezip = shipto.citystatezip.toString().split(", ");
state = citystatezip[1];
TEST(8, "WA", state);
zip = citystatezip[2];
TEST(9, "98008", zip);

foo = <top><apple>hello</apple></top>;
var1 = foo.apple;
foo.apple = "moi";
TEST(10, <apple>moi</apple>, var1);

// Test method name/element name conflicts

x1 = 
<alpha>
    <name>Foo</name>
    <length>Bar</length>
</alpha>;

TEST(11, QName("alpha"), x1.name());
TEST(12, <length>Bar</length>, x1.length);
TEST(13, 1, x1.length());
TEST(14, x1, x1.(length == "Bar"));

x1.name = "foobar";

TEST(15, <name>foobar</name>, (x1.name));
TEST(16, QName("alpha"), (x1.name()));

var xml = "<person><name>Bubba</name></person>";

AddTestCase("person.name:", "Bubba", (x1 = new XML(xml), x1.name.toString()));

AddTestCase("person.name():", "person", (x1 = new XML(xml), x1.name().toString()));


xml = "<i><length>5</length><width>30</width></i>";

AddTestCase("i.length:", "5", (x1 = new XML(xml), x1.length.toString()));

AddTestCase("i.length():", 1, (x1 = new XML(xml), x1.length()));


xml = "<xml><parent><i>a</i><i>b</i><i>c</i></parent></xml>";
var p = new XMLList(xml).parent;

AddTestCase("x.parent:", p, (x1 = new XML(xml), x1.parent));

AddTestCase("x.parent():", undefined, (x1 = new XML(xml), x1.parent()));

AddTestCase("x.parent.parent():", x1, (x1 = new XML(xml), x1.parent.parent()));



END();

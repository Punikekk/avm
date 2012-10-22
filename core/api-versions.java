/* DO NOT EDIT THIS FILE!  It was generated by utils/apivergen.abc. */

/* This Source Code Form is subject to the terms of the Mozilla Public * License, v. 2.0. If a copy of the MPL was not distributed with this * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

package adobe.abc;

public class APIVersions {

public static final int kApiVersionSeries_AIR = 0;
public static final int kApiVersionSeries_FP = 1;

public static final int kApiVersionSeries_count = 2;

public static final int kApiVersion_VM_ALLVERSIONS = 0;
public static final int kApiVersion_AIR_1_0 = 1;
public static final int kApiVersion_FP_10_0 = 2;
public static final int kApiVersion_AIR_1_5 = 3;
public static final int kApiVersion_AIR_1_5_1 = 4;
public static final int kApiVersion_FP_10_0_32 = 5;
public static final int kApiVersion_AIR_1_5_2 = 6;
public static final int kApiVersion_FP_10_1 = 7;
public static final int kApiVersion_AIR_2_0 = 8;
public static final int kApiVersion_AIR_2_5 = 9;
public static final int kApiVersion_FP_10_2 = 10;
public static final int kApiVersion_AIR_2_6 = 11;
public static final int kApiVersion_SWF_12 = 12;
public static final int kApiVersion_AIR_2_7 = 13;
public static final int kApiVersion_SWF_13 = 14;
public static final int kApiVersion_AIR_3_0 = 15;
public static final int kApiVersion_SWF_14 = 16;
public static final int kApiVersion_AIR_3_1 = 17;
public static final int kApiVersion_SWF_15 = 18;
public static final int kApiVersion_AIR_3_2 = 19;
public static final int kApiVersion_SWF_16 = 20;
public static final int kApiVersion_AIR_3_3 = 21;
public static final int kApiVersion_SWF_17 = 22;
public static final int kApiVersion_AIR_3_4 = 23;
public static final int kApiVersion_SWF_18 = 24;
public static final int kApiVersion_AIR_3_5 = 25;
public static final int kApiVersion_SWF_19 = 26;
public static final int kApiVersion_AIR_3_6 = 27;
public static final int kApiVersion_VM_INTERNAL = 28;

public static final int kApiVersion_count = 29;

public static final String kApiVersionNames[]= {
    "VM_ALLVERSIONS", 
    "AIR_1_0", 
    "FP_10_0", 
    "AIR_1_5", 
    "AIR_1_5_1", 
    "FP_10_0_32", 
    "AIR_1_5_2", 
    "FP_10_1", 
    "AIR_2_0", 
    "AIR_2_5", 
    "FP_10_2", 
    "AIR_2_6", 
    "SWF_12", 
    "AIR_2_7", 
    "SWF_13", 
    "AIR_3_0", 
    "SWF_14", 
    "AIR_3_1", 
    "SWF_15", 
    "AIR_3_2", 
    "SWF_16", 
    "AIR_3_3", 
    "SWF_17", 
    "AIR_3_4", 
    "SWF_18", 
    "AIR_3_5", 
    "SWF_19", 
    "AIR_3_6", 
    "VM_INTERNAL"
};

public static final int kApiVersionSeriesMembership[] = {
    (1<<kApiVersionSeries_AIR)|(1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_FP),
    (1<<kApiVersionSeries_AIR),
    (1<<kApiVersionSeries_AIR)|(1<<kApiVersionSeries_FP)
};

public static final int kApiVersionSeriesTransfer[][] = {
    { kApiVersion_VM_ALLVERSIONS, kApiVersion_VM_ALLVERSIONS }, // VM_ALLVERSIONS
    { kApiVersion_AIR_1_0, kApiVersion_VM_INTERNAL }, // AIR_1_0
    { kApiVersion_AIR_1_5, kApiVersion_FP_10_0 }, // FP_10_0
    { kApiVersion_AIR_1_5, kApiVersion_VM_INTERNAL }, // AIR_1_5
    { kApiVersion_AIR_1_5_1, kApiVersion_VM_INTERNAL }, // AIR_1_5_1
    { kApiVersion_AIR_1_5_2, kApiVersion_FP_10_0_32 }, // FP_10_0_32
    { kApiVersion_AIR_1_5_2, kApiVersion_VM_INTERNAL }, // AIR_1_5_2
    { kApiVersion_AIR_2_0, kApiVersion_FP_10_1 }, // FP_10_1
    { kApiVersion_AIR_2_0, kApiVersion_VM_INTERNAL }, // AIR_2_0
    { kApiVersion_AIR_2_5, kApiVersion_VM_INTERNAL }, // AIR_2_5
    { kApiVersion_AIR_2_6, kApiVersion_FP_10_2 }, // FP_10_2
    { kApiVersion_AIR_2_6, kApiVersion_VM_INTERNAL }, // AIR_2_6
    { kApiVersion_AIR_2_7, kApiVersion_SWF_12 }, // SWF_12
    { kApiVersion_AIR_2_7, kApiVersion_VM_INTERNAL }, // AIR_2_7
    { kApiVersion_AIR_3_0, kApiVersion_SWF_13 }, // SWF_13
    { kApiVersion_AIR_3_0, kApiVersion_VM_INTERNAL }, // AIR_3_0
    { kApiVersion_AIR_3_1, kApiVersion_SWF_14 }, // SWF_14
    { kApiVersion_AIR_3_1, kApiVersion_VM_INTERNAL }, // AIR_3_1
    { kApiVersion_AIR_3_2, kApiVersion_SWF_15 }, // SWF_15
    { kApiVersion_AIR_3_2, kApiVersion_VM_INTERNAL }, // AIR_3_2
    { kApiVersion_AIR_3_3, kApiVersion_SWF_16 }, // SWF_16
    { kApiVersion_AIR_3_3, kApiVersion_VM_INTERNAL }, // AIR_3_3
    { kApiVersion_AIR_3_4, kApiVersion_SWF_17 }, // SWF_17
    { kApiVersion_AIR_3_4, kApiVersion_VM_INTERNAL }, // AIR_3_4
    { kApiVersion_AIR_3_5, kApiVersion_SWF_18 }, // SWF_18
    { kApiVersion_AIR_3_5, kApiVersion_VM_INTERNAL }, // AIR_3_5
    { kApiVersion_AIR_3_6, kApiVersion_SWF_19 }, // SWF_19
    { kApiVersion_AIR_3_6, kApiVersion_VM_INTERNAL }, // AIR_3_6
    { kApiVersion_VM_INTERNAL, kApiVersion_VM_INTERNAL } // VM_INTERNAL
};

public static final int kApiVersionFirst[] = {
    kApiVersion_AIR_1_0,
    kApiVersion_FP_10_0
};

public static final int kApiVersionLatest[] = {
    kApiVersion_AIR_3_6,
    kApiVersion_SWF_19
};

};

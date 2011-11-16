/* -*- Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil; tab-width: 4 -*- */
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
 * Portions created by the Initial Developer are Copyright (C) 2004-2006
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


#include "avmplus.h"
#include "BuiltinNatives.h"
#include <float.h>

#ifdef VMCFG_FLOAT

namespace avmplus
{
    FloatClass::FloatClass(VTable* cvtable)
    : ClassClosure(cvtable)
    {
        MathUtils::initRandom(&seed);
        toplevel()->_floatClass = this;
        // prototype objects are always vanilla objects.
        createVanillaPrototype();
    }
    
    Atom FloatClass::construct(int argc, Atom* argv)
    {
        // Float called as constructor creates new Float instance
        // Note: new Float() with no args returns 0 - as does Number
        if (argc == 0)
            return core()->floatAtom(zeroIntAtom);

        if(argc != 1)
            vtable->init->argcError(argc);

        return core()->floatAtom(argv[1]);
    }
    
    
    float FloatClass::abs(float x)
    {
        return MathUtils::absf(x);
    }
    
    float FloatClass::acos(float x)
    {
        return MathUtils::acosf(x);
    }
    
    float FloatClass::asin(float x)
    {
        return MathUtils::asinf(x);
    }
    
    float FloatClass::atan(float x)
    {
        return MathUtils::atanf(x);
    }
    
    float FloatClass::atan2(float y, float x)
    {
        return MathUtils::atan2f(y, x);
    }
    
    float FloatClass::ceil(float x)
    {
        return MathUtils::ceilf(x);
    }
    
    float FloatClass::cos(float x)
    {
        return MathUtils::cosf(x);
    }
    
    float FloatClass::exp(float x)
    {
        return MathUtils::expf(x);
    }
    
    float FloatClass::floor(float x)
    {
        return MathUtils::floorf(x);
    }
    
    float FloatClass::log(float x)
    {
        return MathUtils::logf(x);
    }
    
    float FloatClass::pow(float x, float y)
    {
        return (float)MathUtils::pow((double)x, (double)y);
    }
    
    float FloatClass::random()
    {
        return (float)MathUtils::random(&seed);
    }
    
    float FloatClass::reciprocal(float x)
    {
        return 1 / x;                   // FIXME: This must use the intrinsic
    }
    
    float FloatClass::round(float x)
    {
        return MathUtils::roundf(x);
    }
    
    float FloatClass::rsqrt(float x)
    {
        return 1 / MathUtils::sqrtf(x); // FIXME: this must use the intrinsic
    }

    float FloatClass::sin(float x)
    {
        return MathUtils::sinf(x);
    }
    
    float FloatClass::sqrt(float x)
    {
        return MathUtils::sqrtf(x);
    }
    
    float FloatClass::tan(float x)
    {
        return MathUtils::tanf(x);
    }

    // volatile externals to keep the constant propagator from outsmarting us.
    volatile float minFloat = 1.4013e-45f;   // this is the denormalized min float value,i.e. numeric_limits<float>::denorm_min() (but we don't want to include STL, so the call is not explicit here)
    volatile float minNormalizedFloat = FLT_MIN; // typically 1.17549e-38f; should be guaranteed by the system headers to be minimum normalized float 
    
    float FloatClass::_minValue()
    {
        // https://bugzilla.mozilla.org/show_bug.cgi?id=555805
        //
        // The ARM architecture saves transistors by not implementing subnormal floating point numbers in
        // hardware.  Instead, those values produce a trap ("bounce") so that they can be emulated in software.
        // There is, however, a "RunFast" mode that suppresses the "bounce" and instead does a
        // "flush-to-zero" on underflow.  Some platforms operate in RunFast mode by default and while it
        // is possible for user code to turn off that mode, it seems to be in the OS's purview to install
        // the trap handler.  Long story short, on certain ARM-based platforms, values smaller than the smallest
        // normalized floating point value are snapped (flushed) to zero.
        //
        // The definitive reference URLs appear to be perishable, but the terms in quotes above are useful in searches:
        //      http://www.google.com/search?q=ARM+runfast+flush-to-zero+bounce
        //
        // The issue seems specific to ARM processors (though perhaps other mobilized cores as well), but will only occur
        // if the platform opts not to install an emulator trap.  So we dynamically find the smallest value, being wary of
        // techniques that might be optimized away by compilers (and especially cross-compilers!).
        float minValue = minFloat;
        if (minValue == 0.0)
            minValue = minNormalizedFloat;
#ifdef _DEBUG
        // It's going to be either 0x1 (1.4013e-45f) if subnormals are supported or 0x00800000 (1.17549e-38f) if not.
        union {
            float f;
            uint32_t ui;
        } float_overlay;
        float_overlay.f = minValue;
        AvmAssert((float_overlay.ui == 1) || (float_overlay.ui == 0x800000));
#endif
        return minValue;
    }

    Stringp FloatClass::_convert(float n, int precision, int mode)
    {
        AvmCore* core = this->core();
        
        int lowerBound = 0, upperBound = 20;
        if (mode == MathUtils::DTOSTR_PRECISION)
        {
            lowerBound = 1; upperBound = 21;
        }

        if (precision < lowerBound || precision > upperBound)
            toplevel()->throwRangeError(kInvalidPrecisionError, core->toErrorString(precision), core->toErrorString(lowerBound), core->toErrorString(upperBound));

        return MathUtils::convertDoubleToString(core, n, mode, precision);
    }

    Stringp FloatClass::_floatToString(float fVal, int radix)
    {
        AvmCore* core = this->core();

        if (radix == 10 || MathUtils::isInfinite(fVal) || MathUtils::isNaN(fVal))
            return core->doubleToString(fVal); // the spec says we should call doubleToString

        if (radix < 2 || radix > 36)
            toplevel()->throwRangeError(kInvalidRadixError, core->toErrorString(radix));


        return MathUtils::convertDoubleToStringRadix(core, fVal, radix);
    }


}
#endif

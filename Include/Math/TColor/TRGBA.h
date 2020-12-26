#pragma once

#include "TColor/ColorBase.h"
#include "TColor/TRGB.h"
namespace tcolor
{

template <typename Type> struct TRGBA : ColorBase<ColorType::RGBA, Type, 4>
{

    TRGBA();

    TRGBA(Type value);

    TRGBA(Type r, Type g, Type b, Type a);

    inline Type Grayscale();

    inline TRGBA Linear();

    inline TRGB<Type> ToRGB();
    
};

} // namespace tcolor

#include "Math/TColor/TRGBA-inl.h"
#pragma once
#include "TColor/ColorBase.h"
// #include "TColor/TRGBA.h"

template<typename Type>
struct TRGBA;


namespace tcolor
{

    template <typename Type>
    struct TRGB : ColorBase<ColorType::RGB, Type, 3>
    {
        

        TRGB();

        TRGB(Type value);
  
        TRGB(Type r, Type g, Type b);

        TRGBA <Type> ToRGBA();
    
} // namespace tcolor

#include "Math/TColor/TRGB-inl.h"

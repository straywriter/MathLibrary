#pragma once

#include "TColor/ColorBase.h"
#include "TColor/TRGB.h"
namespace tcolor
{

    template <typename Type>
    struct TRGBA : ColorBase<ColorType::RGBA, Type, 4>
    {

        TRGBA()
        {
            this->data[0] = static_cast<Type>(0);
            this->data[1] = static_cast<Type>(0);
            this->data[2] = static_cast<Type>(0);
            this->data[3] = static_cast<Type>(0);
        }

        TRGBA(Type r, Type g, Type b, Type a)
        {
            this->data[0] = r;
            this->data[1] = g;
            this->data[2] = b;
            this->data[3] = a;
        }


inline Type Grayscale();

inline TRGBA Linear();













inline        TRGB<Type> ToRGB()
        {
            return TRGB<Type>(this->r, this->g, this->b);
        }
    };

} // namespace tcolor
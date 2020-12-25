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

        TRGB()
        {
            this->data[0] = static_cast<Type>(0);
            this->data[1] = static_cast<Type>(0);
            this->data[2] = static_cast<Type>(0);
        }

        TRGB(Type r, Type g, Type b)
        {
            this->data[0] = r;
            this->data[1] = g;
            this->data[2] = b;
        }

        // using myTRGBA=tcolor::TRGBA<Type,size>;

        TRGBA <Type> ToRGBA()
        {
            return TRGBA<Type >(this->r, this->g, this->b, static_cast<Type>(0));
        }
    };
} // namespace tcolor

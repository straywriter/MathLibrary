#pragma once

using namespace tcolor;

template <typename Type> inline tcolor::TRGBA<Type>::TRGBA() : ColorBase()
{
}

tcolor::TRGBA(Type value) : ColorBase(value)
{
}

tcolor::TRGBA(Type r, Type g, Type b, Type a)
{
    this->data[0] = r;
    this->data[1] = g;
    this->data[2] = b;
    this->data[3] = a;
}

template <typename Type> inline TRGB<Type> tcolor::TRGBA<Type>::ToRGB()
{
    return TRGB<Type>(this->r, this->g, this->b);
}
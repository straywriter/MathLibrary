#pragma once

using namespace tcolor;

template <typename Type> inline tcolor::TRGB<Type>::TRGB() : ColorBase()
{
}

template <typename Type> inline tcolor::TRGB<Type>::TRGB(Type value)
{
}

template <typename Type> inline tcolor::TRGB<Type>::TRGB(Type r, Type g, Type b)
{
    this->r = r;
    this->g = g;
    this->b = b;
}

template <typename Type> inline TRGBA<Type> tcolor::TRGB<Type>::ToRGBA()
{
    return TRGBA<Type>(this->r, this->g, this->b, static_cast<Type>(0));
}
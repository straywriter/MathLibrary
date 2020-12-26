/**
 * @file Vector2.h
 *
 * @date 2020-12-25
 *
 * @copyright Copyright (c) 2020
 *
 */
#pragma once
#include "Math/TVector/VectorBase.h"

namespace tvector
{

template <typename Type> struct TVector2 : VectorBase<Type, 2, TVector2<Type>>
{

    TVector2();

    TVector2(Type value);

    TVector2(Type x, Type y);

    static TVector2 CrossProduct(const TVector2 &value);

    TVector2 Cross(const TVector2 &value);


    const static TVector2<Type> zero;
    //TODO: left right ...
};

} // namespace tvector

#include "Math/TVector/Vector2-inl.h"
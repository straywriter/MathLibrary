/**
 * @file Vector4.h
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

template <typename Type> struct TVector4 : VectorBase<Type, 4, TVector4<Type>>
{
    TVector4();

    TVector4(Type value);

    TVector4(Type x, Type y, Type z, Type w);



    const static TVector4 zero;
    //TODO: right ...

};

} // namespace tvector

#include "Math/TVector/Vector4-inl.h"
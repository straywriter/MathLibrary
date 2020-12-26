/**
 * @file Vector3.h
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

template <typename Type> struct TVector3 : VectorBase<Type, 3, TVector3<Type>>
{

    TVector3();

    TVector3(Type value);

    TVector3(Type x, Type y, Type z);

    void Set(Type x, Type y, Type z);

    Type GetMax();
    Type GetAbsMax();
    Type GetMin();
    Type GetAbsMin();

    Type ComponentMin(const TVector3 &other) const;
    Type ComponentMax(const TVector3 &other) const;

    static TVector3 CrossProduct(const TVector3 &value);

    TVector3 Cross(const TVector3 &value);

    const static TVector3 zero;

};

// template<typename Type>
// // const  TVector3<Type> TVector3<Type>::zero=TVector3<Type>(static_cast<Type>(0));
// const  TVector3<Type> TVector3<Type>::zero=TVector3<Type>(0);

} // namespace tvector

#include "Math/TVector/Vector3-inl.h"
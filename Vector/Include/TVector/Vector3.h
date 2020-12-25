#pragma once
#include "TVector/VectorBase.h"

namespace tvector
{

    template <typename Type>
    struct TVector3 : VectorBase<Type, 3, TVector3<Type>>
    {

        // using VectorBase::VectorBase;
        // using VectorBase::operator+;

        TVector3():VectorBase()
        {
        }
        TVector3(Type x, Type y, Type z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }
    };
} // namespace tvector
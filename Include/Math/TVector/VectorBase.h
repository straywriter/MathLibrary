/**
 * @file VectorBase.h
 *
 * @date 2020-12-25
 *
 * @copyright Copyright (c) 2020
 *
 */
#pragma once
#include "Math/TVector/VectorData.h"

// #include "MathUtil.h"
#include <cmath>
#include <iostream>

namespace tvector
{

/**
 * VectorBase template for vector
 *
 * @tparam Type
 * @tparam size
 * @tparam Sub
 */
template <typename Type, size_t size, typename Sub> struct VectorBase : tvector::VectorData<Type, size>
{

    /** deflaut constructor */
    VectorBase();

    VectorBase(Type value);

    static Type DotProduct(const Sub &first, const Sub &second);

    static Sub Lerp(const Sub &first, const Sub &second, const Type &tolerance);

    Type Dot(const Sub &var);

    bool Normalize();

    bool Normalize(Type tolerance);

    Sub OrthoNormalize();

    Type SquaredLength();

    Type Lenth();
    Sub Abs();
    Sub GetAbs();
    bool IsNormalized();
    bool IsUnit();
    bool IsZero();

    inline Type operator[](size_t index);

    inline Sub operator+(const Sub &var) const;
    inline Sub operator+(Type var) const;
    inline Sub operator-(const Sub &var) const;
    inline Sub operator-(Type var) const;
    inline Sub operator*(const Sub &var) const;
    inline Sub operator*(Type scale) const;
    inline Sub operator/(const Sub &var) const;
    inline Sub operator/(Type scale);

    inline Sub operator-() const;

    inline Sub operator+=(const Sub &var);
    inline Sub operator+=(Type var);
    inline Sub operator-=(const Sub &var);
    inline Sub operator-=(Type var);
    inline Sub operator*=(const Sub &var);
    inline Sub operator*=(Type scale);
    inline Sub operator/=(const Sub &var);
    inline Sub operator/=(Type scale);

    inline bool operator==(const Sub &var) const;
    inline bool operator!=(const Sub &var) const;
    inline bool operator<(const Sub &var) const;
    inline bool operator<=(const Sub &var) const;
    inline bool operator>(const Sub &var) const;
    inline bool operator>=(const Sub &var) const;

    inline friend std::ostream &operator<<(std::ostream &out, const Sub &var)
    {
        for (auto i = 0; i < size; i++)
            out << var.data[i] << ' ';
        return out;
    }
};
/*
template <typename Type, size_t size, typename Sub>
std::ostream &operator<<(std::ostream &out, const VectorBase<Type, size, Sub> &obj);
*/

} // namespace tvector

#include "Math/TVector/VectorBase-inl.h"
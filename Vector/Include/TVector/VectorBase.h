#pragma once
#include "TVector/VectorData.h"

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
    VectorBase()
    {
        for (auto i = size; i--; this->data[i] = 0)
            ;
    }

    VectorBase(Type value)
    {
        for (auto i = size; i--; this->data[i] = value)
            ;
    }

    static const VectorBase zero;

    inline static Type DotProduct(const Sub &first, const Sub &second)
    {
        Type temp = static_cast<Type>(0);
        for (auto i = size; i--; temp += first.data[i] * second.data[i])
            ;
        return temp;
    }

    inline static Sub Lerp(const Sub &first, const Sub &second, const Type &tolerance)
    {
        // TDDO: clamp use globle math util
        Type tempTolerance = static_cast<Type>(0);
        if (tolerance < static_cast<Type>(0))
            tempTolerance = static_cast<Type>(0);
        elif (tolerance > static_cast<Type>(1)) tempTolerance = static_cast<Type>(1);
        else tempTolerance = tolerance;

        Sub temp;
        for (auto i = size; i--; temp.data[i] = first.data[i] + tempTolerance * (second.data[i] - first.data[i]))
            ;
        return temp;
    }

    // inline VectorBase CrossProduct(const VectorBase &first, const VectorBase &second)
    // {
    //     VectorBase remp;
    //     for (auto i = size;)
    //         ;
    //     return temp;
    // }

    inline bool Normalize(Type tolerance)
    {
        Type lenth = Lenth();

        if (lenth > tolerance)
        {
            Type scale = static_cast<Type>(1) / lenth;
            for (auto i = size; i--; this->data[i] *= scale)
                ;
            return true;
        }
        return false;
        /**
        Type squareLenth = SquaredLength();

        if (squareLenth > tolerence)
        {
            Type scale = math::InverseSquare(squareLenth);
            for (auto i = size; i--; this->data[i] *= scale)
                ;
            return true;
        }
        return false;
         */
    }

    inline bool Normalize()
    {

        Type temp = 0;
        for (auto i = size; i--; temp += this->data[i] * this->data[i])
            ;
        auto lenth = std::sqrt(temp);

        // Type lenth = Lenth();

        if (lenth > static_cast<Type>(0))
        {
            Type scale = static_cast<Type>(1) / lenth;
            for (auto i = size; i--; this->data[i] *= scale)
                ;
            return true;
        }
        return false;
        /**
        Type squareLenth = SquaredLength();

        if (squareLenth > static_cast<Type>(0))
        {
            Type scale = math::InverseSquare(squareLenth);
            for (auto i = size; i--; this->data[i] *= scale)
                ;
            return true;
        }
        return false;
          */
    }

    inline VectorBase OrthoNormalize();

    inline Type Dot(const Sub &var)
    {
        Type temp = static_cast<Type>(0);
        for (auto i = size; i--; temp += this->data[i] * var.data[i])
            ;
        return temp;
    }

    // inline Type Lenth()
    // {
    //     Type temp;
    //     for (auto i = size; i--; temp += this->data[i] * this->data[i])
    //         ;
    //     return math::Sqrt(temp);
    // }

    inline Type SquaredLength()
    {
        Type temp;
        for (auto i = size; i--; temp += this->data[i] * this->data[i])
            ;
        return temp;
    }

    // Normal

    // Lerp

    // TODO:  Max Min Project Abs

    inline Sub Abs()
    {
        Sub temp;
        // TODO: abs shoud usr mathutil
        for (auto i = size; i--; this->data[i] = std::abs(this->data[i]))
            ;
        return temp;
    }

    inline bool IsNormalized();

    inline bool IsZero();

    // operator
    friend std::ostream &operator<<(std::ostream &out, const Sub &var)
    {
        for (auto i = 0; i < size; i++)
            out << var.data[i] << ' ';
        return out;
    }

    
    Sub operator+(const Sub &var) const;

    // inline Sub operator+(const Sub &var) const
    // {
    //     Sub temp;
    //     for (auto i = size; i--; temp.data[i] = this->data[i] + var.data[i])
    //         ;
    //     return temp;
    // }

    /** 
     * operator + overload
     * @return Sub
     */
    inline Sub operator+(Type var) const
    {
        Sub temp;
        for (auto i = size; i--; temp.data[i] = this->data[i] + var)
            ;
        return temp;
    }

    // TODO: += Type var

    inline Sub operator+=(const Sub &var)
    {
        for (auto i = size; i--; this->data[i] += var.data[i])
            ;
        return *this;
    }
    inline Sub operator-(const Sub &var) const
    {
        Sub temp;
        for (auto i = size; i--; temp.data[i] = this->data[i] - var.data[i])
            ;
        return temp;
    }
    inline Sub operator-(Type var) const
    {
        Sub temp;
        for (auto i = size; i--; temp.data[i] = this->data[i] - var)
            ;
        return temp;
    }

    inline Sub operator-=(const Sub &var)
    {
        for (auto i = size; i--; this->data[i] -= var.data[i])
            ;
        return *this;
    }

    inline Sub operator*(const Sub &var) const
    {
        Sub temp;
        for (auto i = size; i--; temp.data[i] = this->data[i] * var.data[i])
            ;
        return temp;
    }

    inline Sub operator*(Type scale) const
    {
        Sub temp;
        for (auto i = size; i--; temp.data[i] = this->data[i] * scale)
            ;
        return temp;
    }

    inline Sub operator*=(const Sub &var)
    {
        for (auto i = size; i--; this->data[i] *= var.data[i])
            ;
        return *this;
    }

    inline Sub operator*=(Type scale)
    {
        for (auto i = size; i--; this->data[i] *= scale)
            ;
        return *this;
    }

    inline Sub operator/(const Sub &var) const
    {
        Sub temp;
        for (auto i = size; i--; temp.data[i] = this->data[i] / var.data[i])
            ;
        return temp;
    }

    inline Sub operator/(Type scale)
    {
        Sub temp;
        const Type cScale = static_cast<Type>(1) / scale;
        for (auto i = size; i--; temp.data[i] = this->data[i] * cScale)
            ;
        return temp;
    }

    inline Sub operator/=(const Sub &var)
    {
        for (auto i = size; i--; this->data[i] /= scale)
            ;
        return *this;
    }
    inline Sub operator/=(Type scale)
    {
        const Type cScale = static_cast<Type>(1) / scale;
        for (auto i = size; i--; this->data[i] * cScale)
            ;
        return *this;
    }
    inline Sub operator-() const
    {
        Sub temp;
        for (auto i = size; i--; temp.data[i] = -this->data[i])
            ;
        return temp;
    }

    inline Type operator[](size_t index)
    {
        return this->data[index];
    }

    inline bool operator==(const Sub &var) const
    {
        for (auto i = size; i--;)
        {
            if (!(this->data[i] == var.data[i]))
                return flase;
        }
        return true;
    }

    inline bool operator!=(const Sub &var) const
    {
        for (auto i = size; i--;)
        {
            if (this->data[i] == var.data[i])
                return flase;
        }
        return true;
    }
};

template <typename Type, size_t size, typename Sub>
inline Sub VectorBase<Type, size, Sub>::operator+(const Sub &var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] + var.data[i])
        ;
    return temp;
}

} // namespace tvector
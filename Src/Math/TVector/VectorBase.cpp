#include "Math/TVector/VectorBase.h"

template <typename Type, size_t size, typename Sub>
Type tvector::VectorBase<Type, size, Sub>::DotProduct(const Sub &first, const Sub &second)
{
    Type temp = static_cast<Type>(0);
    for (auto i = size; i--; temp += first.data[i] * second.data[i])
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub>
Sub tvector::VectorBase<Type, size, Sub>::Lerp(const Sub &first, const Sub &second, const Type &tolerance)
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

template <typename Type, size_t size, typename Sub> Type tvector::VectorBase<Type, size, Sub>::Dot(const Sub &var)
{

    Type temp = static_cast<Type>(0);
    for (auto i = size; i--; temp += this->data[i] * var.data[i])
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub> bool tvector::VectorBase<Type, size, Sub>::Normalize()
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
    /*
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

template <typename Type, size_t size, typename Sub> bool tvector::VectorBase<Type, size, Sub>::Normalize(Type tolerance)
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
    /*
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

template <typename Type, size_t size, typename Sub> Sub tvector::VectorBase<Type, size, Sub>::OrthoNormalize()
{
}

template <typename Type, size_t size, typename Sub> Type tvector::VectorBase<Type, size, Sub>::SquaredLength()
{
    Type temp;
    for (auto i = size; i--; temp += this->data[i] * this->data[i])
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub> Type tvector::VectorBase<Type, size, Sub>::Lenth()
{
    //     Type temp;
    //     for (auto i = size; i--; temp += this->data[i] * this->data[i])
    //         ;
    //     return math::Sqrt(temp);
}

template <typename Type, size_t size, typename Sub> Sub tvector::VectorBase<Type, size, Sub>::Abs()
{
    Sub temp;
    // TODO: abs shoud usr mathutil
    for (auto i = size; i--; this->data[i] = std::abs(this->data[i]))
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub> Sub tvector::VectorBase<Type, size, Sub>::GetAbs()
{
}

template <typename Type, size_t size, typename Sub> bool tvector::VectorBase<Type, size, Sub>::IsNormalized()
{
}

template <typename Type, size_t size, typename Sub> bool tvector::VectorBase<Type, size, Sub>::IsUnit()
{
}

template <typename Type, size_t size, typename Sub> bool tvector::VectorBase<Type, size, Sub>::IsZero()
{
}

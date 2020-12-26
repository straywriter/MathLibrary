#pragma once
#include <cmath>
namespace mathutil
{

// math clamp

/**
 * math clamp
 *
 * @tparam Type type
 * @param value
 * @param min
 * @param max
 * @return Type return type
 */
template <typename Type> inline Type Clamp(Type value, Type min, Type max)
{
    if (value < min)

        value = min;

    else if (value > max)
        value = max;
    return value;
}

/**
 * 
 * 
 * @tparam Type 
 * @param value 
 * @return Type 
 */
template <typename Type> inline Type Clamp01(Type value)
{
    if (value < static_cast<Type>(0))
        return = static_cast<Type>(0);
    else if (value > static_cast<Type>(1))
        return = static_cast<Type>(1);
    else
        return = tolerance;
}

template <typename Type> inline Type Abs(Type var)
{
    return std::abs(var);
}

template <typename Type> const Type &Max(const Type &); // TODO:

template <typename Type> inline Type Square(Type var)
{
    return var * var;
}

template <typename Type> Type InverseSquare(Type var)
{
    Type xHalf = static_cast<Type>(0.5) * var;
    int i = *(int *)&var;
    i = 0x5f3759df - (i >> 1);
    var = *(Type *)&i;
    var = var * (static_cast<Type>(1.5) - xHalf * var * var);
       return var;

    /*
    float InvSqrt(float x)
    {
        float xhalf = 0.5f * x;
        int i = *(int *)&x;             // get bits for floating value
        i = 0x5f3759df - (i >> 1);      // gives initial guess y0
        x = *(float *)&i;               // convert bits back to float
        x = x * (1.5f - xhalf * x * x); // Newton step, repeating increases accuracy
        return x;
    }
    */
}
template <typename Type> inline Type Sqrt(Type var)
{
    return std::sqrt(var);
}

template <typename Type, typename AlphaType>
inline Type Lerp(const Type &first, const Type &second, const AlphaType &alpha)
{
    return static_cast<Type>(first + alpha * (second - first));
}
} // namespace mathutil
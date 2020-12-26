#include "ColorBase.h"
#include <iostream>

using namespace tcolor;

template <ColorType CT, typename Type, size_t size, typename Sub>
inline tcolor::ColorBase<CT, Type, size, Sub>::ColorBase()
{
    for (auto i = size; i--; this->data[i] = 0)
        ;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline tcolor::ColorBase<CT, Type, size, Sub>::ColorBase(Type value)
{
    for (auto i = size; i--; this->data[i] = value)
        ;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Type tcolor::ColorBase<CT, Type, size, Sub>::operator[](size_t index)
{
    // TODO: assert
    return this->data[index];
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator+(const Sub &var) const
{
    ColorBase temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] + var.data[i])
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator+(Type var) const
{
    ColorBase temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] + var)
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator-(const Sub &var) const
{
    ColorBase temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] - var.data[i])
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator-(Type var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] - var)
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator*(const Sub &var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] * var.data[i])
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator*(Type scale) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] * scale)
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator/(const Sub &var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] / var.data[i])
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator/(Type scale)
{
    Sub temp;
    const Type cScale = static_cast<Type>(1) / scale;
    for (auto i = size; i--; temp.data[i] = this->data[i] * cScale)
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator-() const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = -this->data[i])
        ;
    return temp;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator+=(const Sub &var)
{
    for (auto i = size; i--; this->data[i] += var.data[i])
        ;
    return *this;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator+=(Type var)
{
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator-=(const Sub &var)
{
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator-=(Type var)
{
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator*=(const Sub &var)
{
    for (auto i = size; i--; this->data[i] *= var.data[i])
        ;
    return *this;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator*=(Type scale)
{
    for (auto i = size; i--; this->data[i] *= scale)
        ;
    return *this;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator/=(const Sub &var)
{
    for (auto i = size; i--; this->data[i] /= scale)
        ;
    return *this;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline Sub tcolor::ColorBase<CT, Type, size, Sub>::operator/=(Type scale)
{
    const Type cScale = static_cast<Type>(1) / scale;
    for (auto i = size; i--; this->data[i] * cScale)
        ;
    return *this;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline bool tcolor::ColorBase<CT, Type, size, Sub>::operator==(const Sub &var) const
{
    for (auto i = size; i--;)
    {
        if (!(this->data[i] == var.data[i]))
            return false;
    }
    return true;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline bool tcolor::ColorBase<CT, Type, size, Sub>::operator!=(const Sub &var) const
{
    for (auto i = size; i--;)
    {
        if (this->data[i] == var.data[i])
            return flase;
    }
    return true;
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline bool tcolor::ColorBase<CT, Type, size, Sub>::operator<(const Sub &var) const
{
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline bool tcolor::ColorBase<CT, Type, size, Sub>::operator<=(const Sub &var) const
{
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline bool tcolor::ColorBase<CT, Type, size, Sub>::operator>(const Sub &var) const
{
}

template <ColorType CT, typename Type, size_t size, typename Sub>
inline bool tcolor::ColorBase<CT, Type, size, Sub>::operator>=(const Sub &var) const
{
}


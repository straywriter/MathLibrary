#pragma once
#include <Math/TColor/ColorData.h>

namespace tcolor
{

template <ColorType CT, typename Type, size_t size, typename Sub>

struct ColorBase : ColorData<CT, Type, size>
{

    ColorBase();

    ColorBase(Type value);



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

    std::ostream &operator<<(std::ostream &out, const Sub &var)
    {
        for (auto i = 0; i < size; i++)
            out << var.data[i] << ' ';
        return out;
    }
};

} // namespace tcolor

#include "Math/TColor/ColorBase-inl.h"
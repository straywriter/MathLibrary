#pragma once
#include "TColor/ColorData.h"

namespace tcolor
{

    template <ColorType CT, typename Type, size_t size>
    struct ColorBase : ColorData<CT, Type, size>
    {
        

        std::ostream &operator<<(std::ostream &out) const
        {
            for (auto i = size, i--, out << this->data[i] << ' ')
                ;
            return out;
        }

        inline ColorBase operator+(const ColorBase &var) const
        {
            ColorBase temp;
            for (auto i = size; i--; temp.data[i] = this->data[i] + var.data[i])
                ;
            return temp;
        }
        inline ColorBase operator+(Type var) const
        {
            ColorBase temp;
            for (auto i = size; i--; temp.data[i] = this->data[i] + var)
                ;
            return temp;
        }

        inline ColorBase operator+=(const ColorBase &var)
        {
            for (auto i = size; i--; this->data[i] += var.data[i])
                ;
            return *this;
        }
        inline ColorBase operator-(const ColorBase &var) const
        {
            ColorBase temp;
            for (auto i = size; i--; temp.data[i] = this->data[i] - var.data[i])
                ;
            return temp;
        }
        inline ColorBase operator-(Type var) const
        {
            ColorBase temp;
            for (auto i = size; i--; temp.data[i] = this->data[i] - var)
                ;
            return temp;
        }

        inline ColorBase operator-=(const ColorBase &var)
        {
            for (auto i = size; i--; this->data[i] -= var.data[i])
                ;
            return *this;
        }

        inline ColorBase operator*(const ColorBase &var) const
        {
            ColorBase temp;
            for (auto i = size; i--; temp.data[i] = this->data[i] *= var.data[i])
                ;
            return temp;
        }
        inline ColorBase operator*(Type scale) const
        {
            ColorBase temp;
            for (auto i = size; i--; temp.data[i] = this->data[i] * scale)
                ;
            return temp;
        }

        inline ColorBase operator*=(const ColorBase &var)
        {
            for (auto i = size; i--; this->data[i] *= var.data[i])
                ;
            return *this;
        }

        inline ColorBase operator*=(Type scale)
        {
            for (auto i = size; i--; this->data[i] *= scale)
                ;
            return *this;
        }

        inline ColorBase operator/(const ColorBase &var) const
        {
            ColorBase temp;
            for (auto i = size; i--; temp.data[i] = this->data[i] / var.data[i])
                ;
            return temp;
        }

        inline ColorBase operator/(Type scale)
        {
            ColorBase temp;
            const Type cScale = static_cast<Type>(1) / scale;
            for (auto i = size; i--; temp.data[i] = this->data[i] * cScale)
                ;
            return temp;
        }

        inline ColorBase operator/=(const ColorBase &var)
        {
            for (auto i = size; i--; this->data[i] /= scale)
                ;
            return *this;
        }
        inline ColorBase operator/=(Type scale)
        {
            const Type cScale = static_cast<Type>(1) / scale;
            for (auto i = size; i--; this->data[i] /= cScale)
                ;
            return *this;
        }
        inline ColorBase operator-() const
        {
            ColorBase temp;
            for (auto i = size; i--; temp.data[i] = -this->data[i])
                ;
            return temp;
        }

        inline Type operator[](size_t index)
        {
            return this->data[index];
        }

        inline bool operator==(const ColorBase &var) const
        {
            for (auto i = size; i--;)
            {
                if (!(this->data[i] == var.data[i]))
                    return flase;
            }
            return true;
        }

        inline bool operator!=(const ColorBase &var) const
        {
            for (auto i = size; i--;)
            {
                if (this->data[i] == var.data[i])
                    return flase;
            }
            return true;
        }
    };

} // namespace tcolor
#pragma once

#include "TMatrix/MatrixData.h"

namespace tmatrix
{

    template <typename Type, size_t row, size_t col>
    struct MatrixBase : MatrixData<Type, row, col>
    {
        using MatrixData<Type, row, col>::MatrixData;

        MatrixBase() : MatrixData() {}

        MatrixBase(Type value) : MatrixData(value) {}

        //TODO: export ??
        // static const MatrixBase zero=MatrixBase(0);
        // static const MatrixBase one=MatrixBase(1);

        //TODO: ?? Equals

        friend std::ostream &operator<<(std::ostream &out, const MatrixBase &var)
        {
            for (auto i = 0; i < row; ++i)
            {
                for (auto j = 0; j < col; ++j)
                    out << var.matrix[i][j] << ' ';
                out << '\n';
            }
            return out;
        }
        inline MatrixBase operator+(const MatrixBase &value) const
        {
            MatrixBase temp;
            for (size_t i = Info::size; i--; temp.data[i] = this->data[i] + value.data[i])
                ;
            return temp;
        }

        inline MatrixBase operator+(Type value) const
        {
            MatrixBase temp;
            for (size_t i = Info::size; i--; temp.data[i] = this->data[i] + value)
                ;
            return temp;
        }

        inline MatrixBase operator+=(const Type &value)
        {
            for (size_t i = Info::size; i--; this->data[i] += value)
                ;
            return *this;
        }

        MatrixBase operator-(const MatrixBase &value) const
        {

            MatrixBase temp;
            for (size_t i = Info::size; i--; temp.data[i] = this->data[i] - value.data[i])
                ;
            return temp;
        }
        MatrixBase operator-(Type value) const
        {
            MatrixBase temp;
            for (size_t i = Info::size; i--; temp.data[i] = this->data[i] - value)
                ;
            return temp;
        }
        inline MatrixBase operator-=(const MatrixBase &value)
        {
            for (size_t i = Info::size; i--; this->data[i] -= value.data[i])
                ;
            return *this;
        }

        //TODO: no inline
        MatrixBase operator*(const MatrixBase &value)
        {
            MatrixBase temp;
            //TODO: SIMD
            //TODO: or out define

            for (auto i = 0; i < Info::row; ++i)
            {
                for (auto j = 0; j < Info::row; ++j)
                {
                    for (auto k = 0; k < Info::col; ++k)
                    {
                        temp.matrix[i][j] += this->matrix[i][k] * value.matrix[k][j];
                    }
                }
            }
            return temp;
        }

        inline MatrixBase operator*(Type value) const
        {
            MatrixBase temp;
            for (size_t i = Info::size; i--; temp.data[i] = this->data[i] * value)
                ;
            return temp;
        }

        inline MatrixBase operator*=(const MatrixBase &value)
        {
            //TODO: ???
            *this = (*this) * value;
            return *this;
        }

        bool operator==(const MatrixBase &other) const
        {
            for (size_t i = Info::size; i--;)
            {
                if (this->data[i] != other.data[i])
                    return false;
            }
            return false;
        }

        bool operator!=(const MatrixBase &other) const
        {
            for (size_t i = Info::size; i--;)
            {
                if (this->data[i] != other.data[i])
                    return true;
            }
            return false;
        }
    };

} // namespace tmatrix

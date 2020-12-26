

using namespace tvector;

template <typename Type, size_t size, typename Sub> VectorBase<Type, size, Sub>::VectorBase()
{
    for (auto i = size; i--; this->data[i] = 0)
        ;
}

template <typename Type, size_t size, typename Sub> VectorBase<Type, size, Sub>::VectorBase(Type value)
{
    for (auto i = size; i--; this->data[i] = value)
        ;
}

template <typename Type, size_t size, typename Sub> inline Type VectorBase<Type, size, Sub>::operator[](size_t index)
{
    // TODO: assert
    return this->data[index];
}

// arithmetic operatorins

template <typename Type, size_t size, typename Sub>
inline Sub VectorBase<Type, size, Sub>::operator+(const Sub &var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] + var.data[i])
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator+(Type var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] + var)
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub>
inline Sub VectorBase<Type, size, Sub>::operator-(const Sub &var) const
{

    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] - var.data[i])
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator-(Type var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] - var)
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub>
inline Sub VectorBase<Type, size, Sub>::operator*(const Sub &var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] * var.data[i])
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator*(Type scale) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] * scale)
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub>
inline Sub VectorBase<Type, size, Sub>::operator/(const Sub &var) const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = this->data[i] / var.data[i])
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator/(Type scale)
{
    Sub temp;
    const Type cScale = static_cast<Type>(1) / scale;
    for (auto i = size; i--; temp.data[i] = this->data[i] * cScale)
        ;
    return temp;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator-() const
{
    Sub temp;
    for (auto i = size; i--; temp.data[i] = -this->data[i])
        ;
    return temp;
}

// arithmatic update

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator+=(const Sub &var)
{
    for (auto i = size; i--; this->data[i] += var.data[i])
        ;
    return *this;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator+=(Type var)
{
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator-=(const Sub &var)
{
    for (auto i = size; i--; this->data[i] -= var.data[i])
        ;
    return *this;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator-=(Type var)
{
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator*=(const Sub &var)
{
    for (auto i = size; i--; this->data[i] *= var.data[i])
        ;
    return *this;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator*=(Type scale)
{
    for (auto i = size; i--; this->data[i] *= scale)
        ;
    return *this;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator/=(const Sub &var)
{
    for (auto i = size; i--; this->data[i] /= scale)
        ;
    return *this;
}

template <typename Type, size_t size, typename Sub> inline Sub VectorBase<Type, size, Sub>::operator/=(Type scale)
{
    const Type cScale = static_cast<Type>(1) / scale;
    for (auto i = size; i--; this->data[i] * cScale)
        ;
    return *this;
}

//

template <typename Type, size_t size, typename Sub>
inline bool VectorBase<Type, size, Sub>::operator==(const Sub &var) const
{
    for (auto i = size; i--;)
    {
        if (!(this->data[i] == var.data[i]))
            return false;
    }
    return true;
}

template <typename Type, size_t size, typename Sub>
inline bool VectorBase<Type, size, Sub>::operator!=(const Sub &var) const
{
    for (auto i = size; i--;)
    {
        if (this->data[i] == var.data[i])
            return flase;
    }
    return true;
}

template <typename Type, size_t size, typename Sub>
inline bool VectorBase<Type, size, Sub>::operator<(const Sub &var) const
{
}

template <typename Type, size_t size, typename Sub>
inline bool VectorBase<Type, size, Sub>::operator<=(const Sub &var) const
{
}

template <typename Type, size_t size, typename Sub>
inline bool VectorBase<Type, size, Sub>::operator>(const Sub &var) const
{
}

template <typename Type, size_t size, typename Sub>
inline bool VectorBase<Type, size, Sub>::operator>=(const Sub &var) const
{
}

/*
template <typename Type, size_t size, typename Sub>
inline std::ostream &tvector::operator<<(std::ostream &out, const VectorBase<Type, size, Sub> &var)
{
    for (auto i = 0; i < size; i++)
        out << var.data[i] << ' ';
    return out;
}
*/
#include "Vector4.h"

template<typename Type>
inline tvector::TVector4<Type>::TVector4():VectorBase()
{
}

template<typename Type>
inline tvector::TVector4<Type>::TVector4(Type value):VectorBase(value)
{
}

template<typename Type>
inline tvector::TVector4<Type>::TVector4(Type x, Type y, Type z, Type w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}



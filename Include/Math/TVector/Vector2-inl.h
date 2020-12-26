#include "Vector2.h"

template<typename Type>
inline tvector::TVector2<Type>::TVector2():VectorBase()
{
}

template<typename Type>
inline tvector::TVector2<Type>::TVector2(Type value):VectorBase(value)
{
}

template<typename Type>
inline tvector::TVector2<Type>::TVector2(Type x, Type y)
{
	this->x = x;
	this->y = y;
}


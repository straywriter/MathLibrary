#include "Vector3.h"
#pragma  once

template<typename Type>
// const  TVector3<Type> TVector3<Type>::zero=TVector3<Type>(static_cast<Type>(0));
const  TVector3<Type> TVector3<Type>::zero=TVector3<Type>(static_cast<Type>(0));

template<typename Type>
inline tvector::TVector3<Type>::TVector3():VectorBase()
{

}

template<typename Type>
inline tvector::TVector3<Type>::TVector3(Type value):VectorBase(value)
{
}

template<typename Type>
inline tvector::TVector3<Type>::TVector3(Type x, Type y, Type z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

template<typename Type>
inline void tvector::TVector3<Type>::Set(Type x, Type y, Type z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

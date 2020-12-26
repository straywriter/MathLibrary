/**
 * @file VectorData.h
 * 
 * @date 2020-12-25
 * 
 * @copyright Copyright (c) 2020
 */
#pragma once

namespace tvector
{
template <typename Type, size_t size> struct VectorData
{
    union {
        Type data[size];
    };
};

template <typename Type> struct VectorData<Type, 2>
{
    union {
        struct
        {
            Type u, v;
        };
        struct
        {
            Type x, y;
        };
        Type data[2];
    };
};

template <typename Type> struct VectorData<Type, 3>
{
    union {
        struct
        {
            Type x, y, z;
        };
        Type data[3];
    };
};

template <typename Type> struct VectorData<Type, 4>
{
    union {
        struct
        {
            Type x, y, z, w;
        };
        Type data[4];
    };
};

} // namespace tvector
#pragma once

namespace tvector
{
    template <typename Type, size_t size>
    struct VectorData
    {
        union
        {
            Type data[size];
        };
    };

    template <typename Type>
    struct VectorData<Type, 2>
    {
        union
        {
            
            struct
              {
                Type x, y;
            };
            Type data[2];
        };
    };

    template <typename Type>
    struct VectorData<Type, 3>
    {
        union
        {
            struct
            {
                Type x, y, z;
            };
            Type data[3];
        };
    };
    

    template <typename Type>
    struct VectorData<Type, 4>
    {
        union
        {
            struct
            {
                Type x, y, z, w;
            };
            Type data[4];
        };
    };

} // namespace tvector
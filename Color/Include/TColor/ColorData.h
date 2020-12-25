

namespace tcolor
{

    enum ColorType
    {
        RGB,
        RGBA,
        CIE,
        HSI,
        HSV,
        YUV,
        YCbCr,
        Lab,

    };

    template <ColorType CT, typename Type, size_t size>
    struct ColorData
    {
        union
        {
            Type data[size];
        };
    };

    template <typename Type>
    struct ColorData<RGB, Type, 3>
    {
        union
        {
            struct
            {
                Type r, g, b;
            };
            Type data[3];
        };
    };

    template <typename Type>
    struct ColorData<ColorType::RGBA, Type, 4>
    {
        union
        {
            struct
            {
                Type r, g, b, a;
            };
            Type data[4];
        };
    };

} // namespace tcolor

#include <iostream>


// #include "TLinearOperator.h" //TODO: 

#include "TVector/VectorData.h"
#include "TVector/VectorBase.h"
#include "Color.h"
#include "TVector/Vector3.h"
#include "Matrix.h"

using v3ft = tvector::TVector3<float>;
using v4f = tcolor::TRGBA<float>;
using color3f = tcolor::TRGB<float>;

int main()
{


    Color xxx(9, 34, 4, 3);
    color3f test(1, 2, 3);
    color3f a(0, 0, 0);
    v4f testa(4, 5, 6, 7);

    // std::cout<<testa.a;
    auto x = testa.ToRGB();
    std::cout << typeid(x).name() << x.r << '\n';
    auto y = x.ToRGBA();
    std::cout << typeid(y).name() << y.a << y.b << '\n';

    v3ft f1(1, 3, 2);
    v3ft f2(3, 2, 5);

    v3ft pp;
    auto hh = f1 * f2;
    auto qq = f1.Normalize();
    auto uu = v3ft::DotProduct(f1, f2);
    std::cout << typeid(uu).name() << uu;
    std::cout << typeid(qq).name() << f1;
    hh = hh + 1;
    std::cout << "\nhello\n"
              << a.r << test.r << test.g << test.b << '\n'
              << test.data[1];

    //test matrix

    using m4f = tmatrix::MatrixBase<float, 4, 4>;

    m4f m4f1(2.f);
    m4f m2(3.f);

    auto m3 = m2 * m4f1;

    std::cout<<"\nmatrix\n"<<m4f1;
    std::cout<<typeid(m4f::size).name();
}
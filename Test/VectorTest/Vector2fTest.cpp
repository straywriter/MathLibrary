#include "Math/Vector.h"

#include "gtest/gtest.h"
#define GTEST_COUT std::cerr << "[ INFO     ] "

TEST(testCase, test0)
{
    Vector a(1, 1, 1);
    Vector b(1, 1, 1);
    auto x = a + b;

    Vector c(2, 2, 2);

    GTEST_COUT << a << '\n';
    GTEST_COUT << c << '\n';
    EXPECT_EQ(c, x);
}

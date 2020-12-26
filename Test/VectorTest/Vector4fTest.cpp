#include "Math/Vector.h"

#include "gtest/gtest.h"

TEST(testCase, test0)
{
    Vector a(1, 1, 1);
    Vector b(1, 1, 1);
    auto x = a + b;

    Vector c(2, 2, 2);

    EXPECT_EQ(c,x);
}

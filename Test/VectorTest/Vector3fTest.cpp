#include "Math/Vector.h"

#include "gtest/gtest.h"

TEST(Vector3fTest, ConstructorTest)
{
    Vector a(1, 1, 1);
    Vector b(1, 1, 1);
    auto x = a + b;

    Vector c(2, 2, 2);

    EXPECT_EQ(c, x);
}

TEST(Vector3fTest, OperatorAddTest)
{

    Vector a(1.1f, 1.2f, 1.3f);
    Vector b(1.1f, 1.2f, 1.3f);
    auto x = a - b;

    Vector c=Vector::zero;

    EXPECT_EQ(c, x);
}
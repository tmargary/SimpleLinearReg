#include <reg/reg.h>
#include <math_form/math_form.h>
#include "const.h"
#include <gtest/gtest.h>

TEST(reg_Test, TestCoeff)
{
    Regression reg(X, Y);
    reg.fit();
    
    const auto expected = coeff;
    const auto actual = reg.getCoeff();
    ASSERT_NEAR(expected, actual, 1e-6);
}

TEST(reg_Test, TestIntercept)
{
    Regression reg(X, Y);
    reg.fit();
    
    const auto expected = intercept;
    const auto actual = reg.getIntercept();
    ASSERT_NEAR(expected, actual, 1e-6);
}

TEST(math_form_Test, TestDotProd)
{    
    const auto expected = dot_prod_xy;
    const auto actual = DotProd(X, Y);
    ASSERT_NEAR(expected, actual, 1e-6);
}

TEST(math_form_Test, TestSumOfSquares)
{    
    const auto expected = sum_of_squares_x;
    const auto actual = SumOfSquares(X);
    ASSERT_NEAR(expected, actual, 1e-6);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

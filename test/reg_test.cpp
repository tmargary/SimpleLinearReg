#include "reg.h"
#include <gtest/gtest.h>

TEST(reg_Test, TestOne)
{
    std::vector<float> X {1714, 1664, 1760, 1685, 1693, 1670};
    std::vector<float> Y {2.4, 2.52, 2.54, 2.74, 2.83, 2.91};

    Regression reg(X, Y);
    reg.fit();
    
    const auto expected = 6.94098;
    const auto actual = reg.getCoeff();
    ASSERT_EQ(expected, actual);
}

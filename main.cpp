#include <iostream>
#include <stdio.h>
using namespace std;

#include "reg.h"

// Driver code
int main()
{
    std::vector<float> X {1714, 1664, 1760, 1685, 1693, 1670};
    std::vector<float> Y {2.4, 2.52, 2.54, 2.74, 2.83, 2.91};

    Regression reg(X, Y);

    // Printing the best fitting line
    reg.fit();
    reg.printFit();
}

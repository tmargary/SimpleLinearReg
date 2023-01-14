#include <iostream>
#include <stdio.h>
using namespace std;

#include "reg.cpp"

// Driver code
int main()
{
    freopen("/home/tigran/Documents/_current/SimpleLinearReg/input.txt", "r", stdin);
    Regression reg;

    // (xi, yi)
    int n;
    cin >> n;

    std::cout << n << std::endl;

    // Calling function takeInput to
    // take input of n pairs
    reg.takeInput(n);

    // Printing the best fitting line
    reg.PrintBestFittingLine();
}

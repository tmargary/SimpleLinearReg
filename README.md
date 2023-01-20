# SimpleLinearReg
Simple Linear Regression Implementation In C++

### Installation
1. `git clone git@github.com:tmargary/SimpleLinearReg.git`
2. `cd SimpleLinearReg`
3. `cmake -B [build directory] -S . -DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake`
4. `./test/reg_test`

### Usage Example
```
int main()
{
    std::vector<double> X {1714, 1664, 1760, 1685, 1693, 1670};
    std::vector<double> Y {2.4, 2.52, 2.54, 2.74, 2.83, 2.91};

    Regression reg(X, Y);
    reg.fit();
    reg.printFit();
}
```

### Minimum Requirements
- Linux
- C++ 17
- Cmake 3.15

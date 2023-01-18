# SimpleLinearReg
Simple Linear Regression Implementation In C++

### Installation
1. `git clone --recurse-submodules git@github.com:tmargary/SimpleLinearReg.git`
2. `cd SimpleLinearReg && mkdir build && cd build && cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles"`
3. `make all && ./test/SimpleLinearReg_test`

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


#include <vector>
#include <numeric>
using namespace std;

double DotProd(const vector<double>& a, const vector<double>& b)
{
    return std::inner_product(a.begin(), a.end(), b.begin(), 0.0);
}

double SumOfSquares(const vector<double>& a)
{
    return DotProd(a, a);
}


#include <vector>
#include <numeric>
using namespace std;

float DotProd(const vector<float>& a, const vector<float>& b)
{
    return std::inner_product(a.begin(), a.end(), b.begin(), 0.0);
}

float SumOfSquares(const vector<float>& a)
{
    return DotProd(a, a);
}

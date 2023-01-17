#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

#include "reg.h"
#include "math_form.h"

void Regression::fit(){

    if (!isFit){
        sumX = std::accumulate(X.begin(), X.end(), 0.0);
        sumY = std::accumulate(Y.begin(), Y.end(), 0.0);
        sumXY = DotProd(X, Y);
        sumXsquare = SumOfSquares(X);
        sumYsquare = SumOfSquares(Y);
        calcCoef();
        calcIntercept();
    }  
    
}

void Regression::calcCoef()
{
    float N = X.size();
    float numtr = (N * sumXY - sumX * sumY);
    float dumtr = (N * sumXsquare - sumX * sumX);
    coeff = numtr / dumtr;
}

void Regression::calcIntercept()
{
    float N = X.size();
    float numtr = (sumY * sumXsquare - sumX * sumXY);
    float dumtr = (N * sumXsquare - sumX * sumX);
    intercept = numtr / dumtr;
}

void Regression::printFit()
{
    cout << "The best fitting line is y = " << coeff << "x + " << intercept << endl << endl;
}

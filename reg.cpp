#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "reg.h"


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

void Regression::fit(){

    if (!isFit){
        float N = X.size();
        for (int i=0; i < N; ++i){
            sumXY += X[i] * Y[i];
            sumX += X[i];
            sumY += Y[i];
            sumXsquare += X[i] * X[i];
            sumYsquare += Y[i] * Y[i];
        }

        calcCoef();
        calcIntercept();
    }  
    
}

void Regression::printFit()
{
    cout << "The best fitting line is y = " << coeff << "x + " << intercept << endl << endl;
}

#ifndef REG_H
#define REG_H

#include <stdio.h>
#include <vector>
using namespace std;

class Regression
{
public:
	Regression(const vector<float> X, const vector<float> Y){
        this->X = X;
        this->Y = Y;
    };
	void calcCoef();
	void calcIntercept();
	void printFit();
	void fit();
    
private:
	vector<float> X;
	vector<float> Y;
	float coeff=0;
	float intercept=0;
	float sumXY=0;
	float sumX=0;
	float sumY=0;
	float sumXsquare=0;
	float sumYsquare=0;
	bool isFit=false;
};

#endif
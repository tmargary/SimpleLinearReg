#ifndef REG_H
#define REG_H

#include <stdio.h>
#include <vector>
using namespace std;

class Regression
{
public:
	Regression(const vector<double> X, const vector<double> Y){
        this->X = X;
        this->Y = Y;
    };
	void calcCoef();
	void calcIntercept();
	void printFit();
	void fit();
	double getCoeff(){return coeff;}
	double getIntercept(){return intercept;}
    
private:
	vector<double> X;
	vector<double> Y;
	double coeff=0;
	double intercept=0;
	double sumXY=0;
	double sumX=0;
	double sumY=0;
	double sumXsquare=0;
	double sumYsquare=0;
	bool isFit=false;
};

#endif
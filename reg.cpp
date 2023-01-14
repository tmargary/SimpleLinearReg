#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

////////////////////////////////////////////////////////////
#include <stdio.h>
#include <vector>
using namespace std;

class Regression
{
	vector<float> x;
	vector<float> y;
	float coeff;
	float constTerm;
	float sum_xy;
	float sum_x;
	float sum_y;
	float sum_x_square;
	float sum_y_square;

public:
	Regression();
	void calculateCoefficient();
	void calculateConstantTerm();
	void PrintBestFittingLine();
	void takeInput(int n);
};
////////////////////////////////////////////////////////////

Regression::Regression()
{
    coeff = 0;
    constTerm = 0;
    sum_y = 0;
    sum_y_square = 0;
    sum_x_square = 0;
    sum_x = 0;
    sum_xy = 0;
}

void Regression::calculateCoefficient()
{
    float N = x.size();
    float numerator = (N * sum_xy - sum_x * sum_y);
    float denominator = (N * sum_x_square - sum_x * sum_x);
    coeff = numerator / denominator;
}

void Regression::calculateConstantTerm()
{
    float N = x.size();
    float numerator = (sum_y * sum_x_square - sum_x * sum_xy);
    float denominator = (N * sum_x_square - sum_x * sum_x);
    constTerm = numerator / denominator;
}

void Regression::PrintBestFittingLine()
{
    if (coeff == 0 && constTerm == 0)
    {
        calculateCoefficient();
        calculateConstantTerm();
    }
    cout << "The best fitting line is y = " << coeff << "x + " << constTerm << endl << endl;
}

void Regression::takeInput(int n)
{
    for (int i = 0; i < n; i++)
    {
        // In a csv file all the values of
        // xi and yi are separated by commas
        char comma;
        float xi;
        float yi;
        cin >> xi >> comma >> yi;
        sum_xy += xi * yi;
        sum_x += xi;
        sum_y += yi;
        sum_x_square += xi * xi;
        sum_y_square += yi * yi;
        x.push_back(xi);
        y.push_back(yi);
    }
}
////////////////////////////////////////////////////////////
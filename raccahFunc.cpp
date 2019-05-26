#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1
#include "includes.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
using namespace RACCAH;

double RaccahW::funcW(double a, double b, double c)
{
    return a + b + c;
}
void RaccahW::showResult(double a, double b, double c)
{
    cout << "This is Raccah-W source file"
         << "\n";
}

double RaccahW::factorial(double x)
{
    return tgamma(x + 1.0);
}

double RaccahW::triangularFactor(double a, double b, double c)
{
    double t1, t2, t3, t4;
    t1 = factorial(a + b - c);
    t2 = factorial(a - b + c);
    t3 = factorial(-a + b + c);
    t4 = factorial(a + b + c + 1.0);
    return sqrt(t1 * t2 * t3 * t4);
}

double RaccahW::smallW(double a, double b, double c, double d, double e, double f)
{
    double alfa1, alfa2, alfa3, alfa4;
    double beta1, beta2, beta3;
    alfa1 = a + b + c;
    alfa2 = c + d + e;
    alfa3 = a + c + f;
    alfa4 = b + d + f;
    beta1 = a + b + c + d;
    beta2 = a + d + e + f;
    beta3 = b + c + e + f;
    vector<double> alfa[4], beta[3];
    //afla terms
    alfa[0].push_back(alfa1);
    alfa[1].push_back(alfa2);
    alfa[2].push_back(alfa3);
    alfa[3].push_back(alfa4);
    //beta terms
    beta[0].push_back(beta1);
    beta[1].push_back(beta2);
    beta[2].push_back(beta3);
    double minRange, maxRange;
    minRange = max(alfa.begin(), alfa.end());
}
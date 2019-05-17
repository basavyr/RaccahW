#include "includes.h"
#include <iostream>

using namespace std;
using namespace RACCAH;

double RaccahW::funcW(double a, double b, double c)
{
    return a + b + c;
}
void RaccahW::showResult()
{
    cout << "This is Raccah-W source file"
         << "\n";
    cout << funcW(a, b, c);
}

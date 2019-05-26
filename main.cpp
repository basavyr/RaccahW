#include "includes.h"
#include <iostream>

using namespace RACCAH;

int main()
{
    RaccahW myV;
    myV.showResult(1, 2, 3);
    std::cout << "\n";
    // std::cout<<myV.funcW(1, 2, 3);
    std::cout << myV.triangularFactor(1, 2, 3) << "\n";

    return 0;
}
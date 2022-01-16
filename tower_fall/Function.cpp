#include <iostream>
#include "constants.h"

using namespace constants;

double Function(double h,int t)
{
    return h-g*t*t/2;
}

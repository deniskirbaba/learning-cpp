#include <iostream>
#include "Structs.h"

double CalculationTotalEarnings(Advertising site)
{
    return site.earningPerClick*site.numberOfAds*site.percOfClick;
}

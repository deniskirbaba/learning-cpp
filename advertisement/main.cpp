#include <iostream>
#include "Functions.h"
#include "Structs.h"


int main()
{
    Advertising vk;
    vk=UserInput();
    double totalEarnings{CalculationTotalEarnings(vk)};
    OutputResult(totalEarnings);

    return 0;
}
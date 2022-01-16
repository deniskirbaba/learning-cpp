#include <iostream>
#include "Structions.h"

FractionalNumbers UserInput()
{
    using std::cout;
    using std::cin;

    cout<<"Enter fractional number: ";
    double number;
    cin>>number;
    FractionalNumbers fnumber;
    fnumber.fractionalPart=number%1;
    fnumber.wholePart=number-
}

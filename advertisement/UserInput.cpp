#include <iostream>
#include "Structs.h"

Advertising UserInput()
{
    Advertising site;
    std::cout<<"Enter a number of advertisments: ";
    std::cin>>site.numberOfAds;
    std::cout<<"Enter percentage of clicking on advertisment: ";
    std::cin>>site.percOfClick;
    site.percOfClick/=100;
    std::cout<<"Enter earning of one click: ";
    std::cin>>site.earningPerClick;

    return site;
}

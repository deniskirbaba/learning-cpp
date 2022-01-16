#include <iostream>
#include "towerfall.h"

int main()
{
    double height=UserInput();
    int time{0};
    double currentHeight=Function(height,time);

    while (currentHeight>0)
    {
        std::cout<<"Ball at a height of "<<currentHeight<<" meters."<<std::endl;
        ++time;
        currentHeight=Function(height,time);
    }

    return 0;
}

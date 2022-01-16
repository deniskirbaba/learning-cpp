#include <iostream>
#include <algorithm>

enum class TypesOfItems
{
    healthPotion,
    torch,
    arrow
};

void printItem(TypesOfItems &item)
{
    switch (item)
    {
        case TypesOfItems::healthPotion:
            std::cout<<"Health potion ";
            break;
        case TypesOfItems::torch:
            std::cout<<"Torch ";
            break;
        case TypesOfItems::arrow:
            std::cout<<"Arrow ";
            break;
    }
}

int main()
{
    int HealthPotionsInBackpack{3};
    int TorchesInBackpack{6};
    int ArrowsInBackpack{12};
    int totalNumberOfItemsInBackpack = HealthPotionsInBackpack+TorchesInBackpack+ArrowsInBackpack;

    TypesOfItems playerBackpack[totalNumberOfItemsInBackpack];

    int arrayIndex{0};

    for (int i{0};i<HealthPotionsInBackpack;++i)
    {
        playerBackpack[arrayIndex]=TypesOfItems::healthPotion;
        ++arrayIndex;
    }
    for (int i{0};i<TorchesInBackpack;++i)
    {
        playerBackpack[arrayIndex]=TypesOfItems::torch;
        ++arrayIndex;
    }
    for (int i{0};i<ArrowsInBackpack;++i)
    {
        playerBackpack[arrayIndex]=TypesOfItems::arrow;
        ++arrayIndex;
    }

    for (TypesOfItems item:playerBackpack)
        printItem(item);

    std::cout<<totalNumberOfItemsInBackpack;

    return 0;
}

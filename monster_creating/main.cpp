#include <iostream>
#include <string>
#include "MonsterCreating.h"
#include "MonsterTypeAndMonster.h"

int main()
{
    int numberOfMonsters;
    numberOfMonsters=NumberOfMonsters();

    for (numberOfMonsters;numberOfMonsters>0;numberOfMonsters--)
    {
        Monster monster;
        monster=CreateMonster();
        PrintMonster(monster);
        std::cout<<'\n';
    }
}

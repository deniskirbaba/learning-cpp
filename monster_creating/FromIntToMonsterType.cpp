#include <iostream>
#include <string>
#include "MonsterTypeAndMonster.h"

std::string FromIntToMonsterType(MonsterType type)
{
    (int)type;
    if (type==0)
        return "Ogre";
    if (type==1)
        return "Goblin";
    if (type==2)
        return "Orc";
    if (type==3)
        return "Troll";
    if (type==4)
        return "Skeleton";
}

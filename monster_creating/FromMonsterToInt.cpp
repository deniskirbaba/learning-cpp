#include <iostream>
#include <string>
#include "MonsterTypeAndMonster.h"

int FromMonsterTypeToInt(std::string Type)
{
	if (Type=="Ogre")
		return 0;
	if (Type=="Goblin")
		return 1;
	if (Type=="Orc")
		return 2;
	if (Type=="Troll")
		return 3;
	if (Type=="Skeleton")
		return 4;
}

#include <iostream>
#include <string>
#include "MonsterCreating.h"
#include "MonsterTypeAndMonster.h"

void PrintMonster(Monster monster)
{
	using namespace std;

	cout<<"This "<<FromIntToMonsterType(monster.monsterType)<<" is named "<<monster.monsterName<<" and has "<<monster.monsterHP<<" health\n";
}

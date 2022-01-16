#include <iostream>
#include <string>
#include "MonsterTypeAndMonster.h"
#include "MonsterCreating.h"

Monster CreateMonster()
{
	using namespace std;
    Monster monster;

	string Type;
	cout<<"Enter a monster type (Ogre, Goblin, Orc, Troll, Skeleton): ";
	cin>>Type;
	cin.ignore(32767,'\n');
	monster.monsterType=(MonsterType)FromMonsterTypeToInt(Type);

	cout<<"Enter a monster name: ";
	cin>>monster.monsterName;
	cin.ignore(32767,'\n');

	cout<<"Enter a monster HP: ";
	cin>>monster.monsterHP;

	return monster;

}

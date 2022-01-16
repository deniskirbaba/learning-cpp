#ifndef MONSTERTYPEANDMONSTER_H_INCLUDED
#define MONSTERTYPEANDMONSTER_H_INCLUDED

#include <string>

enum MonsterType
{
	OGRE,
	GOBLIN,
	ORC,
	TROLL,
	SKELETON,
};

struct Monster
{
	MonsterType monsterType;
	std::string monsterName;
	int monsterHP;
};


#endif // MONSTERTYPEANDMONSTER_H_INCLUDED

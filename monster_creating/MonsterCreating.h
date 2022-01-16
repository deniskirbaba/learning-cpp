#ifndef MONSTERCREATING_H_INCLUDED
#define MONSTERCREATING_H_INCLUDED
#include "MonsterTypeAndMonster.h"

int FromMonsterTypeToInt(std::string Type);
std::string FromIntToMonsterType(MonsterType type);
Monster CreateMonster();
void PrintMonster(Monster monster);
int NumberOfMonsters();

#endif // MONSTERCREATING_H_INCLUDED

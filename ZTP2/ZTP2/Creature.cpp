#include "Creature.h"



Creature::Creature(const char* name, const char* description, Room* position) : Entity(name, description), position(position)
{

}
Creature::~Creature()
{

}
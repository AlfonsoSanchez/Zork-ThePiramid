#ifndef _CREATURE_
#define _CREATURE_

#include "Entity.h"
#include "Room.h"
class Creature :public Entity
{
public:
	int hp;
	int atack;
	int speed;
	Room* position;
public:

	Creature(const char* name, const char * description, Room * position);
	~Creature();

};










#endif
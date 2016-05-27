#ifndef _NPC_
#define _NPC_

#include "Creature.h"
#include "Room.h"

class NPC : public Creature
{
public:
	Room* position = nullptr;
public:
	NPC(const char* name, const char* descrition, Room* position);

	~NPC();


};











#endif
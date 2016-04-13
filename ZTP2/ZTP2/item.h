#ifndef _ITEM_
#define _ITEM_
#include "rooms.h"
#include "exit.h"
#include "Entity.h"


class Item :public Entity{
public:
	Room* localitation = nullptr;
	Item();
	~Item();
	
	int atack;
	int special;
	bool invent;
	bool equiped;
	bool equipable;

};






#endif
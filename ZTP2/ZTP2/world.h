#ifndef _WORLD_
#define _WORLD_

#include "Entity.h"
#include "exit.h"
#include "item.h"
#include"mString.h"
#include"player.h"
#include"rooms.h"

#define NUM_ROOMS 12;
#define NUM_EXITS 28;
#define NUM_ITEMS 10;


class World{
public:
	World();
	~World();

	Room* room;
	Exit* exits;
	Player* player;
	Item * item;

	void createworld();
	bool input();
	void createitem();
	
};


#endif
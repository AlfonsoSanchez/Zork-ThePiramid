#ifndef _WORLD_
#define _WORLD_

#include "Entity.h"
#include "exit.h"

#include "mString.h"
#include"player.h"
#include "Room.h"
#include "mVector.h"

#define NUM_ROOMS 12;
#define NUM_EXITS 28;
#define NUM_ITEMS 10;

class World{
public:
	World();
	~World();
	Vector <Player*> player;
	Vector <Room*> room;
	Vector <Exit*> exit;
	mstring* string;

	void createworld();
	
	void go(const mstring*, Vector <Exit*>&, Player*, const dir) const;
	void look(const char*, const Exit*, Player*, const dir) const;
public:
	World();
	World();
	


};
#endif
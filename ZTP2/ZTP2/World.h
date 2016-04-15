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
	char* input = nullptr;

	void createworld();
	void Input();
	bool CheckInput();
	void CheckNorth();
	void CheckSouth();
	void CheckWest();
	void CheckEast();
	
public:
	World();
	World();
	


};
#endif
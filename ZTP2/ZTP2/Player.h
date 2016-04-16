#ifndef _PLAYER_
#define _PLAYER_

#include "Entity.h"
#include "Room.h"
#include "Exit.h"

class World;

class Player
{

public:
	Room* Playerposition;

	Player(Room* room);
	~Player();

public:
	void look() const;
	void lookalldirection(const World* world, dir direction) const;
	void move(const World* world, dir direction);
	void opendoor(World* world, dir direction);
	void closedoor(World* world, dir direction);
	

};


#endif
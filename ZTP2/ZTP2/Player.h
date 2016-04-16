#ifndef _PLAYER_
#define _PLAYER_
#include "Entity.h"
#include "Room.h"
#include "World.h"
#include "Exit.h"
class Player{
public:
	Room* playerposition;
public:

	Player(Room* room);
	~Player();

	void Look() const;
	void LookExit(const World* world, const dir direction )const;
	void Opendoor(World* world, bool opendor) const;
	void Closedoor(World* world, bool opendor) const;
	void Help()const;
	void Move(const World* world, const dir direction) ;
};





#endif
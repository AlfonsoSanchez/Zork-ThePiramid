#ifndef _PLAYER_
#define _PLAYER_
#include "Entity.h"
#include "Room.h"
#include "World.h"
#include "Exit.h"
#include "Entity.h"
class Player{
public:
	Room* playerposition;
public:

	Player(Room* room);
	~Player();

	void Look() const;
	void LookExit(World* world, const dir direction)const;
	void Opendoor World* world, const dir direction);
	void Closedoor(World* world, const dir direction);
	void Help()const;
	void Move(World* world , const dir );
};





#endif
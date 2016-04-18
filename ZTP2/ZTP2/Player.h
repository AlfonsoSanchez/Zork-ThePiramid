#ifndef _PLAYER_
#define _PLAYER_

#include "Entity.h"
#include "Exit.h"

class Room;
class World;

class Player :public Entity
{

public:
	Room* Playerposition;

	Player(const char* name,const char* decription,Room* room);
	~Player();

public:
	void look() const;
	void lookalldirection(const World* world, dir direction) const;
	void move(const World* world, dir direction);
	void opendoor(World* world, dir direction);
	void closedoor(World* world, dir direction);
	void Inventory() const;
	void PickItem(mstring item);
	void DropItem(mstring item);
	void GetItem(World* world, mstring item);
	void Put(World*world, mstring item);

};


#endif
#ifndef _EXIT_
#define _EXIT_
#include "Entity.h"
#include "Room.h"
enum dir{
	north,
	south,
	east,
	west,
	up,
	down,
};

class Exit : public Entity{
public:
	Room* origin;
	Room* destination;
	bool opendoor;
	dir direction;
public:
	Exit(const char*, const char*, dir, bool, Room*, Room*);
	~Exit();

};



#endif
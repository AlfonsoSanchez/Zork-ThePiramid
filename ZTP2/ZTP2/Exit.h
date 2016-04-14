#ifndef _EXIT_
#define _EXIT_
#include "Entity.h"
#include "Room.h"
enum dir{
	north,
	south,
	east,
	west,
};

class Exit : public Entity{
public:
	Room* origin;
	Room* destination;
	bool opendoor;
	dir direction;
public:
	Exit(const char*, const char*, dir, bool, Room*, Room*);


};



#endif
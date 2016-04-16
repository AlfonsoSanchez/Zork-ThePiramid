
#ifndef _EXIT_
#define _EXIT_
#include "Entity.h"


class Room;
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
	Room* Origin;
	Room* Destination;
	bool opendoor;
	dir direction;

public:
	Exit(const char*, const char*, dir,bool, Room*, Room*);
	~Exit();




};

#endif
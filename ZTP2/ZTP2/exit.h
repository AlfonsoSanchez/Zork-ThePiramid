#ifndef _Exits_
#define _Exits_
#include "Entity.h"
#include "rooms.h"
enum direction{
	Dnorth,
	Dsouth,
	Dwest,
	Deast,
	Ddown,
	Dup,
};



class Exit : public Entity{
public:
	Room *Origin;
	Room *Destination;

	bool opendoor;
	direction dir;
public:
	Exit();
	~Exit();

};


#endif
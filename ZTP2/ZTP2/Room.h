#ifndef _ROOMS_
#define _ROOMS_
#include "Entity.h"

class Room : public Entity
{

public:
	Room(const char*, const char*);
	~Room();
};

#endif
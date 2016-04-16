#ifndef _WORLD_
#define _WORLD_

#include "Entity.h"
#include "mVector.h"
#include "mString.h"
#include "Player.h"
#include "Exit.h"





class World
{
public:
	Vector <Player*> player;
	Vector <Room*> room;
	Vector <Exit*> exit;

	void CreateWorld();
	const void WorldIntro();

public:
	World();
	~World();

	bool Input();

};

#endif
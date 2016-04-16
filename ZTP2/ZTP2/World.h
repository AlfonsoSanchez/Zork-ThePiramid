#ifndef _WORLD_
#define _WORLD_


#include "mVector.h"
#include "mString.h"


class Item;
class Room;
class Exit;

class Player;





class World
{
public:
	Vector <Item*> items;
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
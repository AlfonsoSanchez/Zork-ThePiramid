#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "exit.h"
#include "player.h"

class World{
public:
	Rooms* room = nullptr;
	Exit* exits = nullptr;
	Player * player;

	World();
	~World();

	void CreateWorld()const;
	void CreateExits();

	




};
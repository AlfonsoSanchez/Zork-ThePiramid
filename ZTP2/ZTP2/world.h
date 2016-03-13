#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "exit.h"

class World{
public:
	Rooms* room = nullptr;
	Exit* exits = nullptr;
	World();
	~World();

	void CreateWorld()const;
	void CreateExits();

	




};
#include <stdio.h>
#include <stdlib.h>
#include "Room.h"
#include "World.h"
#include "Exit.h"
#include "Player.h"
#include "Entity.h"
#include "item.h"

int main()
{
	bool play = true;
	World* world = new World;
	world->CreateWorld();
	
	world->player[0]->look();
	do
	{
		play = world->Input();
	} while (play == true);

	delete world;

	getchar();
	return 0;
}
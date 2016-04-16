#include <stdio.h>
#include <stdlib.h>
#include "Room.h"
#include "World.h"
#include "Exit.h"
#include "Player.h"
#include "Entity.h"

int main()
{
	bool play = true;
	World* world = new World;
	world->CreateWorld();
	

	do
	{
		play = world->Input();
	} while (play == true);

	delete world;

	getchar();
	return 0;
}
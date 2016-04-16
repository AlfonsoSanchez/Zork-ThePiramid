#include "World.h"
#include <stdio.h>
#include "Room.h"




int main()
{
	bool quit = false;
	World* world = new World;
	world->createworld();
	
	do{
		quit = world->Input();
	} while (quit == false);

	delete world;


}

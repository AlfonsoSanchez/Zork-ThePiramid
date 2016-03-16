#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "world.h"
#include "exit.h"
#include "player.h"

int main(){

	World* world = new World;
	world->createworld();
	

	do
	{
		world->input();
	} while (1);

	delete world;




	return 0;



}
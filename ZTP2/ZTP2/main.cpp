#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "world.h"
#include "exit.h"
#include "player.h"

int main(){
	bool play = true;
	World* world = new World;
	world->createworld();
	
	printf("YOU CAN MOVEEE!!!!!!!! (use : n or north \n s or south \n e or east \n w or weast \n u or up\n d or down\n help or h \n");
	do
	{
		play=world->input();
	} while (play == true);

	delete world;

	printf("Thanks for play");
	getchar();

	return 0;



}
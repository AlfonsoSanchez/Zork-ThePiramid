#include <stdio.h>
#include <stdlib.h>
#include "player.h"
#include "world.h"
#include "exit.h"
#include "rooms.h"


int main(){
	int wincondition = 0;
	World r;
	World e;
	r.CreateWorld();
	e.CreateExits();
	printf("Welcome to ZORK: The Pyramid");
	printf("Your stay in %s  %s \n", r.room[0].name, r.room[0].decription);
	for (int i = 1; i < 12; i++){
		printf("%s, %s \n", r.room[i].name, r.room[i].decription);
	}
	
	system("pause");
	return 0;
}
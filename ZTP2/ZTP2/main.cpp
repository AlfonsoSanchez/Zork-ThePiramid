#include <stdio.h>
#include <stdlib.h>
#include "player.h"
#include "world.h"
#include "exit.h"
#include "rooms.h"


int main(){
	char move;
	World w;
	Exit e;
	Rooms r;
	Player p;
	w.CreateWorld();
	p.position = w.room[0]; // That are "the entrance"
	printf("Welcome to ZORK: The Pyramid\n");
	printf("The Controls are : n/s/w/e/u/d  (north ,south, west, east, up, down) \n");
	switch (move){
		printf("Where do you go???  ");
		fflush(stdin);
		scanf_s("%c", &move);

	case 'n':
		for (int i = 0; i < 12; i++){
			

		}


	}
	/*printf("Your stay in %s  %s \n", r.room[0].name, r.room[0].decription);
	for (int i = 1; i < 12; i++){
		printf("%s, %s \n", r.room[i].name, r.room[i].decription);
	}*/
	
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "player.h"
#include "world.h"
#include "exit.h"
#include "rooms.h"


int main(){
	char move;
	int wincondition = 0;
	World w;
	Exit e;
	Rooms r;
	Player p;
	w.CreateWorld();

	printf("Welcome to ZORK: The Pyramid\n");
	printf("The Controls are : n/s/w/e/u/d  (north ,south, west, east, up, down) \n");
	printf(" You are in : %s : \n %s", r.name[0], r.decription[0]);
	do{
		printf("Where do you go???  ");
		fflush(stdin);
		scanf_s("%c", &move);
		switch (move){
			
		case 'n':
			if (p.position == 4){
				printf(" %s: \n %s  \n", r.name[0], r.decription[0]);
				p.position = 0;
				break;
			}
			if (p.position == 2){
				printf(" %s: \n %s  \n", r.name[1], r.decription[1]);
				p.position = 1;
				break;
			}

			if (p.position == 6){
				printf(" %s: \n %s  \n", r.name[5], r.decription[5]);
				p.position = 5;
				break;
			}
			if (p.position == 8){
				printf(" %s: \n %s  \n", r.name[7], r.decription[7]);
				p.position = 7;
				break;
			}
			if (p.position == 10){
				printf(" %s: \n %s  \n", r.name[6], r.decription[6]);
				p.position = 0;
				break;
			}
			else{
				printf("Wall");
				break;
			}
		case 's':
			if (p.position == 0){
				printf(" %s: \n %s  \n", r.name[4], r.decription[4]);
				p.position = 4;
				break;
			}
			if (p.position == 1){
				printf(" %s: \n %s  \n", r.name[2], r.decription[2]);
				p.position = 2;
				break;
			}

			if (p.position == 5){
				printf(" %s: \n %s  \n", r.name[6], r.decription[6]);
				p.position = 6;
				break;
			}
			if (p.position == 6){
				printf(" %s: \n %s  \n", r.name[10], r.decription[10]);
				p.position = 10;
				break;
			}
			if (p.position == 7){
				printf(" %s: \n %s  \n", r.name[8], r.decription[8]);
				p.position = 8;
				break;
			}
			if (p.position == 8){
				printf(" %s: \n %s  \n", r.name[11], r.decription[11]);
				p.position = 11;
				wincondition++;
				break;
			}
			else{
				printf("Wall");
				break;
			}

		case 'e':
			if (p.position == 0){
				printf(" %s: \n %s  \n", r.name[1], r.decription[1]);
				p.position = 1;
				break;
			}
			if (p.position == 4){
				printf(" %s: \n %s  \n", r.name[2], r.decription[2]);
				p.position = 2;
				break;
			}

			if (p.position == 2){
				printf(" %s: \n %s  \n", r.name[3], r.decription[3]);
				p.position = 3;
				break;
			}
			if (p.position == 5){
				printf(" %s: \n %s  \n", r.name[7], r.decription[7]);
				p.position = 7;
				break;
			}
			if (p.position == 6){
				printf(" %s: \n %s  \n", r.name[11], r.decription[11]);
				p.position = 11;
				wincondition++;
				break;
			}
			if (p.position == 8){
				printf(" %s: \n %s  \n", r.name[9], r.decription[9]);
				p.position = 9;
				break;
			}
			else{
				printf("Wall");
				break;
			}

		case 'w':
			if (p.position == 1){
				printf(" %s: \n %s  \n", r.name[0], r.decription[0]);
				p.position = 0;
				break;
			}
			if (p.position == 2){
				printf(" %s: \n %s  \n", r.name[4], r.decription[4]);
				p.position = 4;
				break;
			}

			if (p.position == 9){
				printf(" %s: \n %s  \n", r.name[8], r.decription[8]);
				p.position = 8;
				break;
			}
			if (p.position == 7){
				printf(" %s: \n %s  \n", r.name[5], r.decription[5]);
				p.position = 5;
				break;
			}

			else{
				printf("Wall");
				break;
			}

		}
		}while (wincondition == 0);

		printf("You win");
		/*printf("Your stay in %s  %s \n", r.room[0].name, r.room[0].decription);
		for (int i = 1; i < 12; i++){
		printf("%s, %s \n", r.room[i].name, r.room[i].decription);
		}*/

		system("pause");
		return 0;
	
}
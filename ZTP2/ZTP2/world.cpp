#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "world.h"
#include "rooms.h"
#include "player.h"
#include "exit.h"
class Exit;
class Room;
class Player;
World::World(){
	room = new Room[12];
	exits = new Exit[27];
	player = new Player[1];

}
World::~World(){
	delete[] room;
	delete[] exits;
	delete[] player;

}
void World::createworld(){
	// use strcpy and first room are 1;
	player->PositionPlayer = (room + 1);


	//Entrance 0
	strcpy_s(room[0].name, "Entrance");
	strcpy_s((room + 0)->description, "You are at the entrance, the exit has been blocked by stones");

	// Strangle Tunnel 0
	strcpy_s((room + 1)->name, "Strangle Tunnel");
	strcpy_s((room + 1)->description, "You are in a narrow tunnel that seems to have no end");

	//Strangle Room 0 
	strcpy_s((room + 2)->name, "Strangle Room");
	strcpy_s((room + 2)->description, "It seems a false room, created to lose intruders, a door is at the end of the room");

	//Secret Room 0
	strcpy_s((room + 3)->name, "Secret Room");
	strcpy_s((room + 3)->description, "You just found a secret room, there must be something hidden");

	//Main Hall Initation 0->-1
	strcpy_s((room + 4)->name, "Main Hall Initation");
	strcpy_s((room + 4)->description, "you are at the beginning of the large main hall ,where to find some stairs down , no more ways");

	//Main Hall Half -1->0
	strcpy_s((room + 5)->name, "Main Hall Half");
	strcpy_s((room + 5)->description, "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated");

	//Main Hall End-1
	strcpy_s((room + 6)->name, "Main Hall End");
	strcpy_s((room + 6)->description, "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard");

	//Dicharge Room-1
	strcpy_s((room + 7)->name, "Dicharge Room");
	strcpy_s((room + 7)->description, "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall");

	//Strangle Tunnel-1
	strcpy_s((room + 8)->name, "Strangle Tunnel");
	strcpy_s((room + 8)->description, "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ");

	//Ventilation Room-1
	strcpy_s((room + 9)->name, "Ventilation Room");
	strcpy_s((room + 9)->description, "You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out.");

	//Queen Room-1
	strcpy_s((room + 10)->name, "Queen Room");
	strcpy_s((room + 10)->description, "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.");

	//King Room-1
	strcpy_s((room + 11)->name, "King Room");
	strcpy_s((room + 11)->description, "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures");




	//Now Exits
	//Entrance -> Strangle Tunnel ( 0-1)
	(exits + 0)->Origin = &room[0];
	(exits + 0)->Destination = &room[1];
	(exits + 0)->opendoor = true;
	(exits + 0)->dir = Deast;

	//Strangle Tunnel -> Entrance (1-0)
	(exits + 1)->Origin = &room[1];
	(exits + 1)->Destination = &room[0];
	(exits + 1)->opendoor = true;
	(exits + 1)->dir = Dwest;

	//Strangle Tunnel -> Strangle Room
	(exits + 2)->Origin = &room[1];
	(exits + 2)->Destination = &room[2];
	(exits + 2)->opendoor = true;
	(exits + 2)->dir = Dsouth;

	//Strangle Room -> Strangle Tunnel
	(exits + 3)->Origin = &room[2];
	(exits + 3)->Destination = &room[1];
	(exits + 3)->opendoor = true;
	(exits + 3)->dir = Dnorth;

	//Strangle Room -> Secret Room
	(exits + 4)->Origin = &room[2];
	(exits + 4)->Destination = &room[3];
	(exits + 4)->opendoor = false;
	(exits + 4)->dir = Deast;

	//Secret Room -> Strangle Room
	(exits + 5)->Origin = &room[3];
	(exits + 5)->Destination = &room[2];
	(exits + 5)->opendoor = true;
	(exits + 5)->dir = Dwest;
	
	//Strangle Room -> Main Hall I
	(exits + 6)->Origin = &room[2];
	(exits + 6)->Destination = &room[4];
	(exits + 6)->opendoor = true;
	(exits + 6)->dir = Dwest;

	// Main Hall I -> Strangle Room
	(exits + 7)->Origin = &room[4];
	(exits + 7)->Destination = &room[2];
	(exits + 7)->opendoor = true;
	(exits + 7)->dir = Deast;

	// MHI -> Entrance
	(exits + 8)->Origin = &room[4];
	(exits + 8)->Destination = &room[1];
	(exits + 8)->opendoor = true;
	(exits + 8)->dir = Dnorth;
	
	//Entrance-> MHI
	(exits + 9)->Origin = &room[0];
	(exits + 9)->Destination = &room[4];
	(exits + 9)->opendoor = true;
	(exits + 9)->dir = Dsouth;

	//MHI->MHM
	(exits + 10)->Origin = &room[4];
	(exits + 10)->Destination = &room[5];
	(exits + 10)->opendoor = true;
	(exits + 10)->dir = Ddown;

	//MHM -> MHI
	(exits +11 )->Origin = &room[5];
	(exits + 11)->Destination = &room[4];
	(exits + 11)->opendoor = true;
	(exits + 11)->dir = Dup;

	// MHM -> Dichage Room
	(exits + 12)->Origin = &room[5];
	(exits + 12)->Destination = &room[7];
	(exits + 12)->opendoor = true;
	(exits + 12)->dir = Deast;

	//Dicharge Room -> MHM
	(exits + 13)->Origin = &room[7];
	(exits + 13)->Destination = &room[5];
	(exits + 13)->opendoor = true;
	(exits + 5)->dir = Dwest;

	//MHM -> MHE
	(exits + 14)->Origin = &room[5];
	(exits + 14)->Destination = &room[6];
	(exits + 14)->opendoor = true;
	(exits + 14)->dir = Dsouth;

	//MHE -> MHM
	(exits + 15)->Origin = &room[6];
	(exits + 15)->Destination = &room[5];
	(exits + 15)->opendoor = true;
	(exits + 15)->dir = Dnorth;

	//Dicharge Room -> MHE
	(exits + 16)->Origin = &room[7];
	(exits + 16)->Destination = &room[6];
	(exits + 16)->opendoor = true;
	(exits + 16)->dir = Dsouth;

	//MHE -> Dicharge Room
	(exits + 17)->Origin = &room[6];
	(exits + 17)->Destination = &room[7];
	(exits + 17)->opendoor = true;
	(exits + 17)->dir = Dnorth;

	//Dicharge -> strangle TUnnel
	(exits + 18)->Origin = &room[7];
	(exits + 18)->Destination = &room[8];
	(exits + 18)->opendoor = true;
	(exits + 18)->dir = Deast;

	//Strangle Tunnel -> Dicharge
	(exits + 19)->Origin = &room[8];
	(exits + 19)->Destination = &room[7];
	(exits + 19)->opendoor = true;
	(exits + 19)->dir = Dwest;

	//Ventilation -> Strangle
	(exits + 20)->Origin = &room[9];
	(exits + 20)->Destination = &room[8];
	(exits + 20)->opendoor = false;
	(exits + 20)->dir = Dsouth;

	//Strangle -> Ventilation
	(exits + 21)->Origin = &room[9];
	(exits + 21)->Destination = &room[8];
	(exits + 21)->opendoor = true;
	(exits + 21)->dir = Dnorth;

	//MHE -> Queen
	(exits + 22)->Origin = &room[6];
	(exits + 22)->Destination = &room[10];
	(exits + 22)->opendoor = false;
	(exits + 22)->dir = Dsouth;

	//Queen -> MHE
	(exits + 23)->Origin = &room[10];
	(exits + 23)->Destination = &room[6];
	(exits + 23)->opendoor = true;
	(exits + 23)->dir = Dnorth;

	//MHE -> King
	(exits + 24)->Origin = &room[6];
	(exits + 24)->Destination = &room[11];
	(exits + 24)->opendoor = false;
	(exits + 24)->dir = Deast;

	//King -> MHE
	(exits + 25)->Origin = &room[11];
	(exits + 25)->Destination = &room[6];
	(exits + 25)->opendoor = true;
	(exits + 25)->dir = Dwest;

	//Strangle Tunnel -> king
	(exits + 26)->Origin = &room[8];
	(exits + 26)->Destination = &room[11];
	(exits + 26)->opendoor = false;
	(exits + 26)->dir = Dsouth;

	//King -> Strangle Tunnel
	(exits + 27)->Origin = &room[11];
	(exits + 27)->Destination = &room[8];
	(exits + 27)->opendoor = true;
	(exits + 27)->dir = Dnorth;



}
void World::input(){
	char move[25];
	char helplayer[] = { "YOU CAN MOVEEE!!!!!!!! (use : n or north \n s or south \n e or east \n w or weast \n u or up\n d or down\n" };
	char i;
	printf("YOU CAN MOVEEE!!!!!!!! (use : n or north \n s or south \n e or east \n w or weast \n u or up\n d or down\n help or h \n");
	printf(" Where do you do??? \n");
	gets_s(move);

	if (strcmp(move, "n") == 0 || strcmp(move, "north") == 0 || strcmp(move, "go north") == 0){

		for (i = 0; i < 12; i++){
			if ((exits + i)->Origin == player->PositionPlayer){
				if ((exits + i)->dir == Dnorth){
					if ((exits + i)->opendoor == true){

						player->PositionPlayer = (exits + i)->Destination;
						printf("You entered in %s\n", (exits + i)->Destination->name);
						printf("%s\n",(exits +i)->Destination->description );
						break;
					}
					else {
						printf("THE DOOR IS CLOSED!!!!!!!!!!!!!!!!!!!");
					}
				}
			}


		}
	}

	if (strcmp(move, "s") == 0 || strcmp(move, "south") == 0 || strcmp(move, "go south") == 0){

		for (i = 0; i < 12; i++){
			if ((exits + i)->Origin == player->PositionPlayer){
				if ((exits + i)->dir == Dsouth){
					if ((exits + i)->opendoor == true){

						player->PositionPlayer = (exits + i)->Destination;
						printf("You entered in %s\n", (exits + i)->Destination->name);
						printf("%s\n", (exits + i)->Destination->description);
						break;
					}
					else {
						printf("THE DOOR IS CLOSED!!!!!!!!!!!!!!!!!!!");
					}
				}
			}


		}
	}

	if (strcmp(move, "e") == 0 || strcmp(move, "east") == 0 || strcmp(move, "go east") == 0){

		for (i = 0; i < 12; i++){
			if ((exits + i)->Origin == player->PositionPlayer){
				if ((exits + i)->dir == Deast){
					if ((exits + i)->opendoor == true){

						player->PositionPlayer = (exits + i)->Destination;
						printf("You entered in %s\n", (exits + i)->Destination->name);
						printf("%s\n", (exits + i)->Destination->description);
						break;
					}
					else {
						printf("THE DOOR IS CLOSED!!!!!!!!!!!!!!!!!!!");
					}
				}
			}


		}
	}

	if (strcmp(move, "w") == 0 || strcmp(move, "west") == 0 || strcmp(move, "go west") == 0){

		for (i = 0; i < 12; i++){
			if ((exits + i)->Origin == player->PositionPlayer){
				if ((exits + i)->dir == Dwest){
					if ((exits + i)->opendoor == true){

						player->PositionPlayer = (exits + i)->Destination;
						printf("You entered in %s\n", (exits + i)->Destination->name);
						printf("%s\n", (exits + i)->Destination->description);
						break;
					}
					else {
						printf("THE DOOR IS CLOSED!!!!!!!!!!!!!!!!!!!");
					}
				}
			}


		}
	}

	if (strcmp(move, "u") == 0 || strcmp(move, "up") == 0 || strcmp(move, "go up") == 0){

		for (i = 0; i < 12; i++){
			if ((exits + i)->Origin == player->PositionPlayer){
				if ((exits + i)->dir == Dup){
					if ((exits + i)->opendoor == true){

						player->PositionPlayer = (exits + i)->Destination;
						printf("You entered in %s\n", (exits + i)->Destination->name);
						printf("%s\n", (exits + i)->Destination->description);
						break;
					}
					else {
						printf("THE DOOR IS CLOSED!!!!!!!!!!!!!!!!!!!");
					}
				}
			}


		}
	}

	if (strcmp(move, "d") == 0 || strcmp(move, "down") == 0 || strcmp(move, "go down") == 0){

		for (i = 0; i < 12; i++){
			if ((exits + i)->Origin == player->PositionPlayer){
				if ((exits + i)->dir == Dnorth){
					if ((exits + i)->opendoor == true){

						player->PositionPlayer = (exits + i)->Destination;
						printf("You entered in %s\n", (exits + i)->Destination->name);
						printf("%s\n", (exits + i)->Destination->description);
						break;
					}
					else {
						printf("THE DOOR IS CLOSED!!!!!!!!!!!!!!!!!!!");
					}
				}
			}


		}
	}


}
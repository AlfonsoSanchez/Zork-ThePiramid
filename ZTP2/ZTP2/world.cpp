#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "world.h"
#include "rooms.h"
#include "exit.h"
#include "player.h"

World::World(){
	room = new Rooms[12];
	exits = new Exit[28];
	player = new Player[1];


}
World::~World(){
	delete[] room;
	delete[] exits;
	delete[] player;
}
void World::CreateWorld()const{
	//Initation all rooms = name + description
	const char *name[12] = { "Entrance", "Strange Tunnel", "Strangle Room", "Secret Room", "Main Hall Initation", "Main Hall Half", "Main Hall End", "Dicharge Room", "Strange Tunnel", "Ventilation Room", "Queen room", "King Room" };

	for (int i = 0; i < 12; i++){  
		strcpy_s(room[i].name, name[i]);
		
	}
	const char* roomdescription[]{
		"You are at the entrance, the exit has been blocked by stones","You are in a narrow tunnel that seems to have no end",
		"It seems a false room, created to lose intruders, a door is at the end of the room","You just found a secret room, there must be something hidden",
		"you are at the beginning of the large main hall ,where to find some stairs down , no more ways","you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated",
		"you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard","The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall",
		"We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air .","You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out.",
		"Queen room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.", "King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures",
};
	for (int j = 0; j < 12; j++){
		strcpy_s(room[j].decription, roomdescription[j]);
	}



}
void World::CreateExits(){

	//Entrance:
	exits[0].er = room[0];
	exits[0].east = room[2];
	exits[0].south = room[4];
	strcpy_s(exits[0].name, "0");
	// other exits are wall.

	//Strangle Tunnel
	exits[1].er = room[1];
	exits[1].south = room[2];
	exits[1].west = room[0];
	strcpy_s(exits[1].name, "1");
	//Strangle Room
	exits[2].er = room[2];
	exits[2].east = room[3];
	exits[2].north = room[1];
	exits[2].west = room[4];
	strcpy_s(exits[2].name, "2");
	//Secret Room
	exits[3].er = room[3];
	exits[3].west = room[2];
	strcpy_s(exits[3].name, "3");
	//Main Hall Initiation
	exits[4].er = room[4];
	exits[4].north = room[0];
	exits[4].down = room[5];
	exits[4].east = room[2];
	strcpy_s(exits[4].name, "4");
	// Main Hall Middle
	exits[5].er = room[5];
	exits[5].up = room[4];
	exits[5].down = room[6];
	exits[5].east = room[7];
	strcpy_s(exits[5].name, "5");
	//Main Hall End
	exits[6].er = room[6];
	exits[6].north = room[7];
	exits[6].down = room[10];
	exits[6].east = room[11];
	exits[6].west = room[5];
	strcpy_s(exits[6].name, "6");
	//Discharge Room
	exits[7].er = room[7];
	exits[7].down = room[6];
	exits[7].east = room[8];
	exits[7].west = room[5];
	strcpy_s(exits[7].name, "7");
	//Strangle Tunnel2
	exits[8].er = room[8];
	exits[8].down = room[11];
	exits[8].east = room[9];
	exits[8].west = room[6];
	strcpy_s(exits[8].name, "8");
	//Ventilation Room
	exits[9].er = room[9];
	exits[9].west = room[8];
	strcpy_s(exits[9].name, "9");
	//Queen Camera
	exits[10].er = room[10];
	exits[10].north = room[6];
	strcpy_s(exits[10].name, "10");
	//King Room
	exits[11].er = room[11];
	exits[11].west = room[6];
	exits[11].north = room[8];
	strcpy_s(exits[11].name, "11");
}
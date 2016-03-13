#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "world.h"
#include "rooms.h"
#include "exit.h"

World::World(){
	room = new Rooms[12];
	exits = new Exit[28];



}
void World::CreateWorld(){
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
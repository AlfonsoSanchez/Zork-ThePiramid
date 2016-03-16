#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "world.h"
#include "rooms.h"
#include "player.h"
#include "exit.h"


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




}
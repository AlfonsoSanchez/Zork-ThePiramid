#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "world.h"
#include "rooms.h"
#include "player.h"
#include "exit.h"
#include "item.h"
#include "mVector.h"


World::World(){
	player = new Player;
	player->PositionPlayer = room[ENTRANCE];
	createworld();
}
World::~World(){
	
	delete[] player;

}
void World::createworld(){
	// use strcpy and first room are 1;
	

	
	//Entrance 0
	room.pushback(new Room("Entrance", "You are at the entrance, the exit has been blocked by stones"));
	exit.pushback(new Exit("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end",room[ENTRANCE] ,room[STRANGLETUNNEL] ,true ));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways", room[ENTRANCE], room[MAINHALLINI], true));
	//Strangle tunnel
	room.pushback(new Room("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end"));
	exit.pushback(new Exit("Entrance", "You are at the entrance, the exit has been blocked by stones", room[STRANGLETUNNEL], room[ENTRANCE], true));
	exit.pushback(new Exit("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room", room[STRANGLETUNNEL], room[STRANGLEROOM], true));
	//Strangle room
	room.pushback(new Room("Strangle Room" ,"It seems a false room, created to lose intruders, a door is at the end of the room" ));
	exit.pushback(new Exit("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end", room[STRANGLEROOM], room[STRANGLETUNNEL], true));
	exit.pushback(new Exit("Secret Room", "You just found a secret room, there must be something hidden", room[STRANGLEROOM], room[SECRETROOM], true));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways", room[STRANGLEROOM], room[MAINHALLINI], true));
	//Secret room
	room.pushback(new Room("Secret Room", "You just found a secret room, there must be something hidden"));
	exit.pushback(new Exit("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room", room[SECRETROOM], room[STRANGLEROOM], true));
	//Main hall initiation
	room.pushback(new Room("Main Hall Initation","you are at the beginning of the large main hall ,where to find some stairs down , no more ways" ));
	exit.pushback(new Exit("Entrance", "You are at the entrance, the exit has been blocked by stones", room[MAINHALLINI], room[ENTRANCE], true));
	exit.pushback(new Exit("Strangle Room",  "It seems a false room, created to lose intruders, a door is at the end of the room", room[MAINHALLINI], room[STRANGLEROOM], true));
	exit.pushback(new Exit("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated", room[MAINHALLINI], room[MAINHALLHALF], true));

	//Main hall half
	room.pushback(new Room("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated"));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways", room[MAINHALLHALF], room[MAINHALLINI], true));
	exit.pushback(new Exit("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall", room[MAINHALLHALF], room[DICHARGEROOM], true));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", room[MAINHALLHALF], room[MAINHALLEND], true));
	//Main hall end
	room.pushback(new Room("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard"));
	exit.pushback(new Exit("Main Hall Half","you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated" , room[MAINHALLEND], room[MAINHALLHALF], true));
	exit.pushback(new Exit("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.", room[MAINHALLEND], room[QUEENROOM], true));
	exit.pushback(new Exit("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures", room[MAINHALLEND], room[KINGROOM], true));
	exit.pushback(new Exit("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall", room[MAINHALLEND], room[DICHARGEROOM], true));

	//Dicharge room
	room.pushback(new Room("Dicharge Room","The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall" ));
	exit.pushback(new Exit("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated", room[DICHARGEROOM], room[MAINHALLHALF], true));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", room[DICHARGEROOM], room[STRANGLETUNNEL2], true));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", room[DICHARGEROOM], room[MAINHALLEND], true));

	//Strangle tunnel
	room.pushback(new Room("Strangle Tunnel","We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air " ));
	exit.pushback(new Exit("Ventilation Room", "You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out.", room[STRANGLETUNNEL2], room[VENTILATIONROOM], true));
	exit.pushback(new Exit("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures", room[STRANGLETUNNEL2], room[KINGROOM], true));
	exit.pushback(new Exit("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall", room[STRANGLETUNNEL2], room[DICHARGEROOM], true));
	//Ventilation room
	room.pushback(new Room("Ventilation Room", "You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out."));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", room[VENTILATIONROOM], room[STRANGLETUNNEL2], true));
	//Queen room
	room.pushback(new Room("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter."));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", room[QUEENROOM], room[MAINHALLEND], true));
	//King room
	room.pushback(new Room("King Room","You are in the room faraon not you believe it is a door where output is around you and thousands of treasures" ));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", room[KINGROOM], room[MAINHALLEND], true));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", room[KINGROOM], room[STRANGLETUNNEL], true));
	//const char *nam, const char* des, Room* locat, const int atk, const int spcial, const bool invt, const bool equipe, const bool equipabl

	item.pushback(new Item("Health potion", "Restore 50% of life", room[STRANGLEROOM],0,0,false,false,true));
	item.pushback(new Item("Health potion", "Restore 50% of life", room[MAINHALLHALF],0,0,false,false,true));
	item.pushback(new Item("Health potion", "Restore 50% of life", room[DICHARGEROOM], 0, 0, false, false, true));
	item.pushback(new Item("Sword", "+20 attack", room[QUEENROOM], 20, 0, false, false, true));
	item.pushback(new Item("Book", "+5 attack", room[SECRETROOM], 5, 0, false, false, true));
	item.pushback(new Item("STONE", "KILL mini mummis 1 hit", room[VENTILATIONROOM], 0, 1, false, false, true));
	item.pushback(new Item("Key", "can open a door", room[MAINHALLINI], 0, 2, false, false, true));
	item.pushback(new Item("Key", "can open a door", room[STRANGLETUNNEL2], 0, 2, false, false, true));
	item.pushback(new Item("Key", "can open a door", room[STRANGLETUNNEL], 0, 2, false, false, true));

}

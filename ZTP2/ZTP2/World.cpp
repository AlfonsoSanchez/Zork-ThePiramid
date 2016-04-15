#include "World.h"
#include "mVector.h"
#include <stdio.h>
#include <stdlib.h>
World::World(){
	createworld();
	string = new mstring();
}

World::~World(){

}

void World::createworld()
{
	Room* Entrance;
	Room* StrangleTunnel;
	Room* StrangleRoom;
	Room* SecretRoom;
	Room* MHI;
	Room* MHM;
	Room* MHE;
	Room* DichargeRoom;
	Room* StrangleTunnel2;
	Room* VentilationRoom;
	Room* QueenRoom;
	Room* KingRoom;

	player.pushback(new Player);

	room.pushback(Entrance = new Room("Entrance", "You are at the entrance, the exit has been blocked by stones"));
	room.pushback(StrangleTunnel = new Room("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end"));
	room.pushback(StrangleRoom = new Room("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room"));
	room.pushback(SecretRoom = new Room("Secret Room", "You just found a secret room, there must be something hidden"));
	room.pushback(MHI = new Room("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways"));
	room.pushback(MHM = new Room("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated"));
	room.pushback(MHE = new Room("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard"));
	room.pushback(DichargeRoom = new Room("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall"));
	room.pushback(StrangleTunnel2 = new Room("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air "));
	room.pushback(VentilationRoom = new Room("Ventilation Room", "You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out."));
	room.pushback(QueenRoom = new Room("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter."));
	room.pushback(KingRoom = new Room("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures"));



	exit.pushback(new Exit("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end", east, true, Entrance, StrangleTunnel));
	exit.pushback(new Exit("Entrance", "You are at the entrance, the exit has been blocked by stones", west, true, StrangleTunnel, Entrance));
	exit.pushback(new Exit("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room", south, true, StrangleTunnel,StrangleRoom));
	exit.pushback(new Exit("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end", north, true, StrangleRoom, StrangleTunnel));
	exit.pushback(new Exit("Secret Room", "You just found a secret room, there must be something hidden", east, true, StrangleRoom, VentilationRoom));
	exit.pushback(new Exit("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room", west, true, VentilationRoom, StrangleRoom));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways",south,true, Entrance, MHI));
	exit.pushback(new Exit("Entrance", "You are at the entrance, the exit has been blocked by stones", north, true, MHI, Entrance));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways", west, true,StrangleRoom, MHI));
	exit.pushback(new Exit("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room", east, true, MHI, StrangleRoom));
	exit.pushback(new Exit("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated", down, true, MHI, MHM));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways", up, true, MHM, MHI));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard",south,true, MHM,MHE));
	exit.pushback(new Exit("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated", north, true, MHE, MHM));
	exit.pushback(new Exit("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall",east,true,MHM,DichargeRoom));
	exit.pushback(new Exit("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated", west, true, DichargeRoom, MHM));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", south,true, DichargeRoom,StrangleTunnel2));
	exit.pushback(new Exit("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall", north, true, StrangleTunnel2, DichargeRoom));
	exit.pushback(new Exit("Ventilation Room", "You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out.",east, true, StrangleTunnel2,VentilationRoom));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", west, true, VentilationRoom, StrangleTunnel2));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", west, true, StrangleTunnel2, MHE));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", east, true, MHE, StrangleTunnel2));
	exit.pushback(new Exit("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.",south,true,MHE,QueenRoom));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", north, true, QueenRoom, MHE));
	exit.pushback(new Exit("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures",south,true,StrangleTunnel2,KingRoom));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", north, true, KingRoom, StrangleTunnel2));
	exit.pushback(new Exit("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.", west, true, KingRoom, QueenRoom));
	exit.pushback(new Exit("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures", east, true, QueenRoom, KingRoom));

	
}
void World::Input(){
	input = new char[30];
	gets_s(input, 30);
}
bool World::CheckInput(){
	mstring order;
	printf("What do you do? :");
	Input();
	order = input;

	if (order == "go north" || order == "north" || order == "n")
	{

		return false;
	}
	else if (order == "go south" || order == "south" || order == "s")
	{

		return false;
	}
	else if (order == "go east" || order == "east" || order == "e")
	{

		return false;
	}
	else if (order == "go west" || order == "west" || order == "w")
	{

		return false;
	}
	else if (order == "go up" || order == "up" || order == "u")
	{

		return false;
	}
	else if (order == "go down" || order == "down" || order == "d")
	{

		return false;
	}
	else if (order == "look")
	{

		return false;
	}
	else if (order == "look north")
	{

		return false;
	}
	else if (order == "look south")
	{

		return false;
	}
	else if (order == "look east")
	{

		return false;
	}
	else if (order == "look west")
	{

		return false;
	}
	else if (order == "look up")
	{

		return false;
	}
	else if (order == "look down")
	{

		return false;
	}
	else if (order == "open")
	{

		return false;
	}
	else if (order == "close")
	{

		return false;
	}
	else if (order == "help" ||order =="h")
	{

		return false;
	}
	else if (order == "quit" || order == "q")
	{

		return true;
	}
	else {
		printf("\n Wrong command\n");
		return false;
	}

}
#include "World.h"
#include "mVector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
World::World(){
	
	
}

World::~World(){
	
}

void World::createworld()
{
	Room* Entrance = new Room("Entrance", "You are at the entrance, the exit has been blocked by stones");
	Room* StrangleTunnel = new Room("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end");
	Room* StrangleRoom = new Room("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room");
	Room* SecretRoom = new Room("Secret Room", "You just found a secret room, there must be something hidden");
	Room* MHI = new Room("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways");
	Room* MHM = new Room("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated");
	Room* MHE = new Room("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard");
	Room* DichargeRoom = new Room("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall");
	Room* StrangleTunnel2 = new Room("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ");
	Room* VentilationRoom = new Room("Ventilation Room", "You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out.");
	Room* QueenRoom = new Room("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.");
	Room* KingRoom = new Room("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures");

	player.pushback(new Player(room[0]));
	

	room.pushback(Entrance);
	room.pushback(StrangleTunnel);
	room.pushback(StrangleRoom);
	room.pushback(SecretRoom);
	room.pushback(MHI);
	room.pushback(MHM);
	room.pushback(MHE);
	room.pushback(DichargeRoom);
	room.pushback(StrangleTunnel2);
	room.pushback(VentilationRoom);
	room.pushback(QueenRoom);
	room.pushback(KingRoom);



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
bool World::Input(){
	
	char input[30];
	char Firstword[15];
	char Secondword[15];
	char *context;
	gets_s(input);
	if (strcmp(input, "\0") == 0){
		return true;
	}
	mstring order(input);
	Vector <mstring*> Action;
	order.tokenize(Action);

	strcpy_s(Firstword , strtok_s(input, " ", &context));
	if (strcmp(context, "") != 0){
		strcpy_s(Secondword, strtok_s(NULL, " ", &context));
	}
	//HELP
	if (strcmp(Firstword, "help") || strcmp(Firstword, "h")){
		printf(" HEEEEELP");
	}
	//QUIT
	if (strcmp(Firstword, "quit") || strcmp(Firstword, "q")){
		return true;
	}
	// Look
	else if (strcmp(Firstword, "look") == 0 || strcmp(Firstword, "Look") == 0){
		if (strcmp(Secondword, "void") == 0){
			player[0]->Look();
		}
		else if (strcmp(Secondword, "north") || strcmp(Secondword, "n")){
			player[0]->LookExit(this, north);
		}
		else if (strcmp(Secondword, "south") || strcmp(Secondword, "s")){
			player[0]->LookExit(this, south);
		}
		else if (strcmp(Secondword, "east") || strcmp(Secondword, "e")){
			player[0]->LookExit(this, east);
		}
		else if (strcmp(Secondword, "west") || strcmp(Secondword, "w")){
			player[0]->LookExit(this, west);
		}
		else if (strcmp(Secondword, "up") || strcmp(Secondword, "u")){
			player[0]->LookExit(this, up);
		}
		else if (strcmp(Secondword, "down") || strcmp(Secondword, "d")){
			player[0]->LookExit(this, down);
		}
	}
	//Moveeee
	else if (strcmp(Firstword, "north") || strcmp(Firstword, "n")){
		player[0]->Move(this, north);
	}
	else if (strcmp(Firstword, "south") || strcmp(Firstword, "s")){
		player[0]->Move(this, south);
	}
	else if (strcmp(Firstword, "east") || strcmp(Firstword, "e")){
		player[0]->Move(this, east);
	}
	else if (strcmp(Firstword, "west") || strcmp(Firstword, "w")){
		player[0]->Move(this, west);
	}
	else if (strcmp(Firstword, "up") || strcmp(Firstword, "u")){
		player[0]->Move(this, up);
	}
	else if (strcmp(Firstword, "down") || strcmp(Firstword, "d")){
		player[0]->Move(this, down);
	}

	// OPEN && CLOSE DOOR
	else if (strcmp(Firstword, "open") == 0 || strcmp(Firstword, "o") == 0){
		if (strcmp(Secondword, "void") == 0){
			printf(" Which door ?");
			gets_s(Secondword);
		}
		else if (strcmp(Secondword, "north") == 0 || strcmp(Secondword, "n")){
			player[0]->Opendoor(this, north);
		}
		else if (strcmp(Secondword, "south") == 0 || strcmp(Secondword, "s")){
			player[0]->Opendoor(this, south);
		}
		else if (strcmp(Secondword, "east") == 0 || strcmp(Secondword, "e")){
			player[0]->Opendoor(this, east);
		}
		else if (strcmp(Secondword, "west") == 0 || strcmp(Secondword, "w")){
			player[0]->Opendoor(this, west);
		}
	}
	else if (strcmp(Firstword, "close") == 0 || strcmp(Firstword, "c") == 0){
		if (strcmp(Secondword, "void") == 0){
			printf(" Which door ?");
			gets_s(Secondword);
		}
		else if (strcmp(Secondword, "north") == 0 || strcmp(Secondword, "n")){
			player[0]->Closedoor(this, north);
		}
		else if (strcmp(Secondword, "south") == 0 || strcmp(Secondword, "s")){
			player[0]->Closedoor(this, south);
		}
		else if (strcmp(Secondword, "east") == 0 || strcmp(Secondword, "e")){
			player[0]->Closedoor(this, east);
		}
		else if (strcmp(Secondword, "west") == 0 || strcmp(Secondword, "w")){
			player[0]->Closedoor(this, west);
		}
	}
	
	else {
		printf(" THAT NOT ARE A INSTRUCTION");
	}

	return false;






}

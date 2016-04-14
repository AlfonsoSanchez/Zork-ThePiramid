#include "World.h"
#include "mVector.h"
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

}
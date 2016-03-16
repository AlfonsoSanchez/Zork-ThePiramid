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
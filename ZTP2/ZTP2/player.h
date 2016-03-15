#ifndef _PLAYER_
#define _PLAYER_
#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "exit.h"
#include "world.h"


class Player{

public:
	char name[20];
	int life;
	int position;

	Player();
	~Player();

};

#endif
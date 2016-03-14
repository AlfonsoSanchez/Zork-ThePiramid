#ifndef _EXIT_
#define _EXIT_

#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "exit.h"

class Exit{
public:
	char name[20];
	char description[20];
	Rooms er; // exit = rooms  for 1 room -> exits?? 
	Rooms north;
	Rooms south;
	Rooms east;
	Rooms west;
	Rooms up;
	Rooms down;
	Exit();

	~Exit();


	
	






};

#endif
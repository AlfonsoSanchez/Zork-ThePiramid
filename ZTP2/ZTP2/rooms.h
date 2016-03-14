#ifndef _ROOMS_
#define _ROOMS_



class Rooms{
public:
	char name[50];
	char decription[500];
	
	char exitNorth[200];
	char exitSouth[200];
	char exitWest[200];
	char exitEast[200];
	char down[200];
	char up[200];
	Rooms(){

	};
	~Rooms();



};

#endif
#ifndef _EXIT_
#define _EXIT_



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
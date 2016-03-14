#ifndef _EXIT_
#define _EXIT_



class Exit{
public:
	char name[20];
	char description[20];

	Rooms* north;
	Rooms* south;
	Rooms* east;
	Rooms* west;
	Rooms* up;
	Rooms* down;
	Exit();

	~Exit();


	
	






};

#endif
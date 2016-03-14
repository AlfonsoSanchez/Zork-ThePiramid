#ifndef _PLAYER_
#define _PLAYER_

class Player{
public:
	char name[20];
	int life;
	Rooms position;

	Player();
	~Player();

};

#endif
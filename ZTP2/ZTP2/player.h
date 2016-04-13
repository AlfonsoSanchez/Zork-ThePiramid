#ifndef _Player_
#define _Player
#include "rooms.h"

enum Rooms{
	ENTRANCE, STRANGLETUNNEL, STRANGLEROOM, SECRETROOM, MAINHALLINI,
	MAINHALLHALF, MAINHALLEND, DICHARGEROOM, STRANGLETUNNEL2, VENTILATIONROOM,
	QUEENROOM, KINGROOM
};

class Player{
public:
	char name[50];
	Room* PositionPlayer;

	Player();
	~Player();
public:
	void look();
	void take();
	void move();
	void input();
};


#endif
#ifndef _Player_
#define _Player
#include "rooms.h"
// Use enum Rooms and orders for best structure
enum Rooms{
	ENTRANCE, STRANGLETUNNEL, STRANGLEROOM, SECRETROOM, MAINHALLINI,
	MAINHALLHALF, MAINHALLEND, DICHARGEROOM, STRANGLETUNNEL2, VENTILATIONROOM,
	QUEENROOM, KINGROOM
};
enum orders{
	GO, LOOK, QUIT, HELP, OPEN, CLOSE, NORTH, SOUTH, EAST, WEST,
	PICK, DROP, INVENTORY, EQUIPPED, EQUIP, UNEQUIP,
	PUT, GET, INTO, FROM, STATS,
	HEALTH, KEY, SWORD, BOOK, STONE
};

class Player{
public:
	char name[50];
	Room* PositionPlayer;

	Player();
	~Player();
public:
	int Order(const mstring&, const mstring&, const mstring&);
	int num_order(const mstring&, const mstring&, const mstring&);
	

};


#endif
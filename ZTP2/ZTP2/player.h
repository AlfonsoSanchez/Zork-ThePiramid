#ifndef _Player_
#define _Player
class Room;
class Exit;


class Player{
public:
	char name[50];
	Room* PositionPlayer;

	Player();
	~Player();
};


#endif
#ifndef _WORLD_
#define _WORLD_



class Room;
class Exit;
class Player;


class World{
public:
	World();
	~World();

	Room* room;
	Exits* exits;
	Player* player;


	void createworld();
	bool input();


};


#endif
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
	Exit* exits;
	Player* player;


	void createworld();
	void input();


};


#endif
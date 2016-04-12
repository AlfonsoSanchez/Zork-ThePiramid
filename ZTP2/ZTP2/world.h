#ifndef _WORLD_
#define _WORLD_



class Room;
class Exit;
class Player;
class Item;

class World{
public:
	World();
	~World();

	Room* room;
	Exit* exits;
	Player* player;
	Item * item;

	void createworld();
	bool input();
	void createitem();
	
};


#endif
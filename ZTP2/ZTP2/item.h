#ifndef _ITEM_
#define _ITEM_

class Room;
enum StatsItem{
	atack,
	health,
	armour,


};

class Item{
public:
	char name[50];
	char description[50];
	StatsItem stit;
	Room* localitation;
	Item();
	~Item();

};






#endif
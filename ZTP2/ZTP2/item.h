#ifndef _ITEM_
#define _ITEM_

#include "Entity.h"


class Item :public Entity{
public:
	Entity* items;

	Item(const char* name, const char* description, Entity* items);
	~Item();

}



#endif
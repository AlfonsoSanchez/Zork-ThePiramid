#ifndef _ENTITY_
#define _ENTITY_
#include "mString.h"

class Entity
{
public:
	mstring name;
	mstring description;

public:
	Entity(const char*, const char*);
	~Entity();


};
#endif
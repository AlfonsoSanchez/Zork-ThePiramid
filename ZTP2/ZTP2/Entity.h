#ifndef _ENTITY_
#define _ENTITY_
#include "mString.h"

class Entity
{
public:
	mstring name;
	mstring description;
	
	char* GetName() const;
	char* GetDescription() const;

public:
	Entity(const char*, const char*);
	~Entity();


};
#endif
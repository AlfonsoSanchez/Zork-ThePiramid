#ifndef _ENTITY_
#define _ENTITY_

#include "mString.h"

class Entity{
public:
	mstring name;
	mstring description;
	Vector <Entity*> entities;

public:
	Entity(const char*,const char*);
	~Entity();

public:
	char* Getname() const;
	char* Getdescription()const;


};

#endif
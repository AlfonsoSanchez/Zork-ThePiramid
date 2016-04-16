#include "Entity.h"

Entity::Entity(const char* nam, const char* descrip)
{
	name = nam;
	description = descrip;
}

Entity::~Entity()
{

}

char* Entity::Getname() const
{
	return name.c_str();
}

char* Entity::Getdescription() const
{
	return description.c_str();
}
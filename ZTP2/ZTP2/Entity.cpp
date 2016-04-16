#include "Entity.h"

Entity::Entity(const char * nam, const char* desc): name(nam), description(desc){

	

}
Entity::~Entity(){

}

char* Entity::GetName()const{
	return name.c_str();
}
char * Entity::GetDescription() const{
	return description.c_str();

}
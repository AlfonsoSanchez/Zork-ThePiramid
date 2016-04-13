#include "exit.h"

Exit::Exit(){

}
Exit::Exit(const char* nam, const char* des, Room* origi, Room* dest, const bool od){
	this->name = nam;
	this->description = des;
	this->Origin = origi;
	this->Destination = dest;
	this->opendoor = od;

}
Exit::~Exit(){



}
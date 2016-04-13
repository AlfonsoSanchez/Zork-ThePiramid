#include "item.h"

#include "item.h"

Item::Item(){



}

Item::Item(const char *nam, const char* des, Room* locat, const int atk, const int spcial, const bool invt, const bool equipe, const bool equipabl){
	this->name = nam;
	this->description = des;
	this->localitation = locat;
	this->atack = atk;
	this->special = spcial;
	this->invent = invt;
	this->equiped = equipe;
	this->equipable = equipabl;
}


Item::~Item(){



}
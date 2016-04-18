#include "Player.h"
#include "World.h"
#include "Entity.h"
#include "mVector.h"
#include "item.h"
#include "mString.h"
#include <stdio.h>
#include "Exit.h"
#include "Room.h"

Player::Player(const char* nam, const char* descrip, Room* room) : Entity(nam, descrip), Playerposition(room)
{

}
Player::~Player()
{

}
void Player::look() const
{
	printf("%s\n", Playerposition->Getdescription());
	
}
void Player::lookalldirection(const World* world, dir direct) const
{
	bool test = true;
	for (int i = 0; i < 29; i++)
	{
		if (world->exit[i]->Origin == Playerposition)
		{
			if (world->exit[i]->direction == direct)
			{
				printf("%s\n", world->exit[i]->Getname());
				printf("%s\n", world->exit[i]->Getdescription());
				test = false;
				break;
			}
			else
			{
				printf("Nothing.");
				break;
			}
		}
	}
	if (test == true)
	{
		printf("Nothing to see there.\n");
	}
}
void Player::opendoor(World* world, dir direct)
{
	bool test = true;
	for (int i = 0; i < 29; i++)
	{
		if (world->exit[i]->Origin == Playerposition)
		{
			if (world->exit[i]->direction == direct)
			{
				if (world->exit[i]->opendoor == false)
				{
					world->exit[i]->opendoor = true;
					printf("You opened the door.");
					test = false;
					break;
				}
				else
				{
					printf("The door is already opened.");
					break;
				}
			}
		}
	}
	if (test == true)
	{
		printf("Nothing to see there.\n");
	}
}

void Player::closedoor(World* world, dir direct)
{
	bool test = true;
	for (int i = 0; i < 29; i++)
	{
		if (world->exit[i]->Origin == Playerposition)
		{
			if (world->exit[i]->direction == direct)
			{
				if (world->exit[i]->opendoor == true)
				{
					world->exit[i]->opendoor = false;
					test = false;
					printf("You closed the door.");
					break;
				}
				else
				{
					printf("The door is already closed.");
					test = false;
					break;
				}
			}
		}
	}
	if (test == true)
	{
		printf("Nothing to see there.\n");
	}
}
void Player::move(const World* world, dir direct)
{
	bool test = true;
	for (int i = 0; i < 28; i++)
	{
		if (world->exit[i]->Origin == Playerposition)
		{
			if (world->exit[i]->direction == direct)
			{
				if (world->exit[i]->opendoor == true)
				{
					printf("%s\n", world->exit[i]->Destination->Getname());
					printf("%s\n", world->exit[i]->Destination->Getdescription());
					Playerposition = world->exit[i]->Destination;
					test = false;
					break;
				}
				else
				{
					printf("The door is closed.");
					test = false;
					break;
				}
			}
			
		}
	}
	if (test == true)
	{
		printf("Nothing to see there.\n");
	}

	
}
void Player::Inventory()const{
	if (entities.size() == 0){
		printf("You inventory are NULL \n");
	}
	for (unsigned int i = 0; entities.size() > i; i++){
		printf("%s\n", this->entities[i]->Getname());
	}
}

void Player::PickItem(mstring item){
	if (entities.size() < 3){
		for (unsigned int i = 0; Playerposition->entities.size() > i; i++)
		{
			if (item == Playerposition->entities[i]->Getname()){
				entities.pushback(Playerposition->entities[i]);
				printf(" You just take a %s", Playerposition->entities[i]->Getname());
				Playerposition->entities.RemoveItem(i);
				return;

			}

		}
		printf("there is nothing\n");
	}

	printf("your inventory is full\n");
}

void Player::DropItem(mstring item){

	if (entities.size() > 0){
		for (unsigned int i = 0; entities.size() > i; i++){
			if (item == entities[i]->Getname()){
				Playerposition->entities.pushback(entities[i]);
				printf("You droped the %s", entities[i]->Getname());
				entities.RemoveItem(i);
				return;
			}
		}
		printf("you dont have item");
	}
	else{
		printf("you dont have item");
	}
}
void Player::Put(World* world, mstring item){
	if (Playerposition == world->room[4]){
		if (entities.size() > 0){
			for (unsigned int i = 0; entities.size() > i; i++){
				if (item == entities[i]->Getname()){
					world->items[5]->entities.pushback(entities[i]);
					printf("You put in the chest the object : %s", entities[i]->Getname());
					entities.RemoveItem(i);
				}
			}
			
		}
	
		
	}
	else{
		printf("You don't have any item");

	}

}
void Player::GetItem(World* world, mstring  item){
	if (Playerposition == world->room[4]){
		
			for (unsigned int i = 0; world->items[6]->entities.size()>i; i++){
				if (item == world->items[6]->entities[i]->Getname()){
					entities.pushback(world->items[6]->entities[i]);
					printf(" You take a %s", world->items[6]->entities[i]->Getname());
					world->items[6]->entities.RemoveItem(i);
					return;
				}
				
		}
	
	}
	else {
		printf("Not are here");
	}

	}
void Player::Stats(){
	for (int i = 0; i < entities.size(); i++){
		if (entities[i]->name == "book"){
			attack += 5;
		}
		if (entities[i]->name == "book"){
			attack += 50;
		}
	}
	printf(" Life = %i \n Attack = %i \n", life, attack);
}



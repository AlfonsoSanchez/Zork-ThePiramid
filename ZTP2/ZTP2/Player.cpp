#include "Player.h"
#include "World.h"

Player::Player(Room* room) : Playerposition(room)
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
	for (int i = 0; i < 29; i++)
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
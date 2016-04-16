#include "Player.h"
#include <stdio.h>
Player::Player(Room* room): playerposition(room){



};

Player::~Player(){



}

void Player::Look() const {

	printf("%s \n %s", playerposition->GetName(), playerposition->GetDescription);
}
void Player::LookExit(const World* world, const dir direction) const{
	for (int i = 0; i < 28; i++){
		if (world->exit[i]->origin == playerposition){
			if (world->exit[i]->direction == direction){
				printf("%s \n", world->exit[i]->GetName());
				printf("%s \n", world->exit[i]->GetDescription());
			}
		}
	}


}

void Player::Opendoor(World* world, bool opeendor)const{
	for (int i = 0; i < 28; i++){
		if (world->exit[i]->origin == playerposition){
			if (world->exit[i]->opendoor == false){
				world->exit[i]->opendoor = true;
				printf("You opened the door");
			}
		}
		else{
			printf("THE DOOR IS ALREDY OPEN");

		}
	}



}
void Player::Closedoor(World* world, bool opeendor)const{
	for (int i = 0; i < 28; i++){
		if (world->exit[i]->origin == playerposition){
			if (world->exit[i]->opendoor == true){
				world->exit[i]->opendoor = false;
				printf("You close the door");
			}
		}
		else{
			printf("THE DOOR IS ALREADY CLOSE");

		}
	}



}
void Player::Move(const World* world,const dir direction){

	for (int i = 0; i < 28; i++){
		if (world->exit[i]->origin == playerposition){ 
			if (world->exit[i]->direction == direction){
				if (world->exit[i]->opendoor == true){
					playerposition = world->exit[i]->destination;
					printf("%s\n %s", world->exit[i]->GetName(), world->exit[i]->GetDescription);
					break;

				}
				else{
					printf("The door is closed \n");
					break;

				}
			}

		}
	}
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "World.h"
#include "mVector.h"
#include "item.h"
#include "Room.h"
#include "Player.h"
#include "Exit.h"
#include "NPC.h"

World::World()
{

}

World::~World()
{

}

void World::CreateWorld()
{
	Room* Entrance = new Room("Entrance", "You are at the entrance, the exit has been blocked by stones");
	Room* StrangleTunnel = new Room("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end you see a key");
	Room* StrangleRoom = new Room("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room you see a book");
	Room* SecretRoom = new Room("Secret Room", "You just found a secret room, there must be something hidden here are a chest who save items you see a potion");
	Room* MHI = new Room("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways you see a chest");
	Room* MHM = new Room("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated you see a sword");
	Room* MHE = new Room("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard you see a stone");
	Room* DichargeRoom = new Room("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall");
	Room* StrangleTunnel2 = new Room("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ");
	Room* VentilationRoom = new Room("Ventilation Room", "You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out.");
	Room* QueenRoom = new Room("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.");
	Room* KingRoom = new Room("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures");

	


	room.pushback(Entrance);
	room.pushback(StrangleTunnel);
	room.pushback(StrangleRoom);
	room.pushback(SecretRoom);
	room.pushback(MHI);
	room.pushback(MHM);
	room.pushback(MHE);
	room.pushback(DichargeRoom);
	room.pushback(StrangleTunnel2);
	room.pushback(VentilationRoom);
	room.pushback(QueenRoom);
	room.pushback(KingRoom);


	Item* Key = new Item("key", "can use for open 1 door", room[1]);
	Item* Sword = new Item("sword" ,"+50damage ", room[5]);
	Item* Potion = new Item("health potion", "restore 50% life", room[3]);
	Item* Book = new Item("book" ,"+5 damage ", room[2]);
	Item* Stone = new Item("stone", "kill 1 hit ", room[6]);
	Item* Chest = new Item("CHEST", "you can save 4 items", room[4]);

	items.pushback(Key);
	items.pushback(Sword);
	items.pushback(Potion);
	items.pushback(Book);
	items.pushback(Stone);
	items.pushback(Chest);
	room[1]->entities.pushback(items[0]);
	room[5]->entities.pushback(items[1]);
	room[3]->entities.pushback(items[2]);
	room[2]->entities.pushback(items[3]);
	room[6]->entities.pushback(items[4]);
	room[4]->entities.pushback(items[5]);

	exit.pushback(new Exit("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end", east, true, Entrance, StrangleTunnel));
	exit.pushback(new Exit("Entrance", "You are at the entrance, the exit has been blocked by stones", west, true, StrangleTunnel, Entrance));
	exit.pushback(new Exit("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room", south, true, StrangleTunnel, StrangleRoom));
	exit.pushback(new Exit("Strangle Tunnel", "You are in a narrow tunnel that seems to have no end", north, true, StrangleRoom, StrangleTunnel));
	exit.pushback(new Exit("Secret Room", "You just found a secret room, there must be something hidden", east, false, StrangleRoom, VentilationRoom));
	exit.pushback(new Exit("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room", west, true, VentilationRoom, StrangleRoom));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways", south, true, Entrance, MHI));
	exit.pushback(new Exit("Entrance", "You are at the entrance, the exit has been blocked by stones", north, true, MHI, Entrance));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways", west, true, StrangleRoom, MHI));
	exit.pushback(new Exit("Strangle Room", "It seems a false room, created to lose intruders, a door is at the end of the room", east, true, MHI, StrangleRoom));
	exit.pushback(new Exit("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated", down, true, MHI, MHM));
	exit.pushback(new Exit("Main Hall Initation", "you are at the beginning of the large main hall ,where to find some stairs down , no more ways", up, true, MHM, MHI));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", south, true, MHM, MHE));
	exit.pushback(new Exit("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated", north, true, MHE, MHM));
	exit.pushback(new Exit("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall", east, true, MHM, DichargeRoom));
	exit.pushback(new Exit("Main Hall Half", "you are at the middle of the large main hall, find two paths, one to go straight and another full of boxes but is illuminated", west, true, DichargeRoom, MHM));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", south, true, DichargeRoom, StrangleTunnel2));
	exit.pushback(new Exit("Dicharge Room", "The road full of boxes has taken you to a room full of rotten food and broken vessel at the end of the room you find a strange hall", north, true, StrangleTunnel2, DichargeRoom));
	exit.pushback(new Exit("Ventilation Room", "You watched the light and fresh air were coming from this room full of small ventilation holes barely enters a finger into a hole seems to be no way out.", east, true, StrangleTunnel2, VentilationRoom));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", west, true, VentilationRoom, StrangleTunnel2));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", west, true, StrangleTunnel2, MHE));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", east, true, MHE, StrangleTunnel2));
	exit.pushback(new Exit("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.", south, true, MHE, QueenRoom));
	exit.pushback(new Exit("Main Hall End", "you are at the end of main hall, you found two ways: a small cloed room or a gilded hall where a sinister noise is heard", north, true, QueenRoom, MHE));
	exit.pushback(new Exit("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures", south, true, StrangleTunnel2, KingRoom));
	exit.pushback(new Exit("Strangle Tunnel", "We find a very wide tunnel with natural light emanating from the end of the hall , you can see the strange paintings which tell the story of a strange magical scepter , against more advance more you smell the fresh air ", north, false, KingRoom, StrangleTunnel2));
	exit.pushback(new Exit("Queen Room", "You 've just discovered the room of the queen, the coffin is opened inside the mummy of Queen armless seems that someone has removed an object that had caught on the walls you will find texts about the curse of the scepter.", west, false, KingRoom, QueenRoom));
	exit.pushback(new Exit("King Room", "You are in the room faraon not you believe it is a door where output is around you and thousands of treasures", east, false, QueenRoom, KingRoom));

	npc.pushback(new NPC("Mini mummy", "a little mummy, he attack very fast but don't have a lot of damage", MHI));
	npc.pushback(new NPC("Mini mummy", "a little mummy, he attack very fast but don't have a lot of damage", DichargeRoom));
	npc.pushback(new NPC("Spider", "i'ts a vulgar spider", StrangleTunnel));
	npc.pushback(new NPC("Spider", "i'ts a vulgar spider", StrangleTunnel2));
	npc.pushback(new NPC("The Queen", "i'ts the Queen, i'ts very dangerouse she attack very slowly but the damage are elevated", QueenRoom));
	npc.pushback(new NPC("Tutankamon", "i'ts the King, final boos, you can win??�", KingRoom));
	player.pushback(new Player("Sito", "THE BEST", room[0]));

}
bool World::Input()
{
	bool repeat = true;
	char input[50];
	char part1[25];
	char part2[25];
	char* context;

	do
	{
		printf("\nORDER!!: ");
		gets_s(input);

		if (strcmp(input, "\0") == 0)
		{
			return true;
		}

		mstring action(input);
		Vector < mstring* > PlayerAction;
		action.tokenize(PlayerAction);



		if (action == "h" || action == "help")
		{
			printf("For move use north, south, east, west, up , down \n");
			printf("For items use pick/drop/put/get + item");
			printf("For open doors firs say open and late before question insert direction");
			printf("For look use l or look if u want look + direction");
			printf("Use h for help or q for quit  use i for inventory");
			return true;
		}
		else if (action == "stats"){
			player[0]->Stats();
			return true;
		}
		if (PlayerAction.size() == 2){  //////////////////////////////////////////////////////////////////////////////////
			if (PlayerAction[0]->allstring() == "get"){


				player[0]->GetItem(this, PlayerAction[1]->c_str());

			}
			else if (PlayerAction[0]->allstring() == "put"){

				player[0]->Put(this, PlayerAction[1]->c_str());
			}
			else if (PlayerAction[0]->allstring() == "pick")
			{
				player[0]->PickItem(PlayerAction[1]->c_str());


			}
			else if (PlayerAction[0]->allstring() == "drop" || PlayerAction[0]->allstring() == "Drop")
			{

				player[0]->DropItem(PlayerAction[1]->c_str());

			}


			else if (PlayerAction[0]->allstring() == "look" || PlayerAction[0]->allstring() == "l")
			{
				if (PlayerAction[1]->allstring() == "n" || PlayerAction[1]->allstring() == "north")
				{
					player[0]->lookalldirection(this, north);
				}




				if (PlayerAction[1]->allstring() == "s" || PlayerAction[1]->allstring() == "south")
				{
					player[0]->lookalldirection(this, south);
				}

				if (PlayerAction[1]->allstring() == "w" || PlayerAction[1]->allstring() == "west")
				{
					player[0]->lookalldirection(this, west);
				}

				if (PlayerAction[1]->allstring() == "e" || PlayerAction[1]->allstring() == "east")
				{
					player[0]->lookalldirection(this, east);
				}

				if (PlayerAction[1]->allstring() == "u" || PlayerAction[1]->allstring() == "up")
				{
					player[0]->lookalldirection(this, up);
				}

				if (PlayerAction[1]->allstring() == "d" || PlayerAction[1]->allstring() == "down")
				{
					player[0]->lookalldirection(this, down);
				}
			}
			else if (PlayerAction[0]->allstring() == "go" || PlayerAction[0]->allstring() == "g")
			{
				if (PlayerAction[1]->allstring() == "n" || PlayerAction[1]->allstring() == "north")
				{
					player[0]->move(this, north);
				}




				if (PlayerAction[1]->allstring() == "s" || PlayerAction[1]->allstring() == "south")
				{
					player[0]->move(this, south);
				}

				if (PlayerAction[1]->allstring() == "w" || PlayerAction[1]->allstring() == "west")
				{
					player[0]->move(this, west);
				}

				if (PlayerAction[1]->allstring() == "e" || PlayerAction[1]->allstring() == "east")
				{
					player[0]->move(this, east);
				}

				if (PlayerAction[1]->allstring() == "u" || PlayerAction[1]->allstring() == "up")
				{
					player[0]->move(this, up);
				}

				if (PlayerAction[1]->allstring() == "d" || PlayerAction[1]->allstring() == "down")
				{
					player[0]->move(this, down);
				}
			}
		}




		else if (PlayerAction[0]->allstring() == "look" || PlayerAction[0]->allstring() == "l")
		{


			player[0]->look();
		}
			else if (PlayerAction[0]->allstring() == "inventory" || PlayerAction[0]->allstring() == "i")
			{

				player[0]->Inventory();
			}





			else if (PlayerAction[0]->allstring() == "n" || PlayerAction[0]->allstring() == "north")
			{
				player[0]->move(this, north);
			}

			else if (PlayerAction[0]->allstring() == "s" || PlayerAction[0]->allstring() == "south")
			{
				player[0]->move(this, south);
			}

			else if (PlayerAction[0]->allstring() == "w" || PlayerAction[0]->allstring() == "west")
			{
				player[0]->move(this, west);
			}

			else if (PlayerAction[0]->allstring() == "e" || PlayerAction[0]->allstring() == "east")
			{
				player[0]->move(this, east);
			}

			else if (PlayerAction[0]->allstring() == "u" || PlayerAction[0]->allstring() == "up")
			{
				player[0]->move(this, up);
			}

			else if (PlayerAction[0]->allstring() == "d" || PlayerAction[0]->allstring() == "down")
			{
				player[0]->move(this, down);
			}

			else if (PlayerAction[0]->allstring() == "g" || PlayerAction[0]->allstring() == "go")
			{
				
				
					if (PlayerAction[1]->allstring() == "n" || PlayerAction[1]->allstring() == "north")
					{
						player[0]->move(this, north);
					}

					else if (PlayerAction[1]->allstring() == "s" || PlayerAction[1]->allstring() == "south")
					{
						player[0]->move(this, south);
					}

					else if (PlayerAction[1]->allstring() == "w" || PlayerAction[1]->allstring() == "west")
					{
						player[0]->move(this, west);
					}

					else if (PlayerAction[1]->allstring() == "e" || PlayerAction[1]->allstring() == "east")
					{
						player[0]->move(this, east);
					}

					else if (PlayerAction[1]->allstring() == "u" || PlayerAction[1]->allstring() == "up")
					{
						player[0]->move(this, up);
					}

					else if (PlayerAction[1]->allstring() == "d" || PlayerAction[1]->allstring() == "down")
					{
						player[0]->move(this, down);
					}
				
			}



			else if (PlayerAction[0]->allstring() == "open" || PlayerAction[0]->allstring() == "o")
			{
				if (PlayerAction.size() == 1)
				{
					printf("Which direction? ");
					char word2[15];
					gets_s(word2);
					PlayerAction.pushback(new mstring(word2));
				}
				if (PlayerAction.size() > 1)
				{
					if (PlayerAction[1]->allstring() == "n" || PlayerAction[1]->allstring() == "north")
					{
						player[0]->opendoor(this, north);
					}

					else if (PlayerAction[1]->allstring() == "s" || PlayerAction[1]->allstring() == "south")
					{
						player[0]->opendoor(this, south);
					}

					else if (PlayerAction[1]->allstring() == "w" || PlayerAction[1]->allstring() == "west")
					{
						player[0]->opendoor(this, west);
					}

					else if (PlayerAction[1]->allstring() == "e" || PlayerAction[1]->allstring() == "east")
					{
						player[0]->opendoor(this, east);
					}

					else if (PlayerAction[1]->allstring() == "u" || PlayerAction[1]->allstring() == "up")
					{
						player[0]->opendoor(this, up);
					}

					else if (PlayerAction[1]->allstring() == "d" || PlayerAction[1]->allstring() == "down")
					{
						player[0]->opendoor(this, down);
					}
				}

			}

			else if (PlayerAction[0]->allstring() == "close" || PlayerAction[0]->allstring() == "c")
			{
				if (PlayerAction.size() == 1)
				{
					printf("Which direction? ");
					char word2[15];
					gets_s(word2);
					PlayerAction.pushback(new mstring(word2));
				}
				if (PlayerAction.size() > 1)
				{
					if (PlayerAction[1]->allstring() == "n" || PlayerAction[1]->allstring() == "north")
					{
						player[0]->opendoor(this, north);
					}

					else if (PlayerAction[1]->allstring() == "s" || PlayerAction[1]->allstring() == "south")
					{
						player[0]->opendoor(this, south);
					}

					else if (PlayerAction[1]->allstring() == "w" || PlayerAction[1]->allstring() == "west")
					{
						player[0]->opendoor(this, west);
					}

					else if (PlayerAction[1]->allstring() == "e" || PlayerAction[1]->allstring() == "east")
					{
						player[0]->opendoor(this, east);
					}

					else if (PlayerAction[1]->allstring() == "u" || PlayerAction[1]->allstring() == "up")
					{
						player[0]->opendoor(this, up);
					}

					else if (PlayerAction[1]->allstring() == "d" || PlayerAction[1]->allstring() == "down")
					{
						player[0]->opendoor(this, down);
					}
				}
			}


			else if (action == "q" || action == "quit")
			{
				printf("\nThanks for playing!\n");
				return false;
			}



			else
			{
				printf("Wrong input, if u need help -> h.\n");
				return true;
			}
		} while (repeat == true);
	}






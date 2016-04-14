#include "player.h"


Player::Player(){


}

Player::~Player(){



}
int Order(const mstring& Fcommand, const mstring& Scommand, const mstring&Tcommand){
	// all possibilities first command in the string

	if ((Fcommand == "north") || (Fcommand == "NORTH") || (Fcommand == "n")){
		return NORTH;
	}
	if ((Fcommand == "south") || (Fcommand == "SOUTH") || (Fcommand == "s")){
		return SOUTH;
	}
	if ((Fcommand == "west") || (Fcommand == "WEST") || (Fcommand == "w")){
		return WEST;
	}
	if ((Fcommand == "east") || (Fcommand == "EAST") || (Fcommand == "e")){
		return EAST;
	}
	if ((Fcommand == "quit") || (Fcommand == "QUIT")){
		return QUIT;
	}
	if ((Fcommand == "go") || (Fcommand == "GO")){
		return GO;
	}
	if ((Fcommand == "look") || (Fcommand == "LOOK") || (Fcommand == "l") || (Fcommand == "L")){
		return LOOK;
	}
	if ((Fcommand == "open") || (Fcommand == "OPEN")){
		return OPEN;
	}
	if ((Fcommand == "close") || (Fcommand == "CLOSE")){
		return CLOSE;
	}
	if ((Fcommand == "noth") || (Fcommand == "NORTH")){
		return NORTH;
	}
	if (Fcommand == "pick" || (Fcommand == "PICK")){
		return PICK;
	}
	if (Fcommand == "drop"){
		return DROP;
	}
	if ((Fcommand == "inventory") || (Fcommand == "inv")){
		return INVENTORY;
	}
	if (Fcommand == "equipped"){
		return EQUIPPED;
	}
	if (Fcommand == "equip"){
		return EQUIP;
	}
	if (Fcommand == "unequip"){
		return UNEQUIP;
	}
	if (Fcommand == "put"){
		return PUT;
	}
	if (Fcommand == "get"){
		return GET;
	}
	if (Fcommand == "stats"){
		return STATS;
	}
	// all possibilities second command in the string
	if ((Scommand == "north") || (Scommand == "NORTH") || (Scommand == "n")){
		return NORTH;
	}
	if ((Scommand == "south") || (Scommand == "SOUTH") || (Scommand == "s")){
		return SOUTH;
	}
	if ((Scommand == "west") || (Scommand == "WEST") || (Scommand == "w")){
		return WEST;
	}
	if ((Scommand == "east") || (Scommand == "EAST") || (Scommand == "e")){
		return EAST;
	}
	if ((Scommand == "sword") || (Scommand == "SWORD") ){
		return SWORD;
	}
	if ((Scommand == "sword") || (Scommand == "SWORD")){
		return SWORD;
	}
	if ((Scommand == "health") || (Scommand == "potion")){
		return HEALTH;
	}
	if ((Scommand == "key") || (Scommand == "KEY")){
		return KEY;

	}
	if ((Scommand == "book") || (Scommand == "BOOK")){
		return BOOK;
	}
	if ((Scommand == "stone") || (Scommand == "STONE")){
		return STONE;
	}
	// all possibilities 3 command in the string
	if ((Tcommand == "put") || (Scommand == "into")){
		return INTO;
	}
	if ((Tcommand == "get") || (Scommand == "from")){
		return FROM;
	}
}
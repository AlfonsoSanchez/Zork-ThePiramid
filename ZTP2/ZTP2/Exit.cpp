
#include "Exit.h"

Exit::Exit(const char*nam, const char*desc, dir direct, bool opdoor, Room* origins, Room* desti) : Entity(nam,desc),direction(direct),opendoor(opdoor), origin(origins),destination(desti){


}

Exit::~Exit(){


}
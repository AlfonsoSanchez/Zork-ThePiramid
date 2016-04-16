#include "Exit.h"

Exit::Exit(const char* names, const char* descriptions, dir direct, bool open, Room* origins, Room* destination) : Entity(names, descriptions), direction(direct), Origin(origins), Destination(destination), opendoor(open)
{

}
Exit::~Exit()
{

}
#include "entity.h"

Entity::Entity(Room* currentRoom, char t, int xLocation, int yLocation) {
    curRoom = currentRoom;
    entType = t;
    x = xLocation;
    y = yLocation;
    if(entType != ' ') {
        isEmpty = false;
    }
}

char Entity::getType() {
    return entType;
}

//Entity::~Entity() {
//    // delete any allocated memory
//}

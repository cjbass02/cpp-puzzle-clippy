#include "virus.h"

Virus::Virus(Room* currentRoom, char type, int x, int y)
: Entity(currentRoom, type, x, y) {
    // initialize any Virus-specific attributes
}

//Virus::~Virus() {
//    // delete any allocated memory
//}

void Virus::infect() {
    // infect a nearby Entity
}

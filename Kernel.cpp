#include "kernel.h"

Kernel::Kernel(Room* currentRoom, char type, int x, int y, Board *b)
: Entity(currentRoom, type, x, y) {
    // initialize any Kernel-specific attributes
    board = b;
}

//Kernel::~Kernel() {
//    // delete any allocated memory
//}

bool Kernel::fight() {
    // handle a fight with another Entity in the same room
    // return true if the Kernel wins, false otherwise
}

bool Kernel::move(char entry) {
    // move the Kernel in the specified direction
    // return true if successful, false otherwise
    if (entry == 'n') {
        if(y != 0) {
            curRoom->vacate();
            Entity::y--;
            curRoom = board->getRoom(x, y);
            if(curRoom->getEntityChar() == 'c') {
                return true;
            }
            curRoom->enter(this);
        }
        
    } else if (entry == 'e') {
        if(x != 4) {
            curRoom->vacate();
            Entity::x++;
            curRoom = board->getRoom(x, y);
            if(curRoom->getEntityChar() == 'c') {
                return true;
            }
            curRoom->enter(this);
        }
        
    } else if (entry == 's') {
        if(y != 5) {
            curRoom->vacate();
            Entity::y++;
            curRoom = board->getRoom(x, y);
            if(curRoom->getEntityChar() == 'c') {
                return true;
            }
            curRoom->enter(this);
        }
        
    } else if (entry == 'w') {
        if(x != 0) {
            curRoom->vacate();
            Entity::x--;
            curRoom = board->getRoom(x, y);
            if(curRoom->getEntityChar() == 'c') {
                return true;
            }
            curRoom->enter(this);
        }
        
    }

    return false;
}

int Kernel::getX() {
    return x;
}

int Kernel::getY() {
    return y;
}
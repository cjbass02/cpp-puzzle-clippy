#include "room.h"
#include "board.h"
#include "entity.h"
#include "clippy.h"
#include "virus.h"
#include "corruptedFile.h"
#include "kernel.h"
#include <string>
using namespace std;


Room::Room(int x, int y, char e, Board* b) {
    // initialize attributes
    xPos = x;
    yPos = y;
    entity = e;
    board = b;
}

Room::Room(char c) {
    setEntity(c);
}

//Room::~Room() {
//    // delete any allocated memory
//}

char Room::giveClue() {
    int x = xPos;
    int y = yPos;
    char c = '-';
    bool hasV = false;
    bool hasF = false;
    if(board->validRoom(x-1, y) && !board->getRoom(x-1, y)->isEmpty()){
        c = board->getRoom(x-1, y)->getEntityChar();
        if (c == 'f') {
            hasF = true;
        }
        if (c == 'v') {
            hasV = true;
        }
        if (c == 'k') {
            return c;
        }
    } else if(board->validRoom(x+1, y) && !board->getRoom(x+1, y)->isEmpty()){
        c = board->getRoom(x+1, y)->getEntityChar();
        if (c == 'f') {
            hasF = true;
        }
        if (c == 'v') {
            hasV = true;
        }
        if (c == 'k') {
            return c;
        }
    } else if(board->validRoom(x-1, y-1) && !board->getRoom(x-1, y-1)->isEmpty()){
        c = board->getRoom(x-1, y-1)->getEntityChar();
        if (c == 'f') {
            hasF = true;
        }
        if (c == 'v') {
            hasV = true;
        }
        if (c == 'k') {
            return c;
        }
    } else if(board->validRoom(x, y-1) && !board->getRoom(x, y-1)->isEmpty()){
        c = board->getRoom(x, y-1)->getEntityChar();
        if (c == 'f') {
            hasF = true;
        }
        if (c == 'v') {
            hasV = true;
        }
        if (c == 'k') {
            return c;
        }
    } else if(board->validRoom(x+1, y-1) && !board->getRoom(x+1, y-1)->isEmpty()){
        c = board->getRoom(x+1, y-1)->getEntityChar();
        if (c == 'f') {
            hasF = true;
        }
        if (c == 'v') {
            hasV = true;
        }
        if (c == 'k') {
            return c;
        }
    } else if(board->validRoom(x-1, y+1) && !board->getRoom(x-1, y+1)->isEmpty()){
        c = board->getRoom(x-1, y+1)->getEntityChar();
        if (c == 'f') {
            hasF = true;
        }
        if (c == 'v') {
            hasV = true;
        }
        if (c == 'k') {
            return c;
        }
    } else if(board->validRoom(x, y+1) && !board->getRoom(x, y+1)->isEmpty()){
        c = board->getRoom(x, y+1)->getEntityChar();
        if (c == 'f') {
            hasF = true;
        }
        if (c == 'v') {
            hasV = true;
        }
        if (c == 'k') {
            return c;
        }
    } else if(board->validRoom(x+1, y+1) && !board->getRoom(x+1, y+1)->isEmpty()){
        c = board->getRoom(x+1, y+1)->getEntityChar();
        if (c == 'f') {
            hasF = true;
        }
        if (c == 'v') {
            hasV = true;
        }
        if (c == 'k') {
            return c;
        }
    }
    if (hasV) {
        return 'v';
    } else if(hasF) {
        return 'f';
    } else {
        return '-';
    }
}


void Room::setEntity(char t) {
    entity = t;
    if(t == 'c' || t == 'C') {
        empty = false;
        //Create a new clippy object and set the current entitiy
        //Clippy ent (this, 'c', xPos, yPos);
        //Entity *ptr = &ent;
        //currentEntity = ptr;
    } else if (t == 'k' || t== 'K') {
        empty = false;
        //Create a new Kernel object and set the current entitiy
        //Kernel ent (this, 'k', xPos, yPos);
        //Entity *ptr = &ent;
        //currentEntity = ptr;
    } else if (t == 'v' || t== 'V') {
        empty = false;
        //Create a new Virus object and set the current entitiy
        Virus ent (this, 'v', xPos, yPos);
        Entity *ptr = &ent;
        currentEntity = ptr;
    } else if (t == 'f' || t== 'F') {
        empty = false;
        //Create a new CorruptedFile object and set the current entitiy
        CorruptedFile ent (this, 'f', xPos, yPos, board);
        Entity *ptr = &ent;
        currentEntity = ptr;
    } else if (t == '-') {
        empty = true;
        Entity *ptr = NULL;
        currentEntity = ptr;
    }
}

void Room::setEntity(Entity *e) {
    currentEntity = e;
}

void Room::setEntityChar(char c) {
    entity = c;
}

Entity Room::getEntity() {
    return *currentEntity;
}

char Room::getEntityChar(){
    return entity;
}

void Room::enter(Entity *newEnt) {
    tempEnt = entity;
    currentEntity = newEnt;
    if(empty) {
        entity = currentEntity->getType();
    }
    if(newEnt->getType() == 'k') {
        entity = 'k';
    }
    
    empty = false;
}

void Room::vacate() {
    entity = tempEnt;
    //entity = currentEntity->getType();
    //entity = '-';
    empty = true;
}

bool Room::isEmpty() {
    return empty;
}

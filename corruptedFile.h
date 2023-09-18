/*
 * corruptedFile.h
 *
 *      Author: Christian Basso
 */
 
 // Sets up common attributes and oppereations for all entities
 
 #ifndef CORRUPTEDFILE_H_
 #define CORRUPTEDFILE_H_
 #include "entity.h"
 #include "board.h"
 #include "room.h"
 #include "clippy.h"

class Board;
class Clippy;
class Room;
 
class CorruptedFile : public Entity {
public:
    CorruptedFile(Room* currentRoom, char type, int x, int y, Board* b);
    //Throws Clippy to a random room
    void relocate(Clippy *clip);
private:
     Board *board;
 };
 
 #endif /* CORRUPTEDFILE_H_ */
#include <iostream>
#include "corruptedFile.h" 
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

CorruptedFile::CorruptedFile(Room* currentRoom, char type, int x, int y, Board* b)
        : Entity(currentRoom, type, x, y) {
    board = b;
}

//CorruptedFile::~CorruptedFile() {
//    // delete any allocated memory
//}

void CorruptedFile::relocate(Clippy *clip) {
    srand((unsigned)time(0)); // seed the random number generator with the current time
    bool validRoom = false;
    while (!validRoom) {
        int new_yLocation = rand() % 6;
        int new_xLocation = rand() % 5; // generate a random number between 0 and 4
        Room* targetRoom = board->getRoom(new_xLocation, new_yLocation);
        if (targetRoom->isEmpty()) {
            board->getRoom(clip->y, clip->x)->vacate();
            board->getRoom(clip->y, clip->x)->setEntity(this);
            clip->setX(new_yLocation);
            clip->setY(new_xLocation);
            board->placeClippy(clip->y, clip->x, clip);
            cout << "X location after relocate: " << clip->x << endl;
            cout << "Y location after relocate: " << clip->y << endl;
            clip->curRoom = targetRoom;
            validRoom = true;
        }
    }
}

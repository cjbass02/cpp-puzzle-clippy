#include <stdio.h>
#include <cstdlib> 
#include <ctime> 
#include "board.h"
#include "entity.h"
#include "clippy.h"
#include "corruptedFile.h"
#include "iostream"
using namespace std;


bool moveKern(Kernel *k) {
    srand((unsigned)time(0)); 
    int i;
    int j;
    i = (rand()%2)+1;
    j = (rand()%4)+1;
    
    bool hitClip = false;
    
    if(i == 1) {
        if(j == 1) {
            hitClip = k->move('s');
        } else if (j == 2) {
            hitClip = k->move('n');
        } else if (j == 3) {
            hitClip = k->move('w');
        } else if (j == 4) {
            hitClip = k->move('e');
        }
    }
    
    return hitClip;
}

int main(int argc, char **argv)
{
	Board *b = new Board();
    Clippy *clip = new Clippy(b->getRoom(1, 1), 'c', 1, 1, b);
    CorruptedFile *corruptedFile = new CorruptedFile(b->getRoom(1, 2), 'f', 1, 2, b);
    Kernel *kern = new Kernel(b->getRoom(3, 1), 'k', 3, 1, b);
    
    b->populateBoard(clip, kern, corruptedFile, b);

    b->printBoard();
    char nextRoom;
    bool hitClip = false;
    while (true) {
        nextRoom = clip->move();
        moveKern(kern);
        if(kern->getX() == clip->getY() && kern->getY() == clip->getX()) {
          cout << "YOU RAN INTO KERNEL: GAME OVER" << endl;
            return 0;  
        }
        if(hitClip) {
            cout << "YOU RAN INTO KERNEL: GAME OVER" << endl;
            return 0;
        }
        if (nextRoom == 'f') { //check if clip has moved into the corrupted files room
            cout << "YOU RAN INTO A CORRUPTED FILE: You have been relocated." << endl;
            corruptedFile->relocate(clip); //if it has, then call relocate()
        } else if(nextRoom == 'k') {
            cout << "YOU RAN INTO KERNEL: GAME OVER" << endl;
            return 0;
        } else if(nextRoom == 'v') {
            cout << "YOU RAN INTO A VIRUS: GAME OVER" << endl;
            return 0;
        } else if (nextRoom == '1') {
            return 1;
        }
        //b->printBoard();
    }
	return 0;
}





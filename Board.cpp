 #include "board.h"
#include "room.h"
#include "entity.h"
#include "clippy.h"
#include <iostream>
#include <ctime>

using namespace std;

Board::Board() { 
    for (int i = 0; i < MAX_ROWS; i++) {
        for(int j = 0; j < MAX_COLUMNS; j++) {
            rooms[i][j] = new Room(i, j, ' ', this);
        }
    }
}

void Board::printBoard() {
    for (int i = 0; i < MAX_ROWS; i++) {
        for(int j = 0; j < MAX_COLUMNS; j++) {
            cout << rooms[i][j]->getEntityChar();
            
        }
        cout << endl;
    }
}

//Board::~Board() {
//    for (int i = 0; i < MAX_COLUMNS; i++) {
//        delete[] rooms[i];
//    }
//    delete[] rooms;
//}

void Board::populateBoard(Clippy *clippy, Kernel *kernel, CorruptedFile *corruptedFile, Board *b) {
    srand(time(nullptr));
    int numKernals = 1;
    int numFiles = 4;
    int numClippy = 1;
    int numVirus = 3;
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLUMNS; j++) {
            int r = rand() % 36;
            if(i != 1 && j != 1) {
                if (r < 7 && numFiles > 0){
                    rooms[i][j]->setEntity('f');
                    numFiles--;
                } else if (r < 11 && numVirus > 0) {
                    rooms[i][j]->setEntity('v');
                    numVirus--;
                } else {
                    rooms[i][j]->setEntity('-');
                }
            } else {
                rooms[i][j]->setEntity('-');
            }
            
        }
    }
    placeClippy(1, 1, clippy);
    clip = clippy;
    //getRoom(1, 1)->setEntity(clippy);
    placeKernel(3, 1, kernel);
    kern = kernel;
    //placeCorruptedFile(4, 1, corruptedFile);
}

Room* Board::getRoom(int x, int y) {
    return rooms[x][y];
}

bool Board::validRoom(int x, int y) {
    return x >= 0 && x < MAX_COLUMNS && y >= 0 && y < MAX_ROWS;
}

void Board::placeClippy(int x, int y, Clippy *clip) {
    rooms[x][y]->enter(clip);
}

void Board::placeKernel(int x, int y, Kernel *kern) {
    rooms[x][y]->enter(kern);
}

void Board::placeCorruptedFile(int x, int y, CorruptedFile *corruptedFile) {
    rooms[x][y]->enter(corruptedFile);
}

/*
 * board.h
 *
 *      Author: Christian Basso
 */
 
 // Defines the opperations and aspects of the game board
 
 #ifndef BOARD_H_
 #define BOARD_H_
 #include "clippy.h"
 #include "kernel.h"
 #include "corruptedFile.h"

 
 class Room; 
 class Clippy;
 class Kernel;
 class CorruptedFile;
 
 
 class Board {
      static const int MAX_ROWS = 5;
      static const int MAX_COLUMNS = 6;
public:
     //Create an empty board
     Board();
     //Board(int maxColuumns, int maxRows);
     // Fills in the board with rooms
     void printBoard();
     //Put entities in the rooms
     void populateBoard(Clippy* clippy, Kernel* kernal, CorruptedFile *corruptedFile, Board* b);
     
     //put clippy in a starting spot
     void placeClippy(int x, int y, Clippy *clip);
     
     //put the Kernel in a starting spot
     void placeKernel(int x, int y, Kernel *kern);
     
     //put the corrupted file in a starting spot
     void placeCorruptedFile(int x, int y, CorruptedFile *corruptedFile);
     
     //print a hint of what rooms are not empty next to clippy
     void printHint();
     
     //returns if the room index is valid
     bool validRoom(int x, int y);
     Room* getRoom(int x, int y);
private: 
     Clippy* clip;
     Kernel* kern;
     Room *rooms[MAX_ROWS][MAX_COLUMNS];
 };
 
 #endif /* BOARD_H_ */

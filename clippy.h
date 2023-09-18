/*
 * clippy.h
 *
 *      Author: Christian Basso
 */
 
 //Defines additional functionality for clippy that other entities dont have
 
 #ifndef CLIPPY_H_
 #define CLIPPY_H_
 #include "entity.h"
 #include "board.h"
 
 class Entity;
 class Board;

 
 class Clippy : public Entity {
public:
Clippy(Room* currentRoom, char type, int x, int y, Board* b);
//Move clippy to another room
char move();
//shoot a debug
bool shoot(int xLoc, int yLoc);
void printNear(char c);
void printHelp();
int getX();
int getY();
void setX(int newX);
void setY(int newY);
private: 
Board *board;
int debugsLeft = 5;
 };
 
 #endif /* CLIPPY_H_ */
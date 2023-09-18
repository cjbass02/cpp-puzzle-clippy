/*
 * kernel.h
 *
 *      Author: Christian Basso
 */
 
 //Defines additional funtionality for 
 
 #ifndef KERNEL_H_
 #define KERNEL_H_
 #include "entity.h"
 #include "board.h"
 
 class Board;
 
 
 class Kernel : public Entity{
public:
Kernel(Room* currentRoom, char type, int x, int y, Board* b);
//Clippy has to answer a trivia question to survive
bool fight();
//move the kernel to another room
bool move(char entry);
int getX();
int getY();
private: 
Board *board;
 };
 
 #endif /* KERNEL_H_ */
/*
 * virus.h
 *
 *      Author: Christian Basso
 */
 
 //Defines the virus object
 
 #ifndef VIRUS_H_
 #define VIRUS_H_
 #include "entity.h"
 

 class Virus : public Entity {
public:
Virus(Room* currentRoom, char type, int x, int y);
//End the game
void infect();
private: 
 };
 
 #endif /* VIRUS_H_ */
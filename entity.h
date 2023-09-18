/*
 * entity.h
 *
 *      Author: Christian Basso
 */
 
 // Sets up common attributes and oppereations for all entities
 
 #ifndef ENTITY_H_
 #define ENTITY_H_
 #include "room.h"
 
 class Room;
 
 class Entity {
public:
Entity(Room* currentRoom, char t, int xLocation, int yLocation);
//The room the entity is in
Room *curRoom;

//Represenation of the type of entity
//C is clippy, K is Kernel, V is virus, F is corrupted file
char entType;

//x location of the room its in
int x;

//y location of the room its in
int y;

char getType();
private: 
bool isEmpty = true;

 };
 
 #endif /* ENTITY_H_ */
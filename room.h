/*
 * room.h
 *
 *      Author: Christian Basso
 */
 
 // Defines the opperations and aspects of the rooms that populate the board
 
 #ifndef ROOM_H_
 #define ROOM_H_
 
 class Entity;
 class Room;
 class Board;
 
 class Room {
     static const int MAX_CONNECTED_ROOMS = 4;
public:
    //Make an empty room
    Room(int x, int y, char e, Board* b);
    
    //Make a room with an entity in it
    Room(char c);
    
    //The room gives clues as to what is in its surrounding rooms
    char giveClue();
    
    Entity getEntity();
    void setEntity(char t);
    void setEntity(Entity *e);
    void enter(Entity *newEnt);
    void vacate();
    char getEntityChar();
    bool isEmpty();
    void setEntityChar(char c);
    
private: 
        
     int xPos;
     int yPos;
     bool empty = true;
     Board *board;
     Room *connectedRooms[MAX_CONNECTED_ROOMS];
     
     //What is in the room
     Entity *currentEntity;
     char entity;
     
     //temp holder for clippy entering and exiting a room.
     char tempEnt = '-';
     
 };
 
 #endif /* ROOM_H_ */
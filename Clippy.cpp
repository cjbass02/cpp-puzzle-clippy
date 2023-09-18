#include "clippy.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Clippy::Clippy(Room* currentRoom, char type, int x, int y, Board* b)
: Entity(currentRoom, type, x, y) {
    board = b;
    int debugsLeft = 5;
}

//Clippy::~Clippy() {
//    // delete any allocated memory
//}


int Clippy::getX() {
    return x;
}

int Clippy::getY() {
    return y;
}

void Clippy::setX(int newX) {
    x = newX;
}

void Clippy::setY(int newY) {
    y = newY;
}

char Clippy::move() {
    // move Clippy in the specified direction
    // return true if successful, false otherwise
    cout << "Action: n)orth, s)outh, e)ast, w)est, sh(o)ot, h)elp, m)ap" << endl;
    char entry = ' ';
    cin >> entry;
    char nextRoomChar = '-';
    if (entry == 'n') {
        if(y != 0) {
            curRoom->vacate();
            Entity::y--;
            cout << "X location: " << x << endl;
            cout << "Y location: " << y << endl;
            //cout << "X: " << x << "     Y: " << y << endl;
            curRoom = board->getRoom(y, x);
            nextRoomChar = curRoom->getEntityChar();
            curRoom->enter(this);
        }
        
    } else if (entry == 'e') {
        if(x != 5) {
            curRoom->vacate();
            Entity::x++;
            cout << "X location: " << x << endl;
            cout << "Y location: " << y << endl;
            //cout << "X: " << x << "     Y: " << y << endl;
            curRoom = board->getRoom(y, x);
            nextRoomChar = curRoom->getEntityChar();
            curRoom->enter(this);
        }
        
    } else if (entry == 's') {
        if(y != 4) {
            curRoom->vacate();
            Entity::y++;
            cout << "X location: " << x << endl;
            cout << "Y location: " << y << endl;
            //cout << "X: " << x << "     Y: " << y << endl;
            curRoom = board->getRoom(y, x);
            nextRoomChar = curRoom->getEntityChar();
            curRoom->enter(this);
        }
        
    } else if (entry == 'w') {
        if(x != 0) {
            curRoom->vacate();
            Entity::x--;
            cout << "X location: " << x << endl;
            cout << "Y location: " << y << endl;
            curRoom = board->getRoom(y, x);
            nextRoomChar = curRoom->getEntityChar();
            curRoom->enter(this);
        }
        
    } else if (entry == 'm') {
        board->printBoard();
    } else if (entry == 'h') {
        printHelp();
    } else if(entry == 'o') {
        cout << "Where do you want to shoot a debugger? (x y) (zero indexed)" << endl;
        int xAim;
        int yAim;
        cin >> xAim;
        cin >> yAim;
        bool hit = shoot(xAim, yAim);
        if(hit) {
            return '1';
        }
    }
    char c = curRoom->giveClue();
    printNear(c);

    
    
    //Band-Aid (doesnt work)
//    if(x == 5) {
//        board->getRoom(0, y + 1)->setEntity('-');
//    }

    return nextRoomChar;
}

void Clippy::printHelp() {
    cout << "Welcome to Clippy's Adventure" << endl;
    cout << "Clippy is trapped in the virtual world, where he must defeat the KERNEL(k) " << endl;
    cout << "Clippy must watch out for VIRUSES(v) and FILES(f)which will end the game if crossed " << endl;
    cout << "SHOOT THE KERNEL TO FREE CLIPPY FROM HIS BINARY HOME!" << endl;
}

void Clippy::printNear(char c) {
    if (c == '-') {
        cout << "Clippy rubs his glasses and still sees nothing." << endl;
    } else if (c == 'k') {
        cout << "The kernel is nearby, SEEK COVER or ATTACK!" << endl;
    } else if (c == 'v') {
        cout << "WATCH OUT there is a virus nearby." << endl;
    } else if (c == 'f') {
        cout << "CORRUPTED FILE FOUND NEARBY" << endl;
    }
}

bool Clippy::shoot(int xLoc, int yLoc) {
    // check if there is another Entity at the specified location
    // return true if there is, false otherwise
    if(xLoc < 6 && xLoc < 5) {
        if(x == xLoc || y == yLoc) {
             if((x == xLoc && abs(y - yLoc) < 3) || (y == yLoc && abs(x - xLoc))) {
                 if(board->getRoom(yLoc, xLoc)->getEntityChar() == 'k') {
                     cout << "YOU KILLED THE KERNEL! THANKS FOR PLAYING" << endl;
                     return true;
                 } else {
                     cout << "shot at: " << board->getRoom(yLoc, xLoc)->getEntityChar() << endl;
                     debugsLeft--;
                     if(debugsLeft == 0) {
                         cout << "YOU RAN OUT OF DEBUGGERS! GAME OVER!" << endl;
                         return true;
                     }
                     cout << "X aim: " << xLoc << " Y aim: " << yLoc << endl;
                     cout << "YOU MISSED! THE KERNEL IS STILL OUT THERE! You have " << debugsLeft << " debuggers left!" << endl;
                     return false;
                 }
             } else {
                 cout << "CLippy cant shoot that far! Try again!" << endl;
                 return false;
             }
         } else {
             cout << "Aim X: " << xLoc << " Acutal x: " << x << "  Aim y: " << yLoc << "   Actual y: " << y << endl;
             cout << "Clippy can only shoot in a straight line! Try again!" << endl;
             return false;
         }
    } else {
        cout << "That cordinate is off the board, try again." << endl;
        return false;
    }
         
}

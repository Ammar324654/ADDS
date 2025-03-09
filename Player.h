#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
public:
    virtual char makeMove() = 0; // Pure virtual function
    virtual string getName() = 0;
    virtual ~Player() {} // Virtual destructor
};

#endif

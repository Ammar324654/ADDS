#include "Computer.h"

Computer::Computer() {}

char Computer::makeMove() {
    return 'R'; // Always plays Rock
}

string Computer::getName() {
    return "Computer";
}

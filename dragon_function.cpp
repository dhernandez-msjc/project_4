//Author: Alex Naron
//Github:
//November 05, 2020
//CSIS 113A

#include "dragon_function.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

//define functions for dragon

void bite() {
cout << "Dragon bites you!" << "\n\n";
}

void whip_tail(int damage) {
cout << "Dragon whips tail for " << damage << " damage!" << "\n\n";
}

void breath_fire(int damage, int time) {
cout << "Dragon breathes fire for " << time << " seconds, you take " << damage << " damage!" << "\n\n";
}

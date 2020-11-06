//Author: Alex Naron
//Github:https://github.com/anaron91/project_4
//November 05, 2020
//CSIS 113A

#include "menu_functions.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

//define functions

void display_menu() {
cout << "a) bite " << endl;
cout << "b) whip tail " << endl;
cout << "c) breath fire " << endl;
cout << "q) quit " << endl;
}

//define menu option

MenuOption to_menu_option(char menu_option) {
  return static_cast<MenuOption>(menu_option);
}


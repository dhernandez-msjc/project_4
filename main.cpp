//Author: Alex Naron
//Github:
//November 05, 2020
//CSIS 113A

#include <iostream>
#include "dragon_function.h"
#include "menu_functions.h"
#include <string>

using std::cout;
using std::endl;

int main() {
// initialize main loop

  // display main menu
  display_menu();

  //get users menu choice
  cout << "Enter menu choice: ";
  char menu_choice;
  std::cin >> menu_choice;

  return 0;
}

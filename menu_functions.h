//Author: Alex Naron
//Github:https://github.com/anaron91/project_4
//November 05, 2020
//CSIS 113A

#ifndef PROJECT_4__MENU_FUNCTIONS_H_
#define PROJECT_4__MENU_FUNCTIONS_H_

//create function for menu

void display_menu ();

// create enum for menu options
enum class MenuOption: char {
  Bite = 'a',
  WhipTail,
  BreathFire,
  Quit = 'q',
};

//create menu option

MenuOption to_menu_option(char menu_option);

#endif //PROJECT_4__MENU_FUNCTIONS_H_

//Author: Alex Naron
//Github:https://github.com/anaron91/project_4
//November 05, 2020
//CSIS 113A

#include <iostream>
#include "dragon_function.h"
#include "menu_functions.h"
#include <string>
#include <random>

using std::cout;
using std::endl;

//declare constants for ranges of rng's
const int kMinDamage = 1;
const int kMaxDamage = 200;
const int kMinSeconds = 1;
const int kMaxSeconds = 20;

//create and initialize rng's for damage and seconds
std::mt19937 damage_rng(std::random_device{}());
std::mt19937 seconds_rng(std::random_device{}());
std::uniform_int_distribution<int> damage_range(kMinDamage, kMaxDamage);
std::uniform_int_distribution<int> seconds_range(kMinSeconds, kMaxSeconds);

int main() {
  //create bool for run program
  bool program_is_running = true;

// initialize main loop
  while (program_is_running) {
    // display main menu
    display_menu();

    //get users menu choice
    cout << "Enter menu choice: ";
    char menu_choice;
    std::cin >> menu_choice;

    //execute menu option
    switch (to_menu_option(menu_choice)) {
      case MenuOption::Bite: {
        cout << endl;

        bite();

        break;
      }
      case MenuOption::WhipTail: {
        cout << endl;

        int damage = damage_range(damage_rng);
        whip_tail(damage);

        break;
      }
      case MenuOption::BreathFire: {
        cout << endl;

        int seconds = seconds_range(seconds_rng);
        int damage = damage_range(damage_rng);
        breath_fire(damage, seconds);

        break;
      }
      case MenuOption::Quit: {
        cout << endl;

        program_is_running = false;

        break;
      }
      default:break;
    }

  }

  // display exit message
  cout << "Thank you for playing!!!" << endl;

  return 0;
}

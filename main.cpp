//Author: Alex Naron
//Github:https://github.com/anaron91/project_4
//November 05, 2020
//CSIS 113A

// TODO: these should be organized per the discussion in the video
//       core imports frist, those that use <>, and the local last " "
#include <iostream>
#include "dragon_function.h"
#include "menu_functions.h"
#include <string>
#include <random>

using std::cout;
using std::endl;

// TODO: none of these belong outside of main. I have never made varaibles outside
//       and there is a reason, and I've stated never place variables in the global
//       scope, that is you should not have them declared outside of main.

// TODO: not enough commenting throughout your program. 

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

    // TODO: this tells me nothing. The switch is not executing anything, it is for decisions,
    //       the body of each case does. 
    //execute menu option
    switch (to_menu_option(menu_choice)) {
      case MenuOption::Bite: {
        // todo: this is redundant and should not be here.
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

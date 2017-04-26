/*********************************************************************
 ** Program Filename: divination.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class Divination
 ** Input: none
 ** Output: class Divination functions
 *********************************************************************/

#include "divination.hpp"
#include <iostream>
using namespace std;

Divination::Divination()
{
    setRoomName("Divination");
}

Divination::~Divination(){}

/*********************************************************************
 ** Function: void special()
 ** Description: special function that requires a task to be completed before moving on
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the funciton
 ** Post-Conditions: none
 *********************************************************************/
void Divination::special()
{
    int spell;
    
    cout << endl;
    cout << "Hmmm the door seems to be locked.\n";
    cout << "Enter 1 to cast your spell and unlock the door.\n";
    
    cin >> spell;
    cout << endl;
    
    for(;;)
    {
        if(spell == 1)
        {
            cout << "Alohamora!\n";
            cout << " Well done! The door is open!\n";
            cout << endl;
            break;
        }
        else
        {
            cout << "That didn't work - try again!\n";
            cout << "Enter 1 to cast your spell.\n";
            cin >> spell;
            cout << endl;
        }
    }
}

/*********************************************************************
 ** Function: int roomChoice()
 ** Description: lists options for next room
 ** Parameters: non
 ** Pre-Conditions: Space *object exists and calls the function
 ** Post-Conditions: room choice is returned to main
 *********************************************************************/
int Divination::roomChoice()
{
    int choice;
    
    cout << "Where would you like to go?\n";
    cout << "Enter 1 to go to the Main Staircase.\n";
    cout << "Enter 2 to go to the a Great Hall.\n";
    cout << "Enter 3 to go to the kitchen.\n";
    cout << "Enter any other number to go to the small staircase.\n";
    
    cin >> choice;
    cout << endl;
    
    if(choice == 1)
    {
        return 1;
    }
    else if(choice == 2)
    {
        return 2;
    }
    else if(choice == 3)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}

/*********************************************************************
 ** Function: void deadEnd()
 ** Description: prints statement indicating room choice is a dead end
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the function
 ** Post-Conditions: none
 *********************************************************************/
void Divination::deadEnd()
{
    cout << "Hmmm, where this staircase lea - WHOA! It's moving! Probably shouldn't go that way. Pick a different option.\n";
    cout << endl;
}
/*********************************************************************
 ** Program Filename: greatHall.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class GreatHall
 ** Input: none
 ** Output: class GreatHall functions
 *********************************************************************/

#include "greatHall.hpp"
#include <iostream>
using namespace std;

GreatHall::GreatHall()
{
    setRoomName("Great Hall");
}

GreatHall::~GreatHall(){}

/*********************************************************************
 ** Function: void special()
 ** Description: special function that requires a task to be completed before moving on
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the funciton
 ** Post-Conditions: none
 *********************************************************************/
void GreatHall::special()
{
    int spell;
    
    cout << endl;
    cout << "It's kind of creepy in the Great Hall when it's dark. Let's light the candles, that'll make it better.\n";
    cout << "Enter 1 to light the candles.\n";
    
    cin >> spell;
    cout << endl;
    
    for(;;)
    {
        if(spell == 1)
        {
            cout << "Much better!\n";
            cout << endl;
            break;
        }
        else
        {
            cout << "That didn't work!\n";
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
int GreatHall::roomChoice()
{
    int choice;
    
    cout << "Where would you like to go?\n";
    cout << "Enter 1 to go to the Main Staircase.\n";
    cout << "Enter 2 to go to the divination classroom.\n";
    cout << "Enter 3 to go to the kitchen. Mmmmm something smells good in there...\n";
    cout << "Enter any other number to go to the quidditch pitch.\n";
    
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
void GreatHall::deadEnd()
{
    cout << "Wait, you don't want to go to the quidditch pitch! You don't have your broom!\n";
    cout << "Make another choice.\n";
    cout << endl;
}
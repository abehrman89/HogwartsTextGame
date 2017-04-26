/*********************************************************************
 ** Program Filename: mainStaircase.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class MainStaircase
 ** Input: none
 ** Output: class MainStaircase functions
 *********************************************************************/

#include "mainStaircase.hpp"
#include <iostream>
using namespace std;

MainStaircase::MainStaircase()
{
    setRoomName("Main Staircase");
}

MainStaircase::~MainStaircase(){}

/*********************************************************************
 ** Function: void special()
 ** Description: special function that requires a task to be completed before moving on
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the funciton
 ** Post-Conditions: none
 *********************************************************************/
void MainStaircase::special()
{
    int spell;
    
    cout << endl;
    cout << "Wait...is that a DEMENTOR??? What is one of those doing at Hogwarts?! Oh no, what's that spell to get rid of it...expecto..expecto...\n";
    cout << "...did that dementor just trip? Dementors don't trip, do they? They sort of just glide and...wait!! It's not a dementor, it's a boggart!\n";
    cout << "Quick, think of the funniest thing you can! Got it? Good!\n";
    cout << "Now enter 1 to point your wand and cast the spell!\n";
    
    cin >> spell;
    cout << endl;
    
    for(;;)
    {
        if (spell == 1)
        {
            cout << "Riddikulus!\n";
            cout << "Well done! The boggart is gone! Now to continue on your way.\n";
            cout << endl;
            break;
        }
        else
        {
            cout << "Oh no it didn't work!\n";
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
int MainStaircase::roomChoice()
{
    int choice;
    
    cout << "Where would you like to go?\n";
    cout << "Enter 1 to go to the Great Hall.\n";
    cout << "Enter 2 to go to the divination classroom.\n";
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
    else
    {
        return 3;
    }
}

/*********************************************************************
 ** Function: void deadEnd()
 ** Description: prints statement indicating room choice is a dead end
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the function
 ** Post-Conditions: none
 *********************************************************************/
void MainStaircase::deadEnd()
{
    cout << "Wait, you don't want to go to the quidditch pitch! You don't have your broom!\n";
    cout << "Make another choice.\n";
    cout << endl;
}
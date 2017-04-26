/*********************************************************************
 ** Program Filename: kitchen.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class Kitchen
 ** Input: none
 ** Output: class Kitchen functions
 *********************************************************************/

#include "kitchen.hpp"
#include <iostream>
using namespace std;

Kitchen::Kitchen()
{
    setRoomName("Kitchen");
}

Kitchen::~Kitchen(){}

/*********************************************************************
 ** Function: void special()
 ** Description: special function that requires a task to be completed before moving on
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the funciton
 ** Post-Conditions: none
 *********************************************************************/
void Kitchen::special()
{
    int spell;
    
    cout << endl;
    cout << "Oh the kitchens! Maybe there's some food leftover from lunch...\n";
    cout << "What's this? Oh no the house elves can't get their fires started so they can't cook anything!\n";
    cout << "You can help with that!\n";
    cout << "Enter 1 to cast your spell and light the fires.\n";
    
    cin >> spell;
    cout << endl;
    
    for(;;)
    {
        if(spell == 1)
        {
            cout << "Incendio!\n";
            cout << "Great job! Now the house elves can get back to cooking.\n";
            cout << endl;
            break;
        }
        else
        {
            cout << "It didn't work! Did I get the spell wrong? No I'm sure that's the right one. I'll try again.\n";
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
int Kitchen::roomChoice()
{
    int choice;
    
    cout << "Where would you like to go?\n";
    cout << "Enter 1 to go to the Great Hall.\n";
    cout << "Enter 2 to go to the divination classroom.\n";
    cout << "Enter 3 to go to the library. Maybe there's another passageway behind all those books...\n";
    cout << "Enter any other number to go to the locked door.\n";
    
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
void Kitchen::deadEnd()
{
    cout << "Hmm let's try that door. Oh it's locked - but there's a spell to open it.\n";
    cout << "Alohamora!\n";
    cout << "Wait why didn't that work? It - wait where did the doorknob go? Oh this isn't a real door is it? Haha walls very funny.\n";
    cout << "Pick a different route.\n";
    cout << endl;
}
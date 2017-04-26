/*********************************************************************
 ** Program Filename: secretPassageway.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class SecretPassageway
 ** Input: none
 ** Output: class SecretPassageway functions
 *********************************************************************/

#include "secretPassageway.hpp"
#include <iostream>
using namespace std;

SecretPassageway::SecretPassageway()
{
    setRoomName("Secret Passageway");
}

SecretPassageway::~SecretPassageway(){}

/*********************************************************************
 ** Function: void special()
 ** Description: special function that requires a task to be completed before moving on
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the funciton
 ** Post-Conditions: none
 *********************************************************************/
void SecretPassageway::special()
{
    int spell;
    
    cout << endl;
    cout << "Wow it's really dark in here. Cast some light to make it easier to see.\n";
    cout << "Enter 1 to cast your spell.\n";
    
    cin >> spell;
    cout << endl;
    
    for(;;)
    {
        if(spell == 1)
        {
            cout << "Lumos! Ah much better. Now I can see where I'm going.\n";
            cout << endl;
            break;
        }
        else
        {
            cout << "Oh what was that spell? Hmm let's try this again.\n";
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
int SecretPassageway::roomChoice()
{
    int choice;
    
    cout << "Where would you like to go?\n";
    cout << "Enter 1 to go to the library.\n";
    cout << "Enter 2 to go to the the transfiguration classroom.\n";
    cout << "Enter 3 to go to the Gryffindor dormitory.\n";
    cout << "Enter any other number to go to the room of requirement.\n";
    
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
void SecretPassageway::deadEnd()
{
    cout << "To get into the Room of Requirement all you have to do is walk back and forth and think about what you need...\n";
    cout << "Where is it? This should be working. Maybe the broomstick is too close that the Room isn't needed?\n";
    cout << "Let's pick a different route and see where it goes.\n";
    cout << endl;
}
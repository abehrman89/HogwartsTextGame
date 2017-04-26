/*********************************************************************
 ** Program Filename: dormitory.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class Dormitory
 ** Input: none
 ** Output: class Dormitory functions
 *********************************************************************/

#include "dormitory.hpp"
#include <iostream>
using namespace std;

Dormitory::Dormitory()
{
    setRoomName("Gryffindor Dormitory");
}

Dormitory::~Dormitory(){}

/*********************************************************************
 ** Function: void special()
 ** Description: special function that requires a task to be completed before moving on
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the funciton
 ** Post-Conditions: none
 *********************************************************************/
void Dormitory::special()
{
    int pull;
    
    cout << endl;
    cout << "Finally here! No where could my broomstick be?\n";
    cout << "Hmmm, is it on my bed?\n";
    cout << "Enter 1 to pull back the bed curtains and check for your broomstick.\n";
    
    cin >> pull;
    cout << endl;
    
    for(;;)
    {
        if(pull == 1)
        {
            cout << "There it is!\n";
            cout << "Hurry and get back to the main staircase!\n";
            cout << endl;
            break;
        }
        else
        {
            cout << "Ouch! Why did you just fall over there? What is around your foo - Oh! The invisibility cloak! Must have forgotten to put that away.\n";
            cout << "Enter 1 to pull back the bed curtains and check for your broomstick.\n";
            cin >> pull;
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
int Dormitory::roomChoice()
{
    int choice;
    
    cout << "Where would you like to go?\n";
    cout << "Enter 1 to go to the transfiguration classroom.\n";
    cout << "Enter 2 to go to the the secret passageway.\n";
    cout << "Enter 3 to use the Floo Powder by the fireplace.\n";
    
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
void Dormitory::deadEnd()
{
    cout << "That Floo Powder is around here somewhere. Where is it?\n";
    cout << "Oh this is taking too long, just pick a different route back.\n";
    cout << endl;
}
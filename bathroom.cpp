/*********************************************************************
 ** Program Filename: bathroom.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class Bathroom
 ** Input: none
 ** Output: class Bathroom functions
 *********************************************************************/

#include "bathroom.hpp"
#include <iostream>
using namespace std;

Bathroom::Bathroom()
{
    setRoomName("Bathroom");
}

Bathroom::~Bathroom(){}

/*********************************************************************
 ** Function: void special()
 ** Description: special function that requires a task to be completed before moving on
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the funciton
 ** Post-Conditions: none
 *********************************************************************/
void Bathroom::special()
{
    int spell;
    
    cout << endl;
    cout << "Wait...wasn't this the kitchen before? Everything in this castle keeps changing!\n";
    cout << endl;
    cout << "What's that? Oh no, Moaning Myrtle. Better get out of here before she - Oh hi Myrtle! Everything ok?\n";
    cout << "Moaning Myrtle: No! Someone was trying to get rid of a book so they threw it in the toilet and it went right through me!\n";
    cout << "But, Myrtle, it just went right through you didn't it? It didn't hurt or anything, right?\n";
    cout << "Moaning Myrtle: Oh of course! Who would care about poor Moaning Myrtle!\n";
    cout << "No Myrtle that's - UHGH!\n";
    cout << endl;
    cout << "Myrtle dove back into the toilet, splashing you with water. Better dry this off before you continue.\n";
    cout << "Enter 1 to cast the hot air charm to dry off your clothes.\n";
    
    cin >> spell;
    cout << endl;
    
    for(;;)
    {
        if(spell == 1)
        {
            cout << "Well done! All dry and ready to continue.\n";
            cout << endl;
            break;
        }
        else
        {
            cout << "Nope, still wet. Try again.\n";
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
int Bathroom::roomChoice()
{
    int choice;
    
    cout << "Where would you like to go?\n";
    cout << "Enter 1 to go to the Great Hall.\n";
    cout << "Enter 2 to go to the transfiguration classroom.\n";
    cout << "Enter 3 to go to the library.\n";
    cout << "Enter any other number to go to the chamber of secrets.\n";
    
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
void Bathroom::deadEnd()
{
    cout << "How did this open last time? Oh who knows. And is there really time to deal with all that mess down there?\n";
    cout << "Go a different way.\n";
    cout << endl;
}
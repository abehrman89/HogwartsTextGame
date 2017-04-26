/*********************************************************************
 ** Program Filename: library.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class Library
 ** Input: none
 ** Output: class Library functions
 *********************************************************************/

#include "library.hpp"
#include <iostream>
using namespace std;

Library::Library()
{
    setRoomName("Library");
}

Library::~Library(){}

/*********************************************************************
 ** Function: void special()
 ** Description: special function that requires a task to be completed before moving on
 ** Parameters: none
 ** Pre-Conditions: Space *object exists and calls the funciton
 ** Post-Conditions: none
 *********************************************************************/
void Library::special()
{
    int spell;
    
    cout << endl;
    cout << "Better be quiet in the Library, don't want Madam Pince to come swooping in can yelling about all the noise and...\n";
    cout << "CRASH!!\n";
    cout << "What the? On no! Peeves! Why did you know over all those books? Peeves! No come back here I -\n";
    cout << endl;
    cout << "Madam Pince: WHAT HAVE YOU DONE? YOU CLEAN THIS UP RIGHT NOW!\n";
    cout << "No, Madam Pince it was Peeves! Not -\n";
    cout << endl;
    cout << "Madam Pince: I don't see Peeves anywhere, do you? No! Only you! 20 points will be deducted from Gryffindor! Now clean this up!\n";
    cout << "No use arguing, might as well clean all this up. I wonder if I can lift all the books at once? Let's try it.\n";
    cout << "Now remember, it's LeviOsa, not LevioSAR.\n";
    cout << "Enter 1 to cast your spell.\n";
    
    cin >> spell;
    cout << endl;

    for(;;)
    {
        if(spell == 1)
        {
            cout << "Wingardium Leviosa! Hey! It worked!\n";
            cout << "Madam Pince: Now get out of the library!\n";
            cout << endl;
            break;
        }
        else
        {
            cout << "Madam Pince: That didn't work! Are you going to clean this up or not?\n";
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
int Library::roomChoice()
{
    int choice;
    
    cout << "Where would you like to go?\n";
    cout << "Enter 1 to go to the kitchen.\n";
    cout << "Enter 2 to go to the the transfiguration classroom.\n";
    cout << "Enter 3 to go to the... hey! A secret passageway!\n";
    cout << "Enter any other number to go to the restricted section.\n";
    
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
void Library::deadEnd()
{
    cout << "Maybe there's another way out through the restricted section. Let's just take a quick look while Madam Pince is over there...\n";
    cout << "oh no Filch's cat Mrs. Norris! Shoo! Go away!\n";
    cout << "No not that way! Not to Madam Pince! Shoot let's should get out of here before Mrs. Norris alerts Madam Pince.\n";
    cout << "Pick a different path.\n";
    cout << endl;
}
/*********************************************************************
 ** Program Filename: main.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: main function for game
 ** Input: all base and derived classes
 ** Output: game
 *********************************************************************/

#include <iostream>
#include "hogwarts.hpp"
#include "mainStaircase.hpp"
#include "greatHall.hpp"
#include "kitchen.hpp"
#include "bathroom.hpp"
#include "library.hpp"
#include "divination.hpp"
#include "transfiguration.hpp"
#include "secretPassageway.hpp"
#include "dormitory.hpp"

int main()
{

    //create room pointers to objects
    Hogwarts *room1 = new MainStaircase();
    Hogwarts *room2 = new GreatHall();
    Hogwarts *room3 = new Divination();
    Hogwarts *room4 = new Kitchen();
    Hogwarts *room5 = new Library();
    Hogwarts *room6 = new Transfiguration();
    Hogwarts *room7 = new SecretPassageway();
    Hogwarts *room8 = new Dormitory();

    //assign pointers to link objects
    room1->setDir_one(room2);
    room1->setDir_two(room3);
    
    room2->setDir_one(room1);
    room2->setDir_two(room3);
    room2->setDir_three(room4);
    
    room3->setDir_one(room1);
    room3->setDir_two(room2);
    room3->setDir_three(room4);
    
    room4->setDir_one(room2);
    room4->setDir_two(room3);
    room4->setDir_three(room5);
    
    room5->setDir_one(room4);
    room5->setDir_two(room6);
    room5->setDir_three(room7);
    
    room6->setDir_one(room5);
    room6->setDir_two(room7);
    room6->setDir_three(room8);
    
    room7->setDir_one(room5);
    room7->setDir_two(room6);
    room7->setDir_three(room8);
    
    room8->setDir_one(room6);
    room8->setDir_two(room7);
    
    //menu to play game or reveal game goal/strategy
    int select;
    cout << "Welcome to Hogwarts!\n";
    cout << "Enter 1 to reveal the game goal and strategy.\n";
    cout << "Enter any other number to skip this part.\n";
    cin >> select;
    if(select == 1)
    {
        cout << "The player is Harry Potter. You need to make it from the main staircase to the gryffindor common room,\n";
        cout << "pick up your broomstick, and make it back to the main staircase in 15 turns or less in order to win the game.\n";
        cout << endl;
        cout << "The most direct route is:\n";
        cout << "Main Staircase - Great Hall - Kitchen (becomes the bathroom on the way back) - Library - Secret Passageway - Dormitory,\n";
        cout << "And then the reverse on the way back.";
        cout << endl;
    }
    
    int play;
    cout << "Enter any number to continue and play the game.\n";
    cin >> play;
    
    cout << endl;
    //track number of moves
    int timer = 0;
    
    bool gameOver = false;
    
    string broomstick;
    
    //array to hold broomstick
    string array[5];
    for(int i = 0; i < 5; i++)
    {
        array[i] = '\0';
    }
    
    cout << endl;
    cout << "Oliver Wood: Glad to see everyone made it to the meeting before today's quidditch match! We're playing Slytherin, so everyone be on your guard for dirty tricks and games.\n";
    cout << "We all know what they're capable of. Ok everyone ready? Great let's g-\n";
    cout << "Uh Harry? Where's your broomstick?\n";
    cout << endl;
    cout << "Oh no! You forgot to bring your broomstick! It's been really hard to remember anything lately, ever since that unfortunate accident in potion's class...\n";
    cout << "Although at least you didn't end up in the hospital wing like Ron with those unfortunate boils. Madam Pomfrey still hasn't managed to get rid of them.\n";
    cout << endl;
    cout << "Oliver Wood: Harry the game starts in 15 minutes! Go find your broom! Hurry!\n";
    cout << endl;
    cout << "Ok let's think. It's probably in your dormitory. Yeah you were cleaning it last night, it's probably still up there! But how do you get there?";
    cout << "Let's start at the main staircase.\n";
    cout << endl;
    
    
    //pointer to keep track of player location
    Hogwarts *location = room1;
    location->special();
    
    //game
    //call roomChoice
    //exect program depending on what roomChoice returns
    while(!gameOver)
    {
        int choice = location->roomChoice();
        
        //if player is in the main staircase and does not have the broomstick yet
        if(location == room1 && array[1] != broomstick)
        {
            if(choice == 1)
            {
                location = location->getDir_one();
                location->special();
            }
            else if(choice == 2)
            {
                location = location->getDir_two();
                location->special();
            }
            else
            {
                location->deadEnd();
            }
        }
        //if the player is in the gryffindor dormitory
        else if(location == room8)
        {
            array[1] = broomstick;
            
            if(choice == 1)
            {
                location = location->getDir_one();
                location->special();
            }
            else if(choice == 2)
            {
                location = location->getDir_two();
                location->special();
            }
            else
            {
                location->deadEnd();
            }
        }
        //if the player is in the library and has the broomstick - delete kitchen space and add bathroom space
        else if(location == room5 && array[1] == broomstick)
        {
            delete room4;
            room4 = new Bathroom();
            room4->setDir_one(room2);
            room4->setDir_two(room3);
            room4->setDir_three(room5);
            
            if(choice == 1)
            {
                location = location->getDir_one();
                location->special();
            }
            else if(choice == 2)
            {
                location = location->getDir_two();
                location->special();
            }
            else if(choice == 3)
            {
                location = location->getDir_three();
                location->special();
            }
            else
            {
                location->deadEnd();
            }
        }
        //all other rooms
        else
        {
            if(choice == 1)
            {
                location = location->getDir_one();
                location->special();
            }
            else if(choice == 2)
            {
                location = location->getDir_two();
                location->special();
            }
            else if(choice == 3)
            {
                location = location->getDir_three();
                location->special();
            }
            else
            {
                location->deadEnd();
            }
        }
        
        //if player is in the main staircase and has the broomstick, game is over
        if(location == room1 && array[1] == broomstick)
        {
            cout << "Oliver Wood: Harry you made it back! Just in time! Alright everyone, let's go!\n";
            gameOver = true;
            break;
        }
        
        timer++;
        //if the timer reaches 15 and the player is not back in the main staircase with the broomstick, game is over
        if(timer == 15)
        {
            cout << "Oh no time ran out! The quidditch match started!\n";
            cout << "Gryffindor is going to have to play without you. They're gonna get creamed, everyone's going to be so mad!\n";
            cout << "Maybe it would have been better if you'd ended up in the hospital wing with Ron...\n";
            gameOver = true;
        }
        cout << endl;
    }
    
    return 0;
}

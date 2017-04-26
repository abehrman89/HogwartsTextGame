/*********************************************************************
 ** Program Filename: hogwarts.cpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function defintions for class Hogwarts
 ** Input: none
 ** Output: class Hogwarts functions
 *********************************************************************/

#include "hogwarts.hpp"
#include <iostream>
using namespace std;

Hogwarts::Hogwarts()
{
    setDir_one(NULL);
    setDir_two(NULL);
    setDir_three(NULL);
    setDir_four(NULL);
    setRoomName(" ");
}

Hogwarts::~Hogwarts(){}

void Hogwarts::setDir_one(Hogwarts *object)
{
    dir_one = object;
}

void Hogwarts::setDir_two(Hogwarts *object)
{
    dir_two = object;
}

void Hogwarts::setDir_three(Hogwarts *object)
{
    dir_three = object;
}

void Hogwarts::setDir_four(Hogwarts *object)
{
    dir_four = object;
}

void Hogwarts::setRoomName(string theName)
{
    roomName = theName;
}

Hogwarts* Hogwarts::getDir_one()
{
    return dir_one;
}

Hogwarts* Hogwarts::getDir_two()
{
    return dir_two;
}

Hogwarts* Hogwarts::getDir_three()
{
    return dir_three;
}

Hogwarts* Hogwarts::getDir_four()
{
    return dir_four;
}

string Hogwarts::getRoomName()
{
    return roomName;
}
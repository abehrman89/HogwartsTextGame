/*********************************************************************
 ** Program Filename: hogwarts.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class Hogwarts
 ** Input: none
 ** Output: class Hogwarts member functions
 *********************************************************************/

#ifndef hogwarts_hpp
#define hogwarts_hpp

#include <iostream>
using namespace std;

class Hogwarts
{

protected:
    Hogwarts *dir_one;
    Hogwarts *dir_two;
    Hogwarts *dir_three;
    Hogwarts *dir_four;
    
    string roomName;
    
public:
    Hogwarts();
    virtual ~Hogwarts();
    
    void setDir_one(Hogwarts*);
    void setDir_two(Hogwarts*);
    void setDir_three(Hogwarts*);
    void setDir_four(Hogwarts*);
    void setRoomName(string);
    
    Hogwarts* getDir_one();
    Hogwarts* getDir_two();
    Hogwarts* getDir_three();
    Hogwarts* getDir_four();
    string getRoomName();
    
    virtual void special() = 0;
    virtual int roomChoice() = 0;
    virtual void deadEnd() = 0;

};

#endif

/*********************************************************************
 ** Program Filename: mainStaircase.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class MainStaircase
 ** Input: none
 ** Output: class MainStaircase member functions
 *********************************************************************/

#ifndef mainStaircase_hpp
#define mainStaircase_hpp

#include <iostream>
#include "hogwarts.hpp"

class MainStaircase : public Hogwarts
{

public:
    MainStaircase();
    virtual ~MainStaircase();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();

};

#endif /* mainStaircase_hpp */

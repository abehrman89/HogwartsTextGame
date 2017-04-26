/*********************************************************************
 ** Program Filename: greatHall.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class GreatHall
 ** Input: none
 ** Output: class GreatHall member functions
 *********************************************************************/

#ifndef greatHall_hpp
#define greatHall_hpp

#include <iostream>
#include "hogwarts.hpp"

class GreatHall : public Hogwarts
{

public:
    GreatHall();
    virtual ~GreatHall();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();

};

#endif /* greatHall_hpp */

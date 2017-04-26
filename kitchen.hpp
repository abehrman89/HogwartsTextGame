/*********************************************************************
 ** Program Filename: kitchen.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class Kitchen
 ** Input: none
 ** Output: class Kitchen member functions
 *********************************************************************/

#ifndef kitchen_hpp
#define kitchen_hpp

#include <iostream>
#include "hogwarts.hpp"

class Kitchen : public Hogwarts
{
    
public:
    Kitchen();
    virtual ~Kitchen();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();
};


#endif /* kitchen_hpp */

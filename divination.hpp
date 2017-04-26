/*********************************************************************
 ** Program Filename: divination.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class Divination
 ** Input: none
 ** Output: class Divination member functions
 *********************************************************************/

#ifndef divination_hpp
#define divination_hpp

#include <iostream>
#include "hogwarts.hpp"

class Divination : public Hogwarts
{
    
public:
    Divination();
    virtual ~Divination();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();
    
};

#endif /* divination_hpp */

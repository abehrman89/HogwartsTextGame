/*********************************************************************
 ** Program Filename: transfiguration.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class Transfiguration
 ** Input: none
 ** Output: class Transfiguration member functions
 *********************************************************************/

#ifndef classroom_hpp
#define classroom_hpp

#include <iostream>
#include "hogwarts.hpp"

class Transfiguration : public Hogwarts
{
    
public:
    Transfiguration();
    virtual ~Transfiguration();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();
    
};

#endif /* classroom_hpp */

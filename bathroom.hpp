/*********************************************************************
 ** Program Filename: bathroom.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class Bathroom
 ** Input: none
 ** Output: class Bathroom member functions
 *********************************************************************/

#ifndef bathroom_hpp
#define bathroom_hpp

#include <iostream>
#include "hogwarts.hpp"

class Bathroom : public Hogwarts
{
    
public:
    Bathroom();
    virtual ~Bathroom();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();
    
};

#endif /* bathroom_hpp */

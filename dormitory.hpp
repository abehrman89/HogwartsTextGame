/*********************************************************************
 ** Program Filename: dormitory.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class Dormitory
 ** Input: none
 ** Output: class Dormitory member functions
 *********************************************************************/

#ifndef dormitory_hpp
#define dormitory_hpp

#include <iostream>
#include "hogwarts.hpp"

class Dormitory : public Hogwarts
{
    
public:
    Dormitory();
    virtual ~Dormitory();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();
    
};
#endif /* dormitory_hpp */

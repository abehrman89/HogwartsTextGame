/*********************************************************************
 ** Program Filename: library.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class Library
 ** Input: none
 ** Output: class Library member functions
 *********************************************************************/

#ifndef library_hpp
#define library_hpp

#include <iostream>
#include "hogwarts.hpp"

class Library : public Hogwarts
{
    
public:
    Library();
    virtual ~Library();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();
    
};

#endif /* library_hpp */

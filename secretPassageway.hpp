/*********************************************************************
 ** Program Filename: secretPassageway.hpp
 ** Author: Alexandra Behrman
 ** Date: 8/7/16
 ** Description: function declarations for class SecretPassageway
 ** Input: none
 ** Output: class SecretPassageway member functions
 *********************************************************************/

#ifndef secretPassageway_hpp
#define secretPassageway_hpp

#include <iostream>
#include "hogwarts.hpp"

class SecretPassageway : public Hogwarts
{
    
public:
    SecretPassageway();
    virtual ~SecretPassageway();
    virtual void special();
    virtual int roomChoice();
    virtual void deadEnd();
    
};

#endif /* secretPassageway_hpp */

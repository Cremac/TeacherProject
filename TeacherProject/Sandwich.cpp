//
//  Sandwich.cpp
//  TeacherProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "Sandwich.h"


//Constructor

Sandwich :: Sandwich()
{
    this->breadCount = 3;
    this->filling = "Egg Salad and Chopped Ham";
    this->name = "Ribbon";
}

//end Constructors

Sandwich :: ~Sandwich()
{
    //Delete all instances of new memory.
}

int Sandwich :: getBreadCount()
{
    return breadCount;
}

void Sandwich :: setBreadCount(int breadCount)
{
    this->breadCount = breadCount;

}
string Sandwich :: getFilling()
{
    return filling;
}

void Sandwich :: setFilling(string filling)
{
    this->filling = filling;
    
}
string Sandwich :: getName()
{
    return name;
}

void Sandwich :: setName(string name)
{
    this->name = name;
    
}
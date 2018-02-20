/*
 * Boy.cpp
 *
 *  Created on: Feb 20, 2018
 *      Author: jpetterson
 */

#include "Boy.h"
#include <iostream>
using namespace std;

Boy::Boy()
    {
    cout << "Energize" << endl;
    
    }

void Boy::sethairColor(string inputHairColor)
    {
    this->hairColor = inputHairColor;
    }

void Boy::setAge(int inputAge)
    {
    this->ageOld = inputAge;
    }

void Boy::speak()
    {
    cout << "This homie is " << ageOld << " yrs old and has " << hairColor
	    << " colored hair!" << endl;

    }

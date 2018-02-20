/*
 * Boy.h
 *
 *  Created on: Feb 20, 2018
 *      Author: jpetterson
 */
#include <iostream>
using namespace std;

#ifndef BOY_H_
#define BOY_H_

class Boy
    {
    private:
	string hairColor="Blonde";
	int ageOld= 0;

    public:
	Boy();
	void sethairColor(string inputHairColor);
	void setAge(int inputAge);
	void speak();
    };

#endif /* BOY_H_ */

//============================================================================
// Name        : Copy_Constructors_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Boy.h"
using namespace std;

int main()
    {

    //define class, 2 fields,

    cout << "Here we go!" << endl;
    Boy oG;				// 0 yrs, Blonde

    Boy boy1;
    boy1.sethairColor("Brown");		// change to Brown hair
    boy1.setAge(18);			// change to 18 yrs


    Boy boy2 = boy1;
    boy2.setAge(100);			// change to 100 yrs

    Boy boy3(boy2);
    boy3.sethairColor("Blue");		// change to Blue



    oG.speak();
    boy1.speak();
    boy2.speak();
    boy3.speak();


    return 0;
    }

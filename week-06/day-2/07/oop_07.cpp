//
//  oop_07.cpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include "oop_07.hpp"
#include <iostream>
#include <string>

using namespace std;

void Pirate::drink_rum(){
    rum_counter++;
}

void Pirate::hows_goin_mate(){
    if(rum_counter >= 5)
        cout << "Arrrr!" << endl;
    else
        cout << "Nothin'" << endl;
}

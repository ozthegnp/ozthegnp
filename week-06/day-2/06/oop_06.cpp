//
//  oop_06.cpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include "opp_06.hpp"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string type, int odometer){
    this->type = type;
    this->odometer = odometer;
}
int Car::run(int add_km){
    odometer += add_km;
    return odometer;
}

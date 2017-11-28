//
//  opp_03.cpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include "opp_03.hpp"
#include <iostream>
#include <string>

using namespace std;
Student::Student(string name, unsigned int age) {
    this->age = age;
    this->name = name;
}

void Student::greet(){
    cout << "Hello, my name is " << name << endl;
}

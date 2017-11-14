//
//  oop_06.hpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#ifndef oop_06_hpp
#define oop_06_hpp

#include <iostream>
#include <string>

using namespace std;

class Car{
    string type;
    int odometer;
public:
    Car(string type, int odometer);
    int run(int add_km);
};

#endif /* oop_06_hpp */

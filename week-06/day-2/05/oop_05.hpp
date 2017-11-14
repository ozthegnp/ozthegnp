//
//  oop_05.hpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#ifndef oop_05_hpp
#define oop_05_hpp

#include <iostream>
#include <string>

using namespace std;

class Circle {
private:
    double rad;
public:
    Circle(double rad);
    double get_circum();
    double get_area();
};

#endif /* oop_05_hpp */

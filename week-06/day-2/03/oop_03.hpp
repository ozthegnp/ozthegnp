//
//  opp_03.hpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#ifndef opp_03_hpp
#define opp_03_hpp

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age);
    void greet();
};

#endif /* opp_03_hpp */

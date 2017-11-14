//
//  oop_08.hpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#ifndef oop_08_hpp
#define oop_08_hpp

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Student{
private:
    vector<int> grades_v;
    int sum;
public:
    void add_grade(int grade);
    double get_avarage();
};

#endif /* oop_08_hpp */

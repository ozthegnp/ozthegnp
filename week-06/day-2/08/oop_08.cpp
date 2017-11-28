//
//  oop_08.cpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include "oop_08.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

void Student::add_grade(int grade){
    if(grade > 0 && grade < 6){
        grades_v.push_back(grade);
        sum += grade;
    }else {
        cout << "invalid input" << endl;
    }
}

double Student::get_avarage(){
    return (double) sum / grades_v.size();
}

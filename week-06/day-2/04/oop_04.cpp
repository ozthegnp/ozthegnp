//
//  oop_04.cpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include "oop_04.hpp"
#include <iostream>
#include <string>

using namespace std;

House::House(string address, int area){
    price = 400 * area;
}

unsigned int House::get_price() {
    return price;
}

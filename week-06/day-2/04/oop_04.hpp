//
//  oop_04.hpp
//  cpp_playground
//
//  Created by Oz on 11/14/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#ifndef oop_04_hpp
#define oop_04_hpp

#include <iostream>
#include <string>

using namespace std;

class House {
private:
    string address;
    unsigned int area;
    unsigned int price;
public:
    House(string address, int area);
    unsigned int get_price();
};
#endif /* oop_04_hpp */

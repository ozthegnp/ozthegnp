//
//  commands.hpp
//  cpp_todo_app
//
//  Created by Oz on 11/16/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#ifndef commands_hpp
#define commands_hpp
#include "todo.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

class Function_class: public Todo_app_class{
protected:
    void function_validity_checker(){
        if(user_input == "-a"){
            cout << "you want to add!" << endl;
        }
    }
};


#endif /* commands_hpp */

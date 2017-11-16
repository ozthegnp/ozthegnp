//
//  todo.hpp
//  cpp_todo_app
//
//  Created by Oz on 11/16/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#ifndef todo_hpp
#define todo_hpp

#include <stdio.h>
#include <iostream>


using namespace std;

class Todo_app_class{
private:
    typedef struct task_struct{
        string task;
        int priority;
        bool completed;
    }Task_s;
    
    void goodbye_screen();
    void command_input();
    void clear_screen();
    void print_usage();
    
protected:
    string user_input;
    string command;
    string task;
    string priority;
public:
    Todo_app_class(){ //starts prg with print usage and input 
        print_usage();
        command_input();
    }
    ~Todo_app_class(){
        goodbye_screen();
    }
};
#endif /* todo_hpp */

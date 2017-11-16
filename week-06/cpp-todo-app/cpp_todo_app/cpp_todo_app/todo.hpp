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
#include <vector>

using namespace std;

class Todo_app_class{
private:
    void command_splitter(string user_input);
    void add_task_function();
    
protected:
    struct task_struct{
        string description;
        int priority;
        bool completed;
    };
    
    string user_input;
    size_t comma_count = 0;
    string command;
    string task;
    string priority;
    vector<task_struct> task_vector;
    
    void clear_screen();

public:
    Todo_app_class(){ //starts prg with print usage and input
    }
    ~Todo_app_class(){
    }
    void goodbye_screen();
    void input_command();
    void print_usage();
    void task_executer(string command, string task, string priority);
    void print_tasks();
};


#endif /* todo_hpp */

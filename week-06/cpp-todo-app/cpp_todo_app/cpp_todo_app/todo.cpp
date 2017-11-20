//
//  todo.cpp
//  cpp_todo_app
//
//  Created by Oz on 11/16/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include "todo.hpp"

#include <sstream>

void Todo_app_class::input_command(){
    
    while(command != "exit"){
        cout << "Your wish is my command: ";
        getline(cin, user_input);
        comma_count = count(user_input.begin(), user_input.end(), '"');
        command_splitter(user_input);
        task_executer(command, task, priority);
    }
}
void Todo_app_class::command_splitter(string user_input){
    
    size_t pos = user_input.find(' ');//looks for char
    
    command = user_input.substr(0, pos);//fills up string until char
    
    user_input.erase(0, pos + 2); // deletes everythin befor char in original string
    pos = user_input.find('"'); //looks for new char
    
    task = user_input.substr(0, pos);//fills up task string with other info
    
    user_input.erase(0, pos + 2);
    
    
}

void Todo_app_class::task_executer(string command, string task, string priority){
    if(command == "-a"){
        add_task_function();
    } else if(command == "-wr"){
        cout << "you want to write" << endl;
        
    } else if(command == "-rd"){
        cout << "you want to read" << endl;
        
    } else if(command == "-l"){
        print_tasks();

    } else if(command == "-e"){
        cout << "you want to empty" << endl;
        
    } else if(command == "-rm"){
        cout << "you want to remove" << endl;
        
    } else if(command == "-c"){
        cout << "you want to complete" << endl;
        
    } else if(command == "-p"){
        cout << "you want to add priority" << endl;
        
    } else if(command == "-lp"){
        cout << "you want to list by priority" << endl;
        
    } else if(command == "exit"){
    } else{
        cout << "invalid command" << endl;
    }
}
void Todo_app_class::add_task_function(){
    if(comma_count == 2){
        if(priority != ""){
            struct task_struct temp_struct = {task, stoi(priority), 0};
            task_vector.push_back(temp_struct);
        }else{
            struct task_struct temp_struct = {task, 0, 0};
            task_vector.push_back(temp_struct);
        }
        cout << "task '"<< task <<"' added" << endl;
    }else{
        cout << "please insert task between two commas" << endl;
    }
    

}

void Todo_app_class::clear_screen(){
    cout << "screen supposed to clear here, but I have a freakin' mac...." << endl << endl;
}

void Todo_app_class::print_usage(){
    cout << "Todo application\n"
    "====================\n"
    "Commands:\n"
    "-a\tAdds a new task\n"
    "-wr\tWrite current todos to file\n"
    "-rd\tRead todos from a file\n"
    "-l\tLists all the tasks\n"
    "-e\tEmpty the list\n"
    "-rm\tRemoves a task\n"
    "-c\tCompletes a task\n"
    "-p\tAdd priority to a task\n"
    "-l\tLists all the tasks by priority\n\n\n";
}

void Todo_app_class::goodbye_screen(){
    cout << "Thank you for using this awesome todo app" << endl;
}

void Todo_app_class::print_tasks(){
    for(unsigned int i = 0; i < task_vector.size(); i++){
        cout << i + 1;
        if(task_vector[i].completed == 0){
            cout << " - [ ] ";
        }else{
            cout << " - [x] ";
        }
        cout << task_vector[i].description;
        
        if(task_vector[i].priority != 0){
            cout << " - " <<task_vector[i].priority;
        }
        cout << endl;
    }
}

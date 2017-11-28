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
    
    priority = user_input;
    
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
        delete_all_tasks();
        
    } else if(command == "-rm"){
        delete_task_function();
        
    } else if(command == "-c"){
        complete_task_function();
        
    } else if(command == "-p"){
        add_priority();
        
    } else if(command == "-lp"){
        list_priority();
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

void Todo_app_class::delete_task_function(){
    if(comma_count == 2){
        int a = stoi(task);
        
        if(a > task_vector.size() || a < 0){
            cout << "element does not exist" << endl;
            
        }else{
            task_vector.erase(task_vector.begin() + a - 1);
            cout << "task " << a << " deleted." << endl;
        }
    }else{
        cout << "please insert number between two commas" << endl;
    }
}

void Todo_app_class::complete_task_function(){
    if(comma_count == 2){
        int a = stoi(task);
        
        if(a > task_vector.size() || a < 0){
            cout << "element does not exist" << endl;
            
        }else{
            task_vector[a - 1].completed = true;
            cout << "task " << a << " completed." << endl;
        }
    }else{
        cout << "please insert number between two commas" << endl;
    }
}

void Todo_app_class::delete_all_tasks(){
    if( 0 < task_vector.size()){
        task_vector.clear();
        cout << "All tasks deleted" << endl;
    } else{
        cout << "task's already empty" << endl;
    }
}

void Todo_app_class::add_priority(){
    if(comma_count == 2){
        int position = stoi(task) - 1;

        
        if(position > task_vector.size() || position < 0){
            cout << "element does not exist" << endl;
            
        }else{
            task_vector[position].priority = stoi(priority);
            cout << task_vector[position].priority << " is added to " << task_vector[position].description << endl;
        }
    }else{
        cout << "please insert number between two commas" << endl;
    }
}

void Todo_app_class::list_priority(){
    bool flag = true;
    task_struct temp;
    
    while(flag){
        for(unsigned int i = 0; i < task_vector.size() - 1; ++i){
            flag = false;
            if(task_vector[i].priority > task_vector[i + 1].priority){
                temp = task_vector[i];
                task_vector[i] = task_vector[i + 1];
                task_vector[i + 1] = temp;
                flag = true;
            }
        }
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
    if (task_vector.size() != 0){
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
    } else{
        cout << "list is empty, good job!" << endl;
    }
}

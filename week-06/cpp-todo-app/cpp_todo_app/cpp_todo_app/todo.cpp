//
//  todo.cpp
//  cpp_todo_app
//
//  Created by Oz on 11/16/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include "todo.hpp"
#include <sstream>

void Todo_app_class::command_input(){
    
    while(command != "exit"){
        cout << "Your wish is my command: ";
        getline(cin, user_input);
        command_splitter(user_input);
        
        
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

void Todo_app_class::clear_screen(){
    cout << "screen supposed to clear here, but I have a freakin' mac...." << endl << endl;
}

void Todo_app_class::print_usage(){
    cout << "\n\n        CLI Calculator\n"
    "====================================\n"
    "usage: [number] [operation] [number]\n"
    "Commands:\n\n"
    " +    addition\n"
    " -    subtraction\n"
    " *    multiplication\n"
    " /    division\n"
    " %    division with remainder\n"
    " ^    power\n"
    " <    square root\n"
    " log    logarithm\n"
    " binto    binary to hex or dec\n"
    " hexto    hexadecimal to bin or dec\n"
    " decto    decimal to bin or hex\n"
    " ====================================\n"
    " exit    exiting from the program\n"
    " clear    clear the screen\n"
    " help    print usage\n"
    " ====================================\n"
    " Hit enter to start!\n"
    " ====================================\n";
    cin.get();
    clear_screen();
}

void Todo_app_class::goodbye_screen(){
    cout << "Thank you for using this awesome calculator" << endl;
}

//
//  main.cpp
//  cpp_todo_app
//
//  Created by Oz on 11/16/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;

void clear_screen(){
    cout << "screen supposed to clear here, but I have a freakin' mac...." << endl;
}
void print_usage(){
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

void command_input(){
    string command;
    string todo_text;
    cout << "provide input" << endl;
    getline(cin, command);
    cout << command << endl;
    cout << todo_text << endl;
}

class Todo_list_Class{
        
        string task
};
int main(int argc, const char * argv[]) {
    command_input();
    
    
    return 0;
}

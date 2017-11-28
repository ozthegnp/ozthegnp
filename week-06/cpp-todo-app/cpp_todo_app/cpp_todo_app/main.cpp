#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "todo.hpp"


using namespace std;


int main(int argc, const char * argv[]) {
    Todo_app_class ta;
    ta.print_usage();
    ta.input_command();
    ta.goodbye_screen();

    return 0;
}

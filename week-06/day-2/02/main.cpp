#include "opp_02.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create a new instace of the Student class and set it's name to "John" and
    // it's age to 21 with it's constructor

    Student ss("John", 21);

    cout << ss.name << " is "<< ss.age << "-years-old." << endl;

    return 0;
}

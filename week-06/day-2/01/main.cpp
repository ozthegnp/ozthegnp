#include <iostream>
#include <string>
#include "opp_01.hpp"

using namespace std;

int main() {
    // Create a new instance of the Student class and set it's name to "John" and
    // it's age to 21
    Student ss;
    ss.name = "John";
    ss.age = 21;

    cout << ss.name << " is " << ss.age << "-years-old" << endl;

    return 0;
}

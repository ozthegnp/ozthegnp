#include "oop_05.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

    Circle ci(5);//parameter gives radius

    cout << "Circum is: " << ci.get_circum() << endl;
    cout << "Area is: " << ci.get_area() << endl;


    return 0;
}

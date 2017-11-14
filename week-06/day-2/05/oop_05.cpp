#include "oop_05.hpp"
#include <iostream>
#include <string>

using namespace std;

Circle::Circle(double rad){
    this->rad = rad;
}
double Circle::get_circum(){
    return 2 * rad * 3.14;
}
double Circle::get_area(){
    return rad * rad * 3.14;
}

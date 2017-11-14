#include <iostream>
#include <string>

using namespace std;

class Circle {
private:
    double rad;
public:
    Circle(double rad){
        this->rad = rad;
    }
    double get_circum(){
        return 2 * rad * 3.14;
    }
    double get_area(){
        return rad * rad * 3.14;
    }
};
int main() {
    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

    Circle ci(5);

    cout << "Circum is: " << ci.get_circum() << endl;
    cout << "Area is: " << ci.get_area() << endl;


    return 0;
}

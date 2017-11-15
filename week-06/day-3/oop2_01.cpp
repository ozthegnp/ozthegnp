#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private method)

class Shape {
public:
    double width;
    double area;
};

class Circle: public Shape {
private:
    double calc_are(){
        return area = width * width / 4 * 3.14;
    }
public:
    void print_area(){
        cout << "The area of Circle is: " << calc_are() << endl;
    }

};

class Triangle: public Shape {
private:
    double calc_are(){
        return area = height * width / 2;
    }
public:
    double height;
    void print_area(){
        cout << "The area of Triangle is: " << calc_are() << endl;
    }
};

int main()
{
    Triangle tr;
    tr.height = 3;
    tr.width = 10;
    tr.print_area();

    Circle cr;
    cr.width = 20;
    cr.print_area();

    return 0;
}

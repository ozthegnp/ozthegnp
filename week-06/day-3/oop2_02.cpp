#include <iostream>

using namespace std;

// Countinue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)

class Shape {
protected:
    double area;
    virtual void calc_area() = 0;
    string shape_name;

public:
    void get_area(){
        cout << "The area of the " << shape_name << " is: "<< area << endl;
    }
};

class Circle: public Shape {
public:
    Circle(double rad){
        shape_name = "circle";
        this->rad = rad;
        calc_area();
    }

    void get_rad(){
        cout << "The radius of the " << shape_name << " is: "<< rad << endl;
    }
private:
    double rad;
    void calc_area(){
        area = rad * rad * 3.1415;
    }
};

class Triangle: public Shape {
public:
    Triangle(double base, double height){
        shape_name = "triangle";
        this->base = base;
        this->height = height;
        calc_area();
    }

    void get_base(){
        cout << "The base of the " << shape_name << " is: "<< base << endl;
    }

    void get_height(){
        cout << "The height of the " << shape_name << " is: "<< height << endl;
    }
private:
    double base;
    double height;
    void calc_area(){
        area = base * height / 2;
    }
};

int main()
{
    cout << "===Circle===" << endl;
    Circle cr(10);

    cr.get_area();
    cr.get_rad();

    cout << endl << "===Traingle===" << endl;
    Triangle tr(5, 10);

    tr.get_area();
    tr.get_base();
    tr.get_height();


    return 0;
}

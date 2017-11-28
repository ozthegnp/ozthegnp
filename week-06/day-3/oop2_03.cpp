#include <iostream>

using namespace std;

// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It shoud return the costs of the painting

class Shape {
protected:
    double area;
    virtual void calc_area() = 0;
    string shape_name;

public:
    void get_area(){
        cout << "The area of the " << shape_name << " is: "<< area << endl;
    }
    void how_much_to_paint(int price){
        cout << "The price to paint the " << shape_name << " is: $"<< area * price << endl;
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
    cr.how_much_to_paint(25);

    cout << endl << "===Traingle===" << endl;
    Triangle tr(5, 10);

    tr.get_area();
    tr.get_base();
    tr.get_height();
    tr.how_much_to_paint(25);


    return 0;
}

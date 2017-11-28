#include <iostream>
using namespace std;

// Take the Integer class from the previous exercise and add two methods:
// One which takes an Integer& parameter and adds the value of it to the member variable of this.
// One which takes an int and adds the value of it to the member variable of this.
//
// Write code which uses them both and Prints out the results respectively.

class Integer{
private:
    int a;
public:
    Integer(int a){
        this->a = a;
    }
    void add(Integer& param1){
        a += param1.a;
        cout << a << endl;
    }
    void add(int num){
        a += num;
        cout << a << endl;
    }

};

int main() {
    Integer in1(3), in2(4);
    in2.add(2);
    in1.add(in2);
}

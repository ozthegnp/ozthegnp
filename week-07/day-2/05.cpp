#include <iostream>
using namespace std;


// Take the Integer class from the previous exercise.
// Create 3 constructors for them:
// One empty which sets the member varibale to 0;
// A copy constructor, that takes an Integer& argument
// A third one which takes an int as argument and makes the member variable equal to the int it took.
//
// Write code that uses these and prints out the value of the member variable of the integers created.
// (You will have to create a get method to do this appropriately.)

class Integer{
private:
    int a;
public:
    Integer(){
        a = 0;
        cout << a << endl;
    }
    Integer(Integer& param1){
        a = param1.a + 1;
        cout << a << endl;
    }
    Integer(int a){
        this->a = a;
        cout << a << endl;
    }

};

int main() {

    Integer in;
    Integer in1(3);
    Integer in2(in1);

}

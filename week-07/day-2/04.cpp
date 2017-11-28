#include <iostream>
using namespace std;

// Create a Class named Integer. It should have one int member variable.
// Create add() methods to it. They should take Integer& parameters.
// Make variations of add() method 1, 2, 3, 4 and 5 arguments respectively.
// All methods should add the value of the parameters to the member variable of this.
//
// Try them out. Write code that demonstrates how they work.

class Integer{
private:
    int a;
public:
    void set_a(int a){
        this->a = a;
    }
    int add(Integer& param1){
        return a + param1.a;
    }
    int add(Integer& param1, Integer& param2){
        return a + param1.a + param2.a;
    }
    int add(Integer& param1, Integer& param2, Integer& param3){
        return a + param1.a + param2.a + param3.a;
    }
    int add(Integer& param1, Integer& param2, Integer& param3, Integer& param4){
        return a + param1.a + param2.a + param3.a + param4.a;
    }
    int add(Integer& param1, Integer& param2, Integer& param3, Integer& param4, Integer& param5){
        return a + param1.a + param2.a + param3.a + param4.a + param5.a;
    }
};

int main() {

    Integer in1, in2, in3, in4, in5;
    in1.set_a(1);
    in2.set_a(2);
    in3.set_a(3);
    in4.set_a(4);
    in5.set_a(5);

    cout << in1.add(in1) << endl;
    cout << in1.add(in1, in2) << endl;
    cout << in1.add(in1, in2, in3) << endl;
    cout << in1.add(in1, in2, in3, in4) << endl;
    cout << in1.add(in1, in2, in3, in4, in5) << endl;

    return 0;
}

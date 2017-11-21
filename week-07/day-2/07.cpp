#include <iostream>
using namespace std;

// Take the Integer class from the previous exercise and create two operators for it:
// a + operator that takes and Integer& and adds it's member variables value to this.
// a + operator that takes an int and adds it's value to the member variable of this.
//
// Consider what the return value of the operator should be: Integer& or void? Or something else?
// Make it so that the code below compiles and works.

class Integer{
private:
    int a;
public:
    Integer(){
    }
    Integer(int a){
        this->a = a;
    }

    Integer& operator +(int num){
        a += num;
        return *this;
    }

    Integer& operator +(Integer& num){
        a += num.a;
        return *this;

    }

    int get_a(){
        return a;
    }
};
int main () {
    Integer a(12);
    Integer b(2);
    Integer c, d;

    c = a + b;
    d = a + 3;

    cout << c.get_a() << endl;
    cout << d.get_a() << endl;



    return 0;
}

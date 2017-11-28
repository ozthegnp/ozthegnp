#include <iostream>
#include <vector>

using namespace std;

// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called travelling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.

class Human {
public:
    virtual void travelling() {
        cout << "Human is walking" << endl;
    }
};

class SuperHuman: public Human {
public:
    void travelling(){
        cout << "SuperHuman is flying" << endl;
    }
};

class AquaHuman: public Human {
public:
    void travelling(){
        cout << "AquaHuman is riding dolphins" << endl;
    }
};

int main()
{
    SuperHuman sp;
    AquaHuman aq;
    Human hm;

    hm.travelling();
    sp.travelling();
    aq.travelling();


    return 0;
}

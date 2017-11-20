#include <iostream>
#include <ctime>

using namespace std;

// Create a class named Person.
// This class shoud have a constructor which prints out the
// date of the creation of the istance.

class Person{
public:
    Person(){
        time_t now = time(0);
        char *dt = ctime(&now);
        cout << "created: " <<dt << endl;
    }
};
int main() {
    Person p;

}

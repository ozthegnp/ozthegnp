#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
        this->age = age;
        this->name = name;
    }
    void greet(){
        cout << "Hello, my name is " << name << endl;
    }

};

int main() {
    // Create a method on the Student class called "greet" that returns a string
    // like: "Hello my name is: <student name>"

    Student ss("Oscar", 21);

    ss.greet();

    return 0;
}

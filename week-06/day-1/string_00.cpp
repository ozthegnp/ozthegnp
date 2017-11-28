#include <iostream>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolen variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{
    string name = "Oscar Mateo";
    int age = 27;
    bool coffee = true;

    cout << name << endl;
    cout << age << endl;
    cout << "Likes cofee: ";

    if(coffee)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}

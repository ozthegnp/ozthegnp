#include <iostream>

using namespace std;

// store your personal data in Variables
// string name, int age, int slice_of_pizza_you_can_eat
// allocate memory dynamically for these variables
// create a sentense using these variables
// free the allocated memory

int main() {
    string *name = NULL;
    int *age = NULL;
    int *pizza_capacity = NULL;

    name = new string("Oscar");
    age = new int(27);
    pizza_capacity = new int(8);

    cout << "I'm " <<*name << ", " << *age << " years old. I can eat "<< *pizza_capacity << " slices of pizza."<< endl;

    delete name, age, pizza_capacity;

    return 0;
}

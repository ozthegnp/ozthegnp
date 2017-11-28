#include <iostream>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{
    string name = "Oscar";
    int age = 27;
    double height = 1.75;
    bool marital_status = false;

    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "height: " << height << " m" << endl;
    cout << "Marital status: ";

    if(marital_status)
        cout << "married" << endl;
    else
        cout << "single" << endl;

    return 0;
}

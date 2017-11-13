#include <iostream>

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

using namespace std;

namespace Person
{

    string name = "Oscar";
    int age = 27;
    int fav_num = 7;

}

int main()
{
    using namespace Person;

    cout << "Name: " << name << ", Age: " << age << ", Favorite Number: " << fav_num << endl;

    return 0;
}

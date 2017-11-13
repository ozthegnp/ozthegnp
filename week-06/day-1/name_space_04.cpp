#include <iostream>

// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// create a function that can add the two age, and returns it

using namespace std;

namespace Mark
{
    string name = "Oscar";
    int age = 27;
    int fav_num = 7;

}

namespace Maria
{
    string name = "Oscar";
    int age = 27;
    int fav_num = 7;

}

int age_adder(int age1, int age2);


int main()
{
    cout << "Ages combined: " << age_adder(Maria::age, Mark::age) << endl;

    return 0;
}

int age_adder(int age1, int age2)
{
    return age1 + age2;
}

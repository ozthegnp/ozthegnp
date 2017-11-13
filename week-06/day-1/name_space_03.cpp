#include <iostream>

// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born

using namespace std;

namespace Person
{

    string name = "Oscar";
    int age = 27;
    int fav_num = 7;

}

int age_calculator(int age);

int main()
{
    using namespace Person;

    cout << "Year of birth: " << age_calculator(age) << endl;

    return 0;
}

int age_calculator(int age)
{
    return 2017 - age;
}

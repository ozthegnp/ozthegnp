#include <iostream>
#include <string>
#include <vector>

using namespace std;

//create an integer vector with the size of 5 and print the 3rd element of it

int main() {

    vector <int> numbers_v;

    numbers_v.push_back(23);
    numbers_v.push_back(67);
    numbers_v.push_back(93);
    numbers_v.push_back(61);
    numbers_v.push_back(88);

    cout << numbers_v[2] << endl;


    return 0;
}

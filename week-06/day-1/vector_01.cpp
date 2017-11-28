#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    //create an integer vector with the size of 5 and print all elements of it

    vector <int> num_v;

    num_v.push_back(22);
    num_v.push_back(33);
    num_v.push_back(55);
    num_v.push_back(92);
    num_v.push_back(12);

    for(unsigned int i = 0; i < num_v.size(); ++i)
        cout << num_v[i] << endl;

    return 0;
}

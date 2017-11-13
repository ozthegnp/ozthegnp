#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    //create a vector of integers with the size of 20
    //fill this vector with random numbers from 0 to 10
    //print the items of the vector
    //remove the even numbers, then print the items again

    vector <int> num_v;
    num_v.reserve(20);

    for(unsigned int i = 0; i < num_v.capacity(); ++i){
        num_v.push_back(rand() % 11);
        cout << num_v[i] << endl;
    }

    cout << "-----------------" << endl;

    for(unsigned int i =0; i < num_v.size();) {
        if(num_v[i] % 2 == 0){
            num_v.erase(num_v.begin() + i);
        } else {
            cout << num_v[i] << endl;
            i++;
        }
    }

    return 0;
}

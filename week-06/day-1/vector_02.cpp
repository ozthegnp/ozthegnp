#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    //Create a vector of integers
    //reserve place for 10 element, then fill those place with random numbers between 0 and 10

    vector <int> num_v;
    int size = 10;

    for(unsigned int i = 0; i < size; ++i){
        num_v.push_back(rand() % 11);
        cout << num_v[i] << endl;
    }

    return 0;
}

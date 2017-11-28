#include "oop_08.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

    Student st;

    int size = 5;//size of vector 

    for(int i = 0; i < size ; i++){
        int num = rand() % 5 + 1;
        st.add_grade(num);
        cout << num << " added" << endl;
    }

    cout << "The avg is: " << st.get_avarage() << endl;

    return 0;
}

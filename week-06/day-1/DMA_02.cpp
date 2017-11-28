
#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {

    double *ptr;
    double count = 0;
    cout << "Please type amount of numbers: ";
    cin >> count;

    ptr = new double[count];

    double sum = 0;

    for(int i = 0; i < count; ++i){
        cout << "number " << i + 1 << ": ";
        cin >> ptr[i];
        sum += ptr[i];
    }
    cout << "The avg is: " << sum / count << endl;

    delete ptr;

    return 0;
}

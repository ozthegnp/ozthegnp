#include <iostream>
using namespace std;

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

void odd_print(int n){
    if(n < 1){
        throw runtime_error("only natural numbers allowed");
    }
    for(int i = 1; i < 2 * n; i += 2){
        cout << i << ", ";
    }
}

int main() {
    try{
        odd_print(7);
    } catch(runtime_error &err){
        cout << err.what() << endl;
    }

    return 0;
}

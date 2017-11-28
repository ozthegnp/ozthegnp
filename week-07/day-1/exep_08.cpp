#include <iostream>
using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */

int get_fibonacci(int n){
    if(n < 1){
        throw runtime_error("only natural nums allowed");
    }
    if(n == 1){
        return 0;
    } else if(n == 2){
        return 1;
    }else {
        return get_fibonacci(n - 1) + get_fibonacci(n - 2);
    }
}

int main() {
    try{
        cout << get_fibonacci(1) << endl;

    }catch(runtime_error &err){
        cout << err.what();
    }

    return 0;
}

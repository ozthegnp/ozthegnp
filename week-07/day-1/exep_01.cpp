
#include <sstream>
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {
    try{
        throw 6;
    } catch(int a){
        cout << a;
    }
    return 0;
}

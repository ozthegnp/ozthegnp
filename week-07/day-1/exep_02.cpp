#include <sstream>
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main() {
    try{
        throw 'a';
    } catch(char a){
        cout << a;
    }
    return 0;
}

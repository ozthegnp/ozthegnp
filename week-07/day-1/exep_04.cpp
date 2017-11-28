#include <sstream>
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void null_check(int b){
    if(b == 0)
        throw 9;
}

int main() {

    try{

        int a = 1;
        int b = 0;

        null_check(b);

        cout << a/b << endl;

    } catch(int a){
        cout << a << endl;
    }
    return 0;
}

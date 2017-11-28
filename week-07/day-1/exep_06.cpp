#include <sstream>
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// Create a function which throws an integer
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void null_check(int b){
    if(b == 0)
        throw runtime_error("it is zero, dont do it\n");
}

int main() {

    try{

        int a = 1;
        int b = 0;

        null_check(b);

        cout << a/b << endl;

    } catch(runtime_error &err){
        cout << err.what();
    }
    return 0;
}

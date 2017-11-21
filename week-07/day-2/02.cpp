#include <iostream>
using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.

string afunction(string a, string b){
    return a + b;
}

string afunction(string a, string b, string c){
    return a + b + c;
}

string afunction(string a, string b, string c, string d){
    return a + b + c + d;
}
int main() {

    cout << "adding two: "<< afunction("Hello ", "Oscar") << endl;
    cout << "adding three: " << afunction("Hello ", "Oscar", ", what's") << endl;
    cout << "adding four: " << afunction("Hello ", "Oscar", ", what's", " up?!") << endl;


    return 0;
}

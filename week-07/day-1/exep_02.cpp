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
      int a = 1;
      int b = 0;

      if(b == 0){
        throw 'a';
      }
      cout << a/b << endl;
    } catch(char a){
        cout << a;
    }
    return 0;
}

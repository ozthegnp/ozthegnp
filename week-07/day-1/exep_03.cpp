#include <sstream>
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// Throws a bulit-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {
    try{

      int a = 1;
      int b = 0;

      if(b == 0){
        throw runtime_error("a");
      }

      cout << a/b << endl;

    } catch(runtime_error &err){
        cout << err.what();
    }
    return 0;
}

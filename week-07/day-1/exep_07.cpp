#include <iostream>
using namespace std;
//Try to run the following code!

int main () {

    try{
        int int_array[5] = {1, 2, 3, 4, 5};

        int position = 200;

        if(position >= sizeof(int_array)/sizeof(int_array[0])){
            throw 99;
        }
        cout << int_array[position];

    } catch(int a){
        cout << "error code: " << a << endl;
    }
    return 0;
}

//The program should compile but crash!
//Create a solution for this problem using try-catch block!

#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

// Create a simple program which has a time lock
// The program shoul ask for a user input, but the user only has
// 10 seconds to reply, if the user falis (reaches the time limit)
// the program should print out: "faild, it took you too much time"
// This program cloud be the engine of a quiz game.

int main() {

   /*try{

    }catch(runtime_error &err){
        cout << err.what() << endl;

    }*/

    time_t start = time(0);
    time_t now = time(0);

    cout << "hit any key" << endl;

    while((now - start) < 11){
        if (time(0) > now){
            if(now % 2 == 0)
                cout << "-TICK";
            else
            cout << "-TOCK";
                now = time(0);
        }
    }
    cout << endl << "BUMMMM!!!!" <<  endl;
}

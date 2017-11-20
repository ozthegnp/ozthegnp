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

    time_t start = time(0);
    time_t now = time(0);

    string input;

    try{
        cout << "Insert anything in 10 sec: " << endl;

        getline(cin, input);
        now = time(0);

        if(now - start > 10){
            throw now - start;
        }
        cout << "Good job! Your time: "  << now - start << "s" << endl;

    } catch(long i){
        cout << "Too late! Your time: "  << i << "s" << endl;
        }
}

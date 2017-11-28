#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

using namespace std;

condition_variable cv;

string value = "";

void read_value() {
    getline(cin, value);
    cv.notify_one();
}

int main()
{
    cout << "Please enter input: ";
    thread th(read_value);

    mutex mtx;
    unique_lock<mutex> lck(mtx);

    try{
        while (cv.wait_for(lck, chrono::seconds(4)) == cv_status::timeout)
        {
            throw 1;
        }
        cout << "\nGood job! You entered: " << value << '\n';

    } catch(...){
        cout << "\nTime is up!!";
    }

    th.join();

    return 0;
}

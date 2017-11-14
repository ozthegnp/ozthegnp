#include <iostream>
#include <string>

using namespace std;

class Pirate{
    int rum_counter = 0;

public:
    void drink_rum(){
        rum_counter++;
    }
    void hows_goin_mate(){
        if(rum_counter >= 5)
            cout << "Arrrr!" << endl;
        else
            cout << "Nothin'" << endl;
    }
};

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

    Pirate pi;

    for(int i = 0; i < 10; i++){
        pi.drink_rum();
        pi.hows_goin_mate();
        cout << endl;
    }

    return 0;
}

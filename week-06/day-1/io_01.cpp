#include <iostream>

using namespace std;

// Greet 3 of your classmates with this program, in three separate lines
// like:
//
// Hello, Esther!
// Hello, Mary!
// Hello, Joe!
// Store their names in separate string type variables

void greeter(string name);

int main()
{
    string a = "Esther";
    string b = "Mary";
    string c = "Joe";

    greeter(a);
    greeter(b);
    greeter(c);

    return 0;
}
void greeter(string name)
{
    cout << "Hello, " << name << endl;
}

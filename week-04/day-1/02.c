#include <stdio.h>

int main() {
    int number = 1234;
    int* number_pointer = &number;

    printf("%x", number_pointer);
    //TODO:
    // print the value of number using the "number_pointer"

    return 0;
}

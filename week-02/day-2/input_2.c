#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input

    puts("What is your name?");
    gets(buffer);// Get the user's name with gets

    puts("Youre name is:");
    puts(buffer);// Print it out with puts

    // Get the user's pet name with getch
    //getch doesnt work on Mac.
    //TODO:
    // Print it out

    return 0;
}

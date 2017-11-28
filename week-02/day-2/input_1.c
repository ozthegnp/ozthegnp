#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input

    printf("Enter your name: ");

    scanf("%s", buffer);
    printf("Your name is: %s", buffer);

    return 0;
}

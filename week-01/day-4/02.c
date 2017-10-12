
#include <stdio.h>
#include <stdlib.h>

/*
write a program to check whether a given number is positive or negative
*/

int main()
{
    int a;
    printf(" Enter a number:");
    scanf(" %d", &a);

    if ( a > 0){
        printf("this is positive! ");
    } else if ( a < 0){
        printf("this is negative! ");
    } else {
        printf("zero's parity is neutral!");
    }

    return 0;
}

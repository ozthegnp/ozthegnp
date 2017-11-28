#include <stdio.h>
#include <stdlib.h>

/*
write a program to find the largest number of three
*/

int main()
{
    int a = 113;
    int b = 29;
    int c = 117;

    if(a > b && b > c){
        printf("The largest number is a: %d", a);
    } else if(b > a && a > c){
        printf("The largest number is b: %d", b);
    }else {
        printf("The largest number is c: %d", c);

    }

    return 0;
}

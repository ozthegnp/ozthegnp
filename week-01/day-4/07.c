
#include <stdio.h>
#include <stdlib.h>

/*
create a simple program which checks if the num is odd or even
*/

int main()
{
    int num, parity;
    num = 13;
    parity = num % 2;
    printf( " Our number is %d \n", num);
    printf( " it's parity is ");

    switch (parity){
        case 0 :
            printf("even");
            break;
        default:
            printf("odd");
    }

    return 0;
}

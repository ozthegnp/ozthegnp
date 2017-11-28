#include <stdio.h>
#include <stdlib.h>

/*
write a program that decides which number is bigger
use switch-statement
*/

int main()
{
    int num1;
    int num2;

    num1 = 100;
    num2 = 96;

    switch (num1 > num2){
        case 1:
            printf("%d is bigger than %d",num1, num2 );
            break;
        default :
            printf("%d is not bigger than %d",num1, num2 );

    }

    return 0;
}

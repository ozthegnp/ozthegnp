#include <stdio.h>
#include <stdlib.h>

/*
create a program which generates numbers from 0 to 100
for each number write if the number is odd or even (don't print out the numbers)
*/

int main()
{
    int parity;

    for(int a = 0 ; a <= 100 ; a++){
        parity = a % 2;
            switch (parity){
                case 0 :
                printf(" %d is even\n", a);
                break;
                default :
                printf(" %d is odd\n", a);

            }
    }
    return 0;
}

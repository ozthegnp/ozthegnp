#include <stdio.h>
#include <stdlib.h>
/*
Create a program which prints out oll the prime numbers
aslo add a feature where you can tell the from - to limits
for example :
from = 11;
to = 34;
output :
13, 17, 19, 23, 29, 31 , this is 6 prime numbers
*/
int main()
{

    printf("\n=== The prime number finder === \n\n");

    int from = 0, to = 0;

    printf("Type in a number:");
    scanf("%d", &from);

    printf("Now another:");
    scanf("%d", &to);

    if (from > to){
        int z = from;
        from = to;
        to = z;
    }

    for (int i = from; i <= to; i++){
        if(i % 1 == 0 && i % 1 == 0 ){
            printf("%d ", i);
        }
    }

    return 0;
}

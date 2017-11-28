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

    printf("\nThe primes between %d and %d are:\n", from, to);

    int prime_counter;

    for (int i = from; i <= to; i++){
        int dvsr_count=0;
            for (int k = 2; k <= i-1; k++){
                if(i % k == 0){
                    dvsr_count++;
                }
            }
        if (dvsr_count == 0 && i != 1){
            printf("%d ", i);
            prime_counter++;
        }
    }
    printf("\nThese are %d primes between these numbers\n", prime_counter);


    return 0;
}

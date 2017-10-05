#include <stdio.h>
#include <stdlib.h>

/*
find the greatest common divisor of the two given variables
use Euclid's algorithm, if you don't know it look it up on the internet
*/

int main()
{
    int x = 32;
    int y = 20;
    int z, gcd = 0, rmdr = 1;

    if(x<y){
        z = x;
        x = y;
        y = z;
    } else{
        while(rmdr =! 0){
            rmdr = x % y;
            x = y;
            y = rmdr;
            printf(" %d \n", rmdr);
            gcd = y;

            }
        }
                        printf(" %d", gcd);

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
find the greatest common divisor of the two given variables
use Euclid's algorithm, if you don't know it look it up on the internet
*/

int main()
{
    int x = 50;
    int y = 100;
    int z, gcd, rmdr = 1;

    printf("The gcd of %d and %d is:", x, y);

        if (x < y) {
            z = x;
            x = y;
            y = z;
        }
        while (rmdr != 0) {
                gcd = y;
                rmdr = x % y;
                x = y;
                y = rmdr;
        }
    printf(" %d", gcd);

    return 0;
}

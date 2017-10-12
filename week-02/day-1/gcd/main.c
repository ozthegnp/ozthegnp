#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);

int main()
{
    int num1 = 15;
    int num2 = 125;

    printf("The gcd of %d and %d is: %d",num1, num2, gcd(num1, num2));

    return 0;
}
int gcd(int x, int y)
{

    if (x < y) {
        int z = x;
        x = y;
        y = z;
    }

    if (x % y == 0)
        return y;
    else
       return gcd(y, (x%y));
}

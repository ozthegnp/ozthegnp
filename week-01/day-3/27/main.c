#include <stdio.h>
#include <stdlib.h>

/*
swap the values of the to number
print out first the original values then print out the swaped values
but this time use bitwise operators only
*/

int main()
{
    int x = 31;
    int y = 20;
    printf("x= %d, y= %d \n", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("x= %d, y= %d", x, y);


}

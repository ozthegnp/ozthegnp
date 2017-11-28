#include <stdio.h>
#include <string.h>
#include <stdint.h>



//TODO: write a function which returns 485 as unsigned integer value
//put your return value in an integer variable in which you should have 229, and print it out
//try to figure out which type casting you should use


int main()
{
    uint16_t a = 485;

    printf("%d\n", (uint8_t) a);


    return 0;
}

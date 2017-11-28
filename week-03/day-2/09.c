#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void binary_adder(char *bin_op_1, char *bin_op_2);
int convert(int dec);

//TODO: write a program which asks for two binary numbers.
//write a function, which prints out the sum of the 2 binary numbers.
int main()
{
    char a[20];
    char b[20];

    printf("Give me a binary number: ");
    scanf("%s", &a);
    printf("Give me another binary number: ");
    scanf("%s", &b);


    binary_adder(a, b);
    return(0);
}

void binary_adder(char *bin_op_1, char *bin_op_2)
{
    int addition = strtol(bin_op_1, NULL, 2) + strtol(bin_op_2, NULL, 2);

    int bin = convert(addition);

    printf("%s  + %s = %d",bin_op_1,bin_op_2, bin);

  }


int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}

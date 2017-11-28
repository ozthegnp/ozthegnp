#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palindrome(char inputf[]);

void main ()
{
    char input[0] = "";

    puts("Type word to generate palindrome:");
    gets(input);
    palindrome(input);
}

void palindrome(char inputf[])
{
    puts("Your palindrome is");
    for (int i = 0; i < strlen(inputf); i++)
        printf("%c", inputf[i]);
    for (int j = strlen(inputf); j >= 0; j--)
        printf("%c", inputf[j]);
}

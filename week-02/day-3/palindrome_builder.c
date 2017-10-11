#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    char input[0];

    gets(input);

    for (int i = 0; i < strlen(input); i++)
        printf("%c", input[i]);
    for (int j = strlen(input); j >= 0; j--)
        printf("%c", input[j]);
}

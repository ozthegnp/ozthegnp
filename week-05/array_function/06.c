/*
 * Take an array of characters, for example this: "In the year 2525, If man is still alive... In the Year 3535, In the Year 4545"
 * Create a function that takes an array of characters as an input, and a single character.
 * It should return the first index when this character appears.
 */

#include <stdio.h>
#include <stdlib.h>

int year_check(char str[], char a);

void main()
{
    char string[] = "In the year 2525, If man is still alive... In the Year 3535, In the Year 4545";
    char a = '8';
    printf("In the year 2525, If man is still alive... In the Year 3535, In the Year 4545\n");
    printf("The first '%c' character is at position %d", a, year_check(string, a));
}

int year_check(char str[], char a)
{
    int position = 0;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == a){
            position = i;
            return position;
            break;
        }
    }
    return -1;
}

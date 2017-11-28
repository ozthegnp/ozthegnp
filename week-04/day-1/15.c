#include <stdio.h>

void reverse_name(char *name, char *reversed_name);

int main(void)
{
	char name[] = "Gipsz Jakab";

    char reversed[50];

    reverse_name(name, reversed);

    //write a function that switches the last and first name. Use a void function. Put your 'return' value in the second parameter.

}

void reverse_name(char *name, char *reversed_name)
{
    char first[50];
    char last[50];
    int space_locator = 0;

    for(int i = 0; i < 50;i++){
        if(name[i] == ' ')
            break;
        space_locator++;
    }
    reversed_name[space_locator] = ' ';

    for(int i = 0; i < strlen(name)/2; i++){
        reversed_name[space_locator + i + 1] = name[i];
        reversed_name[i] = name[i + space_locator + 1];
    }

    puts(reversed_name);

}

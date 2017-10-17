#include <stdio.h>
#include <string.h>
//TODO: write a c program which, splits a string to words by space
//solve the problem with the proper string.h function

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    char *token;
    gets(string);

    token = strtok(string, " ");

    while(token != NULL){
        printf("%s\n", token);
        token =strtok(NULL, " ");
    }
    return(0);
}

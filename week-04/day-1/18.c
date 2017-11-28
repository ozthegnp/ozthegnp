#include <stdio.h>

int first_word(char *string, char *first);

int main()
{
    //TODO: write a function, which extracts the first word of a given string.
    //return with the word's length

    char str[] = "Extracting the first word.";
    char first[50];

    puts(str);
    printf("%d is the length of the first word\n", first_word(str, first));

    return 0;
}
int first_word(char *string, char *first)
{
    int length = 0;

    for(int i = 0; i < strlen(string); i++){
        first[i] = string[i];
        length++;

            if(string[i] == ' ')
                break;
    }
    return length;
}

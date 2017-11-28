#include <stdio.h>

void string_copy(char *dest, char *source);

int main()
{
    char my_string[] = "to be copied";
    char dest[50];

    string_copy(dest, my_string);
   //TODO: write a function, which copies a string to the 'dest' array, then print out in string format.

    return 0;
}

void string_copy(char *dest, char *source)
{
    dest = source;
    puts(dest);
}

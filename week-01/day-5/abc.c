#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(char sml = 'a'; sml <='z' ; sml++) {
        printf("%c%c", sml, sml - 32);
    }
    return 0;
}

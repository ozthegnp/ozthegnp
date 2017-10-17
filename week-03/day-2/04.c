#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[5] = "3.14";
    //strcpy(str, "3.14");

    printf("%.2f\n", (float) atof(str));
    printf("%s\n", str);


    //TODO: print out the value of pi, first as a string, then a float value.

    return(0);
}

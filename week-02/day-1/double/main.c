#include <stdio.h>
#include <stdlib.h>
#include "double.h"

// create a function called `doubling` that doubles it's input parameter
// again the parameters value should be stored in a .h file
int doubling(int num);

int main()
{
    printf("%d\n", doubling(A));
    printf("%d\n", doubling(B));
    printf("%d\n", doubling(C));

    return 0;
}

int doubling(int num){
    return num * 2;

}

#include <stdio.h>
#include <stdlib.h>
#include "factorio.h"
// create a function called `factorio`
// that returns it's input's factorial with and without recursion
// again the parameters value should be stored in a .h file
//
int factorio(int num);
int main()
{
    printf("%d! is %d",input, factorio(input));
    return 0;
}

int factorio(int num){
    static int result = 1;
    for(int i = 1; i<=num; i++){
        result *= i;
    }
    return result;
}

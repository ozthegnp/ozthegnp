#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "factorio.h"
// create a function called `factorio`
// that returns it's input's factorial with and without recursion
// again the parameters value should be stored in a .h file
//
int factorio(uint64_t num);
int main()
{
    printf("%d! is %d",input, factorio(input));
    return 0;
}

int factorio(uint64_t num){
    static uint64_t result = 1;
    for(uint64_t i = 1; i<=num; i++){
        result *= i;
    }
    return result;
}

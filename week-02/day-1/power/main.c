#include <stdio.h>
#include <stdlib.h>

// create a function which returns the power of a base number

int exponential(int bottom, int top);

int main()
{
    int base = 3;
    int power = 0;

    printf("%d^%d = %d", base, power, exponential(base, power));
    return 0;
}

int exponential(int bottom, int top){
    if (top == 0) {
        return 1;
    }
    else {
        int result = bottom;
        for(int i = 1; i < top; i++){
            result *= bottom;
        }
    return result;
    }
}

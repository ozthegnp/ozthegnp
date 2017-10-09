#include <stdio.h>
#include <stdlib.h>

// create a function to calculate factorial of a number using recursion


int main()
{
    int input = 6;
    printf("%d! is %d", input, factorial(input));
    return 0;
}

int factorial(int num){
    if (num == 0)
        return 1;
    else if (num == 1)
        return 1;
    else
        return factorial(num-1) * num;
}

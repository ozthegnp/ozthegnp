#include <stdio.h>
#include <stdlib.h>

int fib[51];

int main()
{
     for(int i = 0; i < 51; ++i){
        fib[i] = -1;
     }
    printf("%d", fibonacci(10));
    return 0;
}

int fibonacci(int number)
{
    if (number <= 1){
        return number;
    }
    if (fib[number] != -1){
        return fib[number];
    }
    else{
       fib[number] = fibonacci(number - 1) + fibonacci(number - 2);
        return fib[number];
    }
}

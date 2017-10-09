#include <stdio.h>
#include <stdlib.h>
#include "memoization.h"
// create a function which returns a Fibonacci number like in the example code
// this time do it with memoization
// again the parameters value should be stored in a .h file

int fibonacci(int fib_num);

int main()
{
    printf("The %dst fibonacci number is:%d\n", a, fibonacci(a));
    printf("The %dnd fibonacci number is:%d\n", b, fibonacci(b));
    printf("The %drd fibonacci number is:%d\n", c, fibonacci(c));
    printf("The %dth fibonacci number is:%d\n", d, fibonacci(d));
    printf("The %dth fibonacci number is:%d\n", e, fibonacci(e));
    printf("The %dth fibonacci number is:%d\n", f, fibonacci(f));
    printf("The %dth fibonacci number is:%d\n", g, fibonacci(g));

    return 0;
}

int fibonacci(int fibnum) {
    int x = 0;
    int y = 1;
    int result = 0;

    for(int i = 1; i <= fibnum; i++){
        result = x + y;
        x = y;
        y = result;
    }
    return x;
}

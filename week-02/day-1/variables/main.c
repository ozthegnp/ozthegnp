#include <stdio.h>
#include <math.h>

/*
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on a given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/
int triple(int trip);
int factorio(int num);
float divide(float div);
int power(int tothethird);
int fibonacci(int fib_num);

int operations();
int op_counter = 0;

int main(){
        int num = 0;

        printf("Please enter an integer:");
        scanf("%d", &num);

        printf("%d! is %d\n", num, factorio(num));
        printf("%d * 3 is %d\n", num, triple(num));
        printf("The half of %d is %.1f\n", num, divide(num));
        printf("%d^3 is %d\n", num, power(num));
        printf("The %dth fibonacci number is %d\n\n", num, fibonacci(num));
        printf("Total operations: %d\n", operations());

        return 0;
}

int triple(int trip) {
    op_counter++;
    return trip * 3;

}

int factorio(int fac) {
    int result = 1;
    for(int i = 1; i<=fac; i++){
        result *= i;
    }
    op_counter++;

    return result;
}

float divide(float div) {
    op_counter++;
    return div/2;
}

int power(int tothethird) {
    int exp = 0;
    exp = pow(tothethird, 3);
    op_counter++;
    return exp;
}

int fibonacci(int fib_num) {
    if (fib_num == 1)
        return 1;
    else if (fib_num == 2)
        return 1;
    else
        return fibonacci(fib_num - 1) + fibonacci(fib_num - 2);

}

int operations(){
    op_counter++;
    return op_counter;
}





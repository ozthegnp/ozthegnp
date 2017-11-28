#include <stdio.h>

/*
Write a program that prints the numbers from 1 to 100.
But for multiples of three print "Fizz" instead of the number
and for the multiples of five print "Buzz".
For numbers which are multiples of both three and five print "FizzBuzz".
But this time, use switch
*/

int main() {

    int three = 0, five = 0, fifteen = 0, a = 1;

    for ( a = 1 ; a <=100; a++){
        three = a % 3;
        five = a % 5;
        fifteen = a % 15;
        switch (fifteen){
            case 0:
                printf("FizzBuzz \n");
            default:
                switch (three){
                    case 0:
                printf("Fizz \n");
                    default:
                        switch (five){
                            case 0:
                        printf("Buzz \n");
                        default:
                        printf (" %d \n", a);
                        }
                }
        }


        }


    return 0;
}

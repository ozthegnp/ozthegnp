#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{

    printf("\n=== The odd number finder === \n\n");

    int x = 0, y = 0;

    printf("Type in a number:");
    scanf("%d", &x);

    printf("Now an other a number:");
    scanf("%d", &y);

    if (x > y){
        int z = x;
        x = y;
        y = z;
    }

    printf("\nThe odd numbers between %d and %d are: \n", x, y);

    if(x % 2 == 0){
        for(int i = x + 1; i< y;i +=2 ){
            printf("%d ", i);
        }
    } else {
        for(int i = x + 2; i< y;i +=2 ){
        printf("%d ", i);
        }
    }
        printf("\n");

	return 0;
}

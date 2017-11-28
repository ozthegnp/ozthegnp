/*
 * Create an array of integers. Make it 10 long at least. Fill it up with numbers - random or toherwise - as You wish.
 * Iterate over this array using a pointer. Print out it's elements.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand ( time(NULL) );
    int numbers[11];
    int *ptr = numbers;
    int size = sizeof(numbers)/sizeof(numbers[0]);

    printf("array\taddress\t\tvalue\n");

    for(int i = 0; i < size; i++){
        ptr[i] = rand() % 100;
        printf("%d\t\t%x\t%d\n", i, ptr + i, *(ptr + i));
    }


    return 0;
}

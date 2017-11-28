/*
 * Create an array of 5 integers, fill it with random numbers.
 * Create an other of 7 integers.
 * Copy the contents of the first array into the second one in a way,
 * that the first and the last numbers of the second array are both 42,
 * and it contains all the elements of the first array.
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arry[5];

    for(int i = 0; i < sizeof(arry)/sizeof(arry[0]);i++){
        arry[i] = rand() % 100;
        printf(" %d |", arry[i]);
    }

    printf("\n");

    int arry2[7];

    for(int i = 0; i < sizeof(arry2)/sizeof(arry2[0]);i++){
        if(i % 6 == 0)
            arry2[i] = 42;
        else
            arry2[i] = arry[i - 1];
        printf(" %d |", arry2[i]);
     }


}

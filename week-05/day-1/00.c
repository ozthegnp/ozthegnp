/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers _in_the_array_ an print them out again.
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arry[5];
    int temp;


    int size = sizeof(arry)/sizeof(arry[0]);

     for(int i = 0; i < size;i++){
        arry[i] = rand() % 100;
        printf(" %d |", arry[i]);
     }
      for(int i = 0; i < size/2;i++){
            temp = arry[i];
            arry[i] = arry[size - 1 - i];
            arry[size - 1 - i] = temp;
     }

    printf("\n");

      for(int i = 0; i < size;i++){
        printf(" %d |", arry[i]);
     }

}

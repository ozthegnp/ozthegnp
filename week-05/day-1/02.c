/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arry[12];
    int size = sizeof(arry)/sizeof(arry[0]);
    int temp[1];
    int flag;

    for(int i = 0; i < size; i++){
        arry[i] = rand() % 100;
        printf(" %d |", arry[i]);
    }

    printf("\n");

    do{
    flag = 0;
        for(int j = 0; j < size - 1; j++) {
            if(arry[j] > arry[j+1]){
               temp[0] = arry[j];
               arry[j] = arry[j + 1];
               arry[j + 1] =  temp[0];
                flag++;
            }
        }

    } while(flag > 0);

    for(int i = 0; i < size; i++){
        printf(" %d |", arry[i]);
    }

}

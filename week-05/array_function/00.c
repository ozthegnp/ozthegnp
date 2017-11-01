/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void filter(int *ptr, uint8_t length);

void main()
{
    srand ( time(NULL) );
    unsigned int num[10];
    uint8_t size = sizeof(num)/sizeof(num[0]);

    for(int i = 0; i < size; i++){//Filling up array
        num[i] = rand() % 100;
    }
    for(int i = 0; i < size; i++){//Printing out array
        printf("%d |", num[i]);
    }

    printf("\n");
    filter(num, size);//Bubble sorting array

    for(int i = 0; i < size; i++){
        printf("%d |", num[i]);//Printing out sorted
    }
}

void filter(int *arry, uint8_t length)
{
    int temp[1];
    int flag;
    do{

    flag = 0;

    // BUBBLE SORT
    for(int j = 0; j < length - 1; j++) {
        if(arry[j] > arry[j+1]){
            temp[0] = arry[j];
            arry[j] = arry[j + 1];
            arry[j + 1] =  temp[0];
            flag++;
        }
    }

    } while(flag > 0);

}

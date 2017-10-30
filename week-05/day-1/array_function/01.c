/*
 * Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unosrted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int *fill, int size);//filles array with numbers
void bubble(int arry[], uint8_t length, int *new_arry );//Bubble sorting array
void printer(int fill[], int size);//Printing out array
int num_finder(int arry[], int size, int num);



void main()
{
    srand ( time(NULL) );
    int arr_size = 20;
    unsigned int num[arr_size];
    unsigned int sorted_num[arr_size];
    uint8_t size = sizeof(num)/sizeof(num[0]);

    fill(num, size);
    printer(num, size);
    printf("\n\n");

    bubble(num, size, sorted_num);

    printer(sorted_num, size);

    int search_num = rand() % 100;
    printf("\n\nyou are looking for number:%d\n", search_num);
        if(num_finder(sorted_num, size, search_num) > -1)
            printf("number found at location: %d\n", num_finder(sorted_num, size, search_num));
        else
            printf("number not found in any array\n");

}

void bubble(int arry[], uint8_t length, int *new_arry )
{
    int temp[1];
    int flag;

    //Passing array elements
     for(int i = 0; i < length; i++) {
            new_arry[i] = arry[i];
        }
    // BUBBLE SORT
    do{

    flag = 0;

        for(int j = 0; j < length - 1; j++) {
            if(new_arry[j] > new_arry[j+1]){
                temp[0] = new_arry[j];
                new_arry[j] = new_arry[j + 1];
                new_arry[j + 1] =  temp[0];
                flag++;
            }
        }

    } while(flag > 0);

}

void fill(int *fill, int size)
{
    for(int i = 0; i < size; i++)//Filling up array
        fill[i] = rand() % 100;
}

void printer(int fill[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d |", fill[i]);

}
int num_finder(int arry[], int size, int num)
{
    for(int i = 0; i < size; i++){
        if (arry[i] == num)
            return i;
    }
    return -1;

}

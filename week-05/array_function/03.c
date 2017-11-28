/*
 * Create a function that takes an array of array of characters and returns an array of integers each representing the
 * lenght of the given character array in the first array.
 * Say your input is this: {"Good", "Morning", "Vietnam"}
 * Your output should be this: {4, 7, 7}.
 * HINT: strings are terminated with a special character: '\0'.
 * So, "Good" as an array of characters would look like this: {'G', 'o', 'o', 'd', '\0'}.
 *
 * In the main function create code that demonstrates that Your function works approrpiately.
 */
#include <stdio.h>
#include <stdlib.h>


void main()
{
    char array[6][10] = {"Good","Morning","Vietnam", "by", "Robin", "Williams"};
    int size = sizeof(array)/sizeof(array[0]);
    int num_array[size];

    for(int i = 0; i < size; i++){
        num_array[i] = strlen(array[i]);
        printf("%d, ", num_array[i]);
    }
}

/*
 * Create 9 arrays of characters, each should contain a word.
 * Let it be this: The Quick brown Dog jumps over the Lazy Fox.
 * Create an array of 9 pointers of chractrer type.
 * Make it so, that each pointer points to one of the words. Meaning to one of the original arrays You just created.
 * So You'll have a pointer pointing to each of these original arrays in an array of pointers.
 * Print them out, each in a new line using this array of pointers.
 * Now make it so, that the Fox is Green and he jumps over the lazy dog.
 * Use the existing arrays to achive this.
 * Print it out again.
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char arr0[] = "The";
    char arr1[] = "quick";
    char arr2[] = "green";
    char arr3[] = "dog";
    char arr4[] = "jumps";
    char arr5[] = "over";
    char arr6[] = "the";
    char arr7[] = "lazy";
    char arr8[] = "fox";


    char *ptr[9];

    ptr[0] = arr0;
    ptr[1] = arr1;
    ptr[2] = arr2;
    ptr[3] = arr3;
    ptr[4] = arr4;
    ptr[5] = arr5;
    ptr[6] = arr6;
    ptr[7] = arr7;
    ptr[8] = arr8;

    for(int i = 0; i < 9; i++){
        printf("%s\n", ptr[i]);
    }

    ptr[3] = arr8;
    ptr[8] = arr3;

    printf("\n");


    for(int i = 0; i < 9; i++){
        printf("%s\n", ptr[i]);
    }


}

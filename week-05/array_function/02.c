/*
 * Create a function that takes two arrays of characters and a number.
 * It should replace the contents of the first array from the given index
 * with the contents of the second array.
 * The function should return a number which tells whether it was successful:
 *    * If all is right it should return 0.
 *    * If the index is out of bounds it should return -1.
 *    * If the inserted content would be longer than the receiving array it should return 1 and leave the array as it is.
 * IMPORTANT: Think about what kind of arguments You need to make this happen and craft the function accordingly.
 *
 * Write code in the main function to test all scenarios and write out the result You need to check whether this works.
 */
#include <stdio.h>
#include <stdlib.h>

int replacer(char arr1[], char arr2[], int a, int size1, int size2);

void main()
{
    char arr1[] = {'2','3','7','a','6','b','5','d'};
    char arr2[] = {'6','h','d','s','B',';','"','%'};
    int size1 = sizeof(arr1);
    int size2 = sizeof(arr2);
    srand ( time(NULL) );
    int num = rand() % 20;

    if (size1 == size2){
        printf("%d", replacer(arr1, arr2, num, size1, size2));
    }else
        printf("fuck");
}

int replacer(char arr1[], char arr2[], int a, int size1, int size2)
{
        if(a < size1 && a < size2){
            char *ptr = arr2;
            ptr[a] = arr1[a];
            return 0;
        }else
            return -1;
}

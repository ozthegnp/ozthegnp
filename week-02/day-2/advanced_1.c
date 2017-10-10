#include <stdio.h>

int main()
{
    int arr[50];

    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting

    int size = 0;
    printf("Type array size (max 50)");
    scanf("%d", &size);
    if (size > 50){
            while(size >50){
            printf("Number bigger than 50, please enter a new number:");
            scanf("%d", &size);
            }
    }else {

        char arry[size]; //asks for array size

        for (int i = 0; i <= size; i++) {//loads up int values
            arry[i] = i+1;
        }

        for (int j = 0; j < size; j++) {//prints int values
           printf("%d ", arry[j]);
        }
        printf("\n\n");

        int del = 0;
        printf("Which position would you like to delete? \n");
        scanf("%d", &del);

        for (int k = del-1; k < size; k++){
            arry[k] = arry[k+1];
        }

        size--;

        for (int m = 0; m < size; m++) {//prints int values
           printf("%d ", arry[m]);
        }
        printf("\n");
        printf("Position %d deleted.\n", del);

    }
}

int arry_sizer()

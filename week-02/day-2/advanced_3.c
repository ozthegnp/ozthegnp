#include <stdio.h>
// TODO: write a program wich asks for a number, that will be the real size of the array (20 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
    // Finally print all unique elements in array

int arry_sizer();

int main()
{
    int size = arry_sizer();
    int arry[size];
    //ARRAY FILLER

    for (int i = 0; i < size; i++) {
        int input = 0;
        printf("Add a number to position %d:", i);
        scanf("%d", &input);
        arry[i] = input;
    }

    //ARRAY PRINTER
    printf("Your array:\n");

    for (int j = 0; j < size; j++) {
    printf("%d ", arry[j]);
    }
    printf("\n\n");

    //DUPLICATE ELIMINATOR
    for(int di = 0; di < size; di++){
            for(int dj = 1; dj < size;){
                if(di != dj && arry[di] == arry[dj]){
                    for (int k = dj; k < size; k++){
                        arry[k] = arry[k+1];
                    }
                    size--;
                }else
                    dj++;
            }
    }

    //NEW ARRAY PRINTER
    printf("Unique values of array:\n");
    for (int m = 0; m < size; m++) {//prints int values
    printf("%d ", arry[m]);
    }
    printf("\n");

}

int arry_sizer(){//eliminates invalid numbers
int size = 0;
    printf("Type array size (max 20)");
    scanf("%d", &size);

    if (size > 20 || size <= 0){
            do {
            printf("Invalid number, please enter a new number between 1 and 20:");
            scanf("%d", &size);
            } while(size > 20 || size <= 0);
    }
    return size;
}

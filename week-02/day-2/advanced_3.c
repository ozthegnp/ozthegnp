#include <stdio.h>
    // TODO: write a program wich asks for a number, that will be the real size of the array (20 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
    // Finally print all unique elements in array
int arry_sizer();
void dup_deleter(int dup, int del_size);
int arry[20];

int main()
{

    int freq[20];
    int size = arry_sizer();

    //ARRAY FILLER
    char arry[size];

    for (int i = 0; i <= size; i++) {
        int num = 0;
        printf("Add a number to position %d:", i);
        scanf("%d", &num );
        arry[i] = num;
    }

    //ARRAY PRINTER
    for (int j = 0; j < size; j++) {
    printf("%d ", arry[j]);
    }
    printf("\n\n");

    //POSITION DELETER

    for(int k = 0; k < size; k++){
        for(int l = 0; l < size;l++){
            if(arry[k] == arry[l]){
                dup_deleter(k, size);
                size--;
            }
        }
    }

    //NEW ARRAY PRINTER
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

void dup_deleter(int dup, int del_size){;

    for (int k = dup-1; k < del_size; k++){
        arry[k] = arry[k+1];
    }
}

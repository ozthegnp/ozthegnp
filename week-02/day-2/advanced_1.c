#include <stdio.h>

int arry_sizer();
int pos_deleter(int max_del);

int main()
{
    int size = arry_sizer();
    int arry[size];

    //ARRAY UPLOADING
    for (int i = 0; i <= size; i++) {
        arry[i] = i+1;
    }

    for (int j = 0; j < size; j++) {
    printf("%d ", arry[j]);
    }
    printf("\n\n");

    //POSITION DELETER
    int pos_del = pos_deleter(size);
    for (int k = pos_del-1; k < size; k++){
        arry[k] = arry[k+1];
    }
    size--;

    //NEW ARRAY PRINTER
    for (int m = 0; m < size; m++) {//prints int values
    printf("%d ", arry[m]);
    }
    printf("\n");
    printf("Position %d deleted.\n", pos_del);
}

int arry_sizer(){//eliminates invalid numbers
int size = 0;
    printf("Type array size (max 50)");
    scanf("%d", &size);

    if (size > 50 || size <= 0){
            do {
            printf("Invalid number, please enter a new number between 1 and 50:");
            scanf("%d", &size);
            } while(size > 50 || size <= 0);
    }
    return size;
}

int pos_deleter(int max_del){
int del = 0;
    printf("Which position would you like to delete? \n");
    scanf("%d", &del);

    if (del > max_del || del <= 0){
            do {
            printf("Invalid number, please enter a new number between 1 and %d:", max_del);
            scanf("%d", &del);
            } while(del > max_del || del <= 0);
    }
    return del;
}

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
        arry[i] = i+2;
    }

    //PRIME FINDER
    for(int di = 0; di < size; di++){
            for(int dj = di+1; dj < size;){
                if(arry[dj] % arry[di] == 0){
                    for (int k = dj; k < size; k++){
                        arry[k] = arry[k+1];
                    }
                    size--;
                }else
                    dj++;

            }
    }

    //NEW ARRAY PRINTER
    printf("The primes are:\n");
    for (int m = 0; m < size; m++) {//prints int values
    printf("%d \t", arry[m]);
    }
    printf("\n");

}

int arry_sizer(){//eliminates invalid numbers
int size = 0;
    printf("Show primes until:");
    scanf("%d", &size);

    if (size <= 0){
            do {
            printf("Invalid number, please enter a positive number:");
            scanf("%d", &size);
            } while(size <= 0);
    }
    return size-1;
}

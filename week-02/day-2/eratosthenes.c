#include <stdio.h>

unsigned long int arry_sizer();

int main()
{
    unsigned long int size = arry_sizer();
    unsigned long int arry[size];
    //ARRAY FILLER

    for (unsigned long int i = 0; i < size; i++) {
        arry[i] = i+2;
    }

    //PRIME FINDER
    for(unsigned long int di = 0; di < size; di++) {
            for(unsigned long int dj = di+1; dj < size;) {
                if(arry[dj] % arry[di] == 0){
                    for (unsigned long int k = dj; k < size; k++) {
                        arry[k] = arry[k+1];
                    }
                    size--;
                } else
                    dj++;
            }
    }

    //PRIME PRINTER
    printf("The primes are:\n");
    for (unsigned long int m = 0; m < size; m++) {//prints int values
    printf("%d \t", arry[m]);
    }
    printf("\n");
}

unsigned long int arry_sizer() //eliminates invalid numbers
{
  unsigned long int size = 0;
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

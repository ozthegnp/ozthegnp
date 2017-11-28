/*
 * Create an array of integers. Make it 16 long. Fill itnup with numbers as You wish. Print them out.
 *     * Iterate over it with a pointer so, that You only get to each _second_ element. Print out only these.
 *     * Iterate over it only touching each _fourth_ element. Print out only these.
 *     * Iterate over it only touching each _eighth_ element. Print out only these.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printer(int *ptr, int size, int jump);//jump indicates how many should it jump

int main()
{
    srand ( time(NULL) );
    int numbers[16];
    int *ptr = numbers;
    int size = sizeof(numbers)/sizeof(numbers[0]);

    for(int i = 0; i < size; i++){
        *(ptr+ i) = rand() % 100;
    }

    printer(ptr, size, 1);
    printer(ptr, size, 2);
    printer(ptr, size, 4);
    printer(ptr, size, 8);

    return 0;
}
void printer(int *ptr, int size, int jump)
{
    printf("array\taddress\t\tvalue\n");
    printf("-------------------------\n");
    for(int i = 0; i < size; i += jump){
        printf("%d\t\t%x\t%d\n", i, ptr + i, *(ptr + i));
    }
    printf("\n");
}

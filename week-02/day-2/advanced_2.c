#include <stdio.h>
#include <limits.h>
int main()
{
	int number_array[10] = {48, 59, -2, -8, 55, 56, 78, 12, 98, -20};
    int relation = 0;

    //BUBBLE SORTING
    do {
        for (int i = 0; i < sizeof(number_array)/sizeof(number_array[0]); i++){
            if (number_array[i] > number_array[i + 1]){
                int z = number_array[i];
                number_array[i] = number_array[i + 1];
                number_array[i + 1] = z;
            }
        }
        relation = 0;
        for (int k = 0;k < sizeof(number_array)/sizeof(number_array[0]); k++ )
            if (number_array[k] > number_array[k + 1])
            relation++;
    } while( relation != 0);

    //PRINT ALL NUMBERS
    for (int j = 0; j< sizeof(number_array)/sizeof(number_array[0]); j++){
        printf("%d ", number_array[j]);
    }

    int arry_size = sizeof(number_array)/sizeof(number_array[0]);
    //PRINT HIGHEST
    printf("\n%d and %d are the highest numbers", number_array[arry_size-2], number_array[arry_size-1]);



	//TODO:
	// Write a C program to find the two largest element in an array using only 1 for loop
	// From <limits.h> use INT_MIN: this is the least integer

	return 0;
}

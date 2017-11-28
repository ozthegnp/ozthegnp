/*
* Use the union type we've defined below to write out the integer array nums
* as if it was an array of characters;
* Use pointer arithmethircs to iterate over the array with the ptr.
*/

#include <stdio.h>

typedef union {
    int* asInt;
    char* asChar;
} ptr;

int main(){

    int nums[] = { 1952540759, 544171040, 1685221239, 1869573152, 1768693867, 1847616875, 1700949365, 4158322};

    ptr p_numbers;

    p_numbers.asInt = nums;

    for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){
        printf("%d\n", *(p_numbers.asInt + i));
    }
    printf("\n");
    for(int i = 0; i < sizeof(nums)/sizeof(char); i++){
        printf("%c", *(p_numbers.asChar + i));
    }

    return 0;
}

/*
 * Create a structure to represent a list of numbers. The structure should know how many nuber it has stored.
 * Store the numbers in an array.
 * Create functions to:
 *    * Add a new number at the end.
 *    * Get a number at a given index.
 *    * Replace a number at a given index if it exists.
 *
 * If the array is too smal, create a new one, copy everything into it, add the new element and delete the old array.
 *
 * Test in the main function whether everything works.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int number;
} number_s;

void number_printer(number_s number[], int size);
void number_adder(number_s number[], int *size);
void index_printer(number_s number[]);
void index_change(number_s number[]);

void main()
{
    number_s numbers[50];
    int size = 0;
    char cmd[3];


    while(1){
        printf("enter command:");
        gets(cmd);

        if(strcmp(cmd, "ad") == 0)
            number_adder(numbers, &size);
        else if(strcmp(cmd, "pr") == 0)
            number_printer(numbers, size);
        else if(strcmp(cmd, "in") == 0)
            index_printer(numbers);
        else if(strcmp(cmd, "ch") == 0)
            index_change(numbers);
        else
            printf("invalid:\n");


    }
}

void number_printer(number_s number[], int size)
{
    for(int i = 0; i < size; i++)
        printf("[%d] - %d\n", i, number[i].number);
}

void number_adder(number_s number[], int *size)
{
    int new_num = 0;
    printf("add new number:\n");
    scanf("%d", &new_num);
    getchar();
    number[*size].number = new_num;
    *size += 1;
}

void index_printer(number_s number[])
{
    int idx = 0;
    printf("Which index you want?");
    scanf("%d", &idx);
    getchar();
    printf("[%d] - %d\n", idx, number[idx].number );
}
void index_change(number_s number[])
{
    int idx = 0;
    printf("Which index you want to change?\n");
    scanf("%d", &idx);
    getchar();
    printf("What is the new value?\n");
    scanf("%d", &number[idx].number);
    getchar();
    printf("[%d] is now %d\n", idx, number[idx].number );
}

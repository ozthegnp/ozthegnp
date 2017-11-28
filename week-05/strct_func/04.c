/*
 * Extend the previous exercise by adding a function that sorts the numbers in a descending order. This function should take
 * the Structure as the first argument as well.
 *
 * Create an enum whit two values: SORT_ASC, SORT_DESC.
 * Create a functions which takes the structure as the first argument and takes the enum as the second and sorts the
 * elements in the structure accordingly, using the other two functions.
 *
 * Test them in the main function. Demonstrate they work.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int number;
} number_s;

enum sort{SORT_ASC, SORT_DESC};

void number_printer(number_s number[], int size);
void number_adder(number_s number[], int *size);
void index_printer(number_s number[]);
void index_change(number_s number[]);
void sorter_asc(number_s number[], int size);
void sorter_dsc(number_s number[], int size);
void sort(number_s number[], int size);

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
        else if(strcmp(cmd, "so") == 0)
            sort(numbers, size);
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

void sorter_asc(number_s number[], int size)
{
    int temp = 0;
    int flag = 2;
    while(flag > 0){
        flag = 0;
        for(int i = 0; i < size - 1; i++){
            if(number[i].number > number[i+1].number){
                temp = number[i].number;
                number[i].number = number[i + 1].number;
                number[i + 1].number = temp;
                flag++;
            }
        }
    }
}

void sorter_dsc(number_s number[], int size)
{
    int temp = 0;
    int flag = 2;
    while(flag > 0){
        flag = 0;
        for(int i = 0; i < size - 1; i++){
            if(number[i].number < number[i+1].number){
                temp = number[i].number;
                number[i].number = number[i + 1].number;
                number[i + 1].number = temp;
                flag++;
            }
        }
    }
}

void sort(number_s number[], int size)
{
    int idx = 0;
    printf("Which way you want to change?0 = ASC, 1 = DSC\n");
    scanf("%d", &idx);
    getchar();
    if(idx == SORT_ASC)
        sorter_asc(number, size);
    else if(idx == SORT_DESC)
        sorter_dsc(number, size);
    else
        printf("suck it, bad number\n");
}

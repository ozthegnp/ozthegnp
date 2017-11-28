/*
 * Take an array of characters, for example this: "In the year 2525, If man is still alive... In the Year 3535, In the Year 4545"
 * Create a function that takes an array of characters as an input, and a single character.
 * It should return all the indexes when teh character appears in an array of integers. Where the first number of the array
 * is how many occurrences of the character there are.
 *
 * Example: for the input ("Where is my cat? He?", 'e') the output should be: {3,2,4,18}
 *
 * Create a main function where You can test this function.
 */

#include <stdio.h>
#include <stdlib.h>

int year_check(char str[], char a, int *index);


void main()
{
    char string[] = "In the year 2525, If man is still alive... In the Year 3535, In the Year 4545";
    char a = 'e';
    int index[20];

    printf("In the year 2525, If man is still alive... In the Year 3535, In the Year 4545\n");

    year_check(string, a, index);

    for(int i = 0; i < year_check(string, a, index); i++){
        printf("%d, ", index[i]);
    }

}

int year_check(char str[], char a, int *index)
{
    int position = 1;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == a){
            index[position] = i;
            position++;
        }
    }

    index[0] = position - 1;

    return position;
}

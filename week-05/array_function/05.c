/*
 * Take this array of characters: "2319834571976548721b1992456t831977451963782"
 * Create a function that takes an array of characters as the input. (Test it with the one above).
 * It should return an array of integers. Each representing a valid birthdate year extracted from
 * the string of characters. (A valid boirthyear is either 19??, 20?? or 21??)
 * The 0th element of the returned array should be the number of valid birthyears found. Then there should be
 * the birthyears in each element.
 *
 * Create a main function to test this and print out the birthyears in a new line each.
 */

#include <stdio.h>
#include <stdlib.h>

int year_check(char str[], int *year);

void main()
{
    char string[] = "2319834571976548721b1992456t831977451963782";
    int year[10];

    year_check(string, year);

    for(int i = 0; i < year_check(string, year); i++ )
        printf("%d\n", year[i]);
}

int year_check(char str[], int *year)
{
    char temp[] ="0000";
    int k = 0;
    int count = 1;
    for (int i = 0; i < strlen(str) - 4; i++){
        k = 0;
        for(int j = i; j < (i + 4); j++){
            temp[k] = str[j];
            k++;
        }
        if(atoi(temp) > 1900 && atoi(temp) < 2017){
            year[count] = atoi(temp);
            count++;
        }
    }
    year[0] = count - 1;
    return count;
}

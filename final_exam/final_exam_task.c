#include <stdio.h>
#include <string.h>

/* Oscar Mateo
 * Final exam
 * 2018 02. 02.
 * Task 2: Create a function that reverses a string
 */

 //prototyping function
void reverse_string(char string[], int length);

int main() {
  char string[255];
    puts("Enter a string:");
    gets(string);

    //Determing the length of the string and storing it in a variable
    int string_length = (int) strlen(string);

    //Passing the string and the length to the function
    reverse_string(string, string_length);

    return 0;
}

void reverse_string(char string[], int length)
{
    printf("Your string reversed is:\n");

    for(int i = length - 1; i >= 0; i--){
        printf("%c", string[i]);
        //adding an extra \n to make the string look nice
        if(i == 0){
            printf("\n");
        }
    }

}

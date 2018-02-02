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

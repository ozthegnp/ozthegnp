/*
 * Check out the following code.
 * Read it for Yourself, decode what is happening here.
 *
 */

#include <stdio.h>

int main(){
    int integers[] = {12,23,34,45,56,67,78,89,90};//array of integers
    int* apointer = integers;//a pointer that points to the arrays first element
    printf("address\t\tvalue\n%p\t%d\n",apointer, *apointer);//prints ot the first elements value and adress
    apointer+=3;//adds 3 to the ADDRESS of the pointer
    printf("%p\t%d\n",apointer, *apointer);//therefore we get the 3rd element
    printf("-------------------------------\n\n");//prints out a weird line

    for(int* ptr = integers; ptr-integers < 9; ptr++){
        printf("%p\t%d\n", ptr, *ptr);//prints all the elements with address
    }
    return 0;
}

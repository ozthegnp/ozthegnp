#include <stdio.h>
#include <string.h>



int main ()
{
	char string[55] ="This is a string for testing";

	//TODO: write a program, which lists all position where character 'i' is found

	for(int i = 0; i < strlen(string); i++){
        if(string[i] == 'i')
            printf("There is an %c at position %d\n", string[i],i);
	}

	return 0;
}

#include <stdio.h>

int my_strlen(char *string);

int main()
{
	char my_string[50] = "Hello world!";

	printf("strlen of my_string: %d", my_strlen(my_string));

	//TODO: implement your own strlen function.

	return 0;
}

int my_strlen(char *string)
{
    int count = 0;
    for(int i = 1; i < 50; i++){
        count++;
        if(string[i] == '\0')
        break;
    }

    return count;
}

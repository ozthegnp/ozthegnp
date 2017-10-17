#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "This is a sample string";
    char *first = 0;
    char *last = 0;

	//TODO: write a program which prints out the distance between the first and last occurance of character 's'
    for(int i = 0; i < strlen(str);i++)
        if(str[i] == 's'){
            if(first == 0){
                first = i;
            }else
            last = i;
        }

        printf("the distance between the first and last 's' are: %d characters", last-first);

    return 0;
}

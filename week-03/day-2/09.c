#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include "functions.h"

void help();

void set_cursor_pos(int x, int y);
void clrscr();

int main()
{
    help();

    char command[256];
    char *strx;
    char *stry;
    char *function;
    long x, y;

    while(strcmp(command, "exit") != 0) {

        printf("Enter your calculation: ");
        gets(command);

        strx = strtok(command, " ");
        function = strtok(NULL, " ");
        stry = strtok(NULL, " ");
        x = strtol(strx, NULL, 10);
        y = strtol(stry, NULL, 10);

        if(strcmp(function, "+") == 0){
            printf("= %.2f\n", addition(x, y));
        } else if(strcmp(function, "-") == 0){
            printf("= %.2f\n", subtraction(x, y));
        } else if(strcmp(function, "*") == 0){
            printf("= %.2f\n", multiplication(x, y));
        } else if(strcmp(function, "/") == 0){
            printf("= %.2f\n", division(x, y));
        } else if(strcmp(function, "%") == 0){
            printf("= %d\n", modulo(x, y));
        } else if(strcmp(function, "^") == 0){
            printf("= %.2f\n", power(x, y));
        } else if(strcmp(function, "<") == 0){
            printf("~= %d\n", root(x, y));
        } else if(strcmp(function, "log") == 0){
            printf("= %.1f\n", logarithm(x, y));
        } else if(strcmp(function, "binto") == 0){
                if(y == 10)
                    printf("= %d\n", binto(strx, y));
                else if (y == 16)
                    printf("= %x\n", binto(strx, y));
                else
                  printf("!!!Invalid number, please type '10' or '16' after 'binto'!!!\neg. 1001 binto 10 = 9\n");

        } else if(strcmp(function, "hexto") == 0){
            printf("= %.1f\n", logarithm(x, y));
        }
    }

}

void help()
{

    printf("\n\n    	CLI Calculator\n");
    printf("====================================\n");
    printf("usage: [number] [operation] [number]\n");
    printf("Commands:\n\n");
    printf(" +	addition\n");
    printf(" -	subtraction\n");
    printf(" *	multiplication\n");
    printf(" /	division\n");
    printf(" %	division with remainder\n");
    printf(" ^	power\n");
    printf(" <	square root\n");
    printf(" log	logarithm\n");
    printf(" binto	binary to hex or dec\n");
    printf(" hexto	hexadecimal to bin or dec\n");
    printf(" decto	decimal to bin or hex\n");
    printf(" ====================================\n");
    printf(" exit	exiting from the program\n");
    printf(" clear	clear the screen\n");
    printf(" help	print usage\n");
    printf(" ====================================\n");
    printf(" Hit enter to start!\n");
    printf(" ====================================\n");
    getchar();
    clrscr();
}

void set_cursor_pos(int x, int y)
{
	printf("\033[%d;%dH", y+1, x+1);
}

void clrscr()
{
    system("@cls||clear");
}

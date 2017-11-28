#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

void clrscr();
void help();

int main()
{
    char command[256];
    char *strx;
    char *stry;
    char *function;
    char *ptr;
    double x = 0;
    double y = 0;
    int line_count = 1;

    help();

    while(line_count >= 0) {

        printf("Enter your command: ");
        gets(command);

        int space_count = space_counter(command);

        if(strcmp(command, "clear") == 0) {
            clrscr();
            line_count = 0;
        }else if(strcmp(command, "exit") == 0) {
            break;
        }else if(strcmp(command, "help") == 0) {
            help();
            line_count = 0;
        }else if (space_count == 2){

            set_cursor_pos(strlen(command) + 21, line_count);

            strx = strtok(command, " ");
            function = strtok(NULL, " ");
            stry = strtok(NULL, " ");

            x = strtod(strx, NULL);
            y = strtod(stry, NULL);

                    if(isitdigit(stry) == 1 && strcmp(function, "hexto") == 0) {

                            if(y == 10)
                                printf("= %d\n", hexto(strx, y));
                            else if (y == 2)
                                printf("= %li\n", dectobin(hexto(strx, y)));
                            else
                                      printf("Error. Type '2' or '10' after 'hexto'.\n");

                    } else if(isitdigit(stry) == 1 && isitdigit(strx) == 1) {

                            if(strcmp(function, "+") == 0){
                                    printf("= %.2f\n", addition(x, y));

                            } else if(strcmp(function, "-") == 0){
                                    printf("= %.2f\n", subtraction(x, y));

                            } else if(strcmp(function, "*") == 0){
                                    printf("= %.2f\n", multiplication(x, y));

                            } else if(strcmp(function, "/") == 0) {
                                printf("= %.2f\n", division(x, y));
                                    if(y == 0){
                                        printf(" Oh-oh! you divided by zero! Don't do that.\n");
                                         line_count++;
                                    }
                            } else if(strcmp(function, "%") == 0) {
                                    printf("= %d\n", modulo(x, y));

                            } else if(strcmp(function, "^") == 0) {
                                    printf("= %d\n", power(x, y));

                            } else if(strcmp(function, "<") == 0) {
                                    printf("~= %d\n", root(x, y));

                            } else if(strcmp(function, "log") == 0) {
                                    printf("= %.1f\n", logarithm(x, y));

                            } else if(strcmp(function, "binto") == 0) {
                                    if(bincheck(strx) == 0) {
                                            if(y == 10)
                                                printf("= %d\n", binto(strx, y));
                                            else if (y == 16)
                                                printf("= %x\n", binto(strx, y));
                                            else
                                                printf("Error. Type '10' or '16' after 'binto'.\n");
                                    } else
                                        printf("Error. '%.f' is not binary\n", x);

                            } else if(strcmp(function, "decto") == 0) {

                                    if(y == 2)
                                        printf("= %li\n", dectobin(x));

                                    else if (y == 16)
                                        printf("= %x\n", x);

                                    else
                                      printf("Error. Type '2' or '16' after 'decto'.\n");

                            } else
                                errormsg();

                        } else
                            errormsg();

            line_count++;
            } else{
                errormsg();
            line_count += 2;
            }
    }
}

void help()
{

    printf("\n\n    	CLI Calculator\n"
    "====================================\n"
    "usage: [number] [operation] [number]\n"
    "Commands:\n\n"
    " +	addition\n"
    " -	subtraction\n"
    " *	multiplication\n"
    " /	division\n"
    " %	division with remainder\n"
    " ^	power\n"
    " <	square root\n"
    " log	logarithm\n"
    " binto	binary to hex or dec\n"
    " hexto	hexadecimal to bin or dec\n"
    " decto	decimal to bin or hex\n"
    " ====================================\n"
    " exit	exiting from the program\n"
    " clear	clear the screen\n"
    " help	print usage\n"
    " ====================================\n"
    " Hit enter to start!\n"
    " ====================================\n");
    getchar();
    clrscr();
}

void clrscr()
{
    system("@cls||clear");
}

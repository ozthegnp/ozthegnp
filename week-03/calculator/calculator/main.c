#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include "functions.h"

void help();

void set_cursor_pos(int x, int y);
void clrscr();
int space_counter(char word[]);
int line_count = 1;

int main()
{
    help();

    char command[256];
    char *strx;
    char *stry;
    char *function;
    long x, y;

    while(1) {

        printf("Enter your command: ");
        gets(command);

        int space_count = space_counter(command);

        if(strcmp(command, "clear") == 0){
            clrscr();
            line_count = 0;
        }else if(strcmp(command, "exit") == 0){
            break;
        }else if(strcmp(command, "help") == 0){
            help();
        }else if (space_count == 2){
                    set_cursor_pos(strlen(command) + 21, line_count);
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
                            if(y == 0){
                                printf(" Oh-oh! you divided by zero! Don't do that.\n");
                                 line_count++;
                            }
                    } else if(strcmp(function, "%") == 0){
                        printf("= %d\n", modulo(x, y));
                    } else if(strcmp(function, "^") == 0){
                        printf("= %d\n", power(x, y));
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
                              printf("Invalid number. Start with a binary number and type '10' or '16' after 'binto'.\n");

                    } else if(strcmp(function, "hexto") == 0){
                            if(y == 10)
                                printf("= %d\n", hexto(strx, y));
                            else if (y == 2)
                                printf("= %d\n", dectobin(hexto(strx, y)));
                            else
                              printf("Invalid number. Start with a hexadecimal number and type '2' or '10' after 'hexto'.\n");

                    }else if(strcmp(function, "decto") == 0){
                            if(y == 2)
                                printf("= %d\n", dectobin(x));
                            else if (y == 16)
                                printf("= %x\n", x);
                            else
                              printf("Invalid number. Start with a decimal number and type '2' or '16' after 'decto'.");

                    }else
                    printf("Invalid command!!");

                    line_count++;
            } else{
            printf("Invalid command. Type 'help' if you're confused about this awesome calculator.\n");
            line_count += 2;
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
int space_counter(char word[])
{
    int counter = 0;
    for(int i = 0; i < strlen(word);i++){
        if(word[i] == ' ')
            counter++;
    }
    return counter;
}


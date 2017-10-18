#include <stdio.h>
#include <stdio.h>

void help();
float addition(float a, float b);
void set_cursor_pos(int x, int y);
void clrscr();


int main()
{
    help();

    char command[256];
    char x = '0', y = '0';
    char *token;


    printf("Enter your calculation: ");
    gets(command);

        token = strtok(command, " ");

            while(token != NULL){
                int i = token;
                printf("%s\n", token);
                token = strtok(NULL, " ");
               // set_cursor_pos(0,0);
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
    printf(" ^	squaring\n");
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
float addition(float a, float b)
{
    return a + b;
}
void set_cursor_pos(int x, int y)
{
	printf("\033[%d;%dH", y+1, x+1);
}

void clrscr()
{
    system("@cls||clear");
}


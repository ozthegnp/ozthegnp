#include <stdio.h>
#include <stdio.h>

void help();
float addition(float add1, float add2);
float subtraction(float sub1, float sub2 );
float multiplication(float mul1, float mul2 );
float division(float div1, float div2 );
int modulo(int mod1, int mod2 );


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
            printf("= %.2f\n", addition(x,y));
        }else if(strcmp(function, "-") == 0){
            printf("= %.2f\n", subtraction(x,y));
        } else if(strcmp(function, "*") == 0){
            printf("= %.2f\n", multiplication(x,y));
        }else if(strcmp(function, "/") == 0){
            printf("= %.2f\n", division(x,y));
        }else if(strcmp(function, "%") == 0){
            printf("= %.2f\n", modulo(x,y));
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
float addition(float add1, float add2)
{
    return add1 + add2;
}
float subtraction(float sub1, float sub2 )
{
    return sub1 - sub2;
}
float multiplication(float mul1, float mul2 )
{
    return mul1 * mul2;
}
float division(float div1, float div2 )
{
    return div1 / div2;

}
int modulo(int mod1, int mod2 )
{
    return mod1 % mod2;

}

void set_cursor_pos(int x, int y)
{
	printf("\033[%d;%dH", y+1, x+1);
}

void clrscr()
{
    system("@cls||clear");
}

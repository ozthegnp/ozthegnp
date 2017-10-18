
void help();
int addition(char );

int main()
{
    help();
    char command[256];
    char x = '0', y = '0';
    char *token;
    while(strcmp(command, "exit") != 0){
        Printf("\nEnter your calculation: ");
        gets(command);

        token = strtok(command, " ");

            while(token != NULL){
                printf("%s\n", token);
                token =strtok(NULL, " ");
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
}
int addition(){
}

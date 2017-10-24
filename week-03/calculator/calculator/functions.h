
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

int power(int pow1, int pow2 )
{
    return pow(pow1, pow2);
}

int root(int r, int n)
{
    return pow(r, 1./n);
}

float logarithm(float log1, float log2 )
{
    return log(log2)/log(log1);
}

int binto(char *binto1, int binto2)
{
        return strtol(binto1, NULL, 2);
}

int hexto(char *hex1, int hex2)
{
        return strtol(hex1, NULL, 16);
}

long long int dectobin(long long int dec)
{
    if (dec == 0) {
        return 0;
    }
    else {
        return (dec % 2 + 10 * dectobin(dec / 2));
    }
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
int isitdigit(char str[])
{
    int result = 1;

    for (int i=0;i<strlen(str); i++) {
        if (str[i] < 45 || str[i] > 57 || str[i] == 47){
            return result = 0;
            break;
        }
    }

    return result;
}
void errormsg()
{
    printf("Error. Type 'help' if confused.\n");

}
int bincheck(char num[])
{
    int bin_count = 0;
    for (int i = 0; i < strlen(num); i++){

        if(num[i] == '0'|| num[i] == '1'){
            bin_count++;
        }
    }
    return strlen(num)-bin_count;

}
int isithex(char str[])
{
    int result = 1;

    for (int i=0;i<strlen(str); i++) {
        if (str[i] < 45 || str[i] > 57 || str[i] == 47){
            result = 0;
        }
    }
    return result;
}

void set_cursor_pos(int x, int y)
{
	printf("\033[%d;%dH", y+1, x+1);
}

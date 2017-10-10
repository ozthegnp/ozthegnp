#include <stdio.h>
#include <string.h>

void func();

int main()
{
    func();

    return 0;
}

void func(){

    int num = 0;
    char name[255];

    printf("Tell me a number: ");
    scanf("%d[^\n]", &num);
    printf("Your number is %d\n", num);
    gets(name);

    puts("Now tell me your name: ");
    gets(name);
    printf("Your name is: " );
    puts(name);

}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0;
    printf("\n === Armstrong number checker ===\n\nPlease enter a number:");
    scanf("%d", &a);
    int exp = 1;
    int digitcounter = a;
    //digit counter
    while(digitcounter/10 != 0){
        digitcounter /= 10;
        exp++;
    }
    //power adder
    int value = 0;
    int k = 1;
    int total = 0;

        for(int i = 1;i <= exp; i++){
            value = ((a % (k*10) - (a % k))/k );
            k *= 10;
                    int result = value;//power calculator
                    for (int j = 1; j <exp; j++){
                            result = result*value;
                        }
            total += result;
        }

    if(total == a) {
            printf("%d is an Armstrong Number! Good job!\n", a);
    } else {
                    printf("%d is NOT an Armstrong Number! :( Try again\n", a);
    }

    return 0;
}

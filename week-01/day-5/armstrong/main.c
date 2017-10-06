#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a = 371;
    int exp = 1;
    int counter = a;

    while(counter/10 != 0){
        counter /= 10;
        exp++;
    }

    int value = 0;
    int k = 1;
    int total = 0;

        for(int i = 1;i <= exp; i++){
            value = ((a % (k*10) - (a % k))/k );
            printf("%d",value);
            k *= 10;

                int result = value;
                for (int i = 1; i <exp; i++){
                    result = result*value;
                }

            printf("%d ", result);

            total += value;
        }

    printf("\n %d", total);

    return 0;
}

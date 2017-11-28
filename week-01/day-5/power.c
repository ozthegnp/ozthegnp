#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base = 3;
    int pwr = 3;
    int result = base;

    if(pwr == 0){
        result = 1;
    }else{
        for (int i = 1; i <pwr; i++){
            result = result*base;
        }
    }
    printf("%d", result);

    return 0;
}

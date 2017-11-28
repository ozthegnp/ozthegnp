#include <stdio.h>
#include <stdlib.h>

/*
write a simple program which can help you decide is it hot enough to turn on the AC or not
for example if temperature 20 or less the output is :
it is too cold for the AC
or, the temperature is between 21-24:
it is up to you to turn on the AC
...
*/

int main()
{
    int temp = 30;

    if(temp <= 20){
        printf("too cold 4 ac");
    }else if(temp > 20 && temp <25){
        printf("you decide");
    }else{
        printf("turn that sh*t on!!");
    }
    return 0;
}

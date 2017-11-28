#include <stdio.h>
#include <limits.h>

int main()
{
    //write a program which loads up fully a 50-sized integer array starting from 200 in descending order
    //but your array should contain elements which are divisible by 5 and 17
    //print out the array

    int my_array[50];
    int i = 0;

        for(int k = 200; k > -30770; k--) {
            if(k % 85 == 0) {
                    my_array[i] = k;
                    i++;
            }
        }
        for (int j = 0; j < 50; j++){
            printf("%d: %d\n", j + 1, my_array[j]);
        }
    return 0;
}

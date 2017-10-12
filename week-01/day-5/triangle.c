#include <stdio.h>

/*create a simple program which generates a triangle like this:
1
22
333
4444
55555
666666
7777777
if you change the rows variable the output should be different as well
*/
int main()
{

    printf("\n=== The triangle maker ===\n");

    int rows = 0;

    printf("How many rows would you like? ");
    scanf("%d", &rows);


    for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= i; j++){
                printf("%d", i);
            }
            printf("\n", i);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
	int j1 = 10;
	int j2 = 3;
	int j2sq = pow(j2,2);
	int j2cb = pow(j2,3);
        printf(" j1 =%d \n", j1);
        printf(" j2 = %d \n", j2);
        printf("Is j1  larger than j2^2 and smaller than j2^3? \n");

        if((j1 > j2sq) & (j1<j2cb)) {
                printf(" Yes, j1 is larger than j2^2 and smaller than j2^3 \n");
        } else {
                printf("No!");
        }
// tell if j1 is higher than j2 squared and smaller than j2 cubed
	return 0;
}

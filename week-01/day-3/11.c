#include <stdio.h>
#include <math.h>


int main() {
	int k = 1521;
	int dv1 = 3;
	int dv2 = 5;

	int division1 = k % dv1;
	int division2 = k % dv2;
	printf("The remainder of %d / %d is %d \n", k, dv1, division1);
    printf("The remainder of %d / %d is %d \n", k, dv2, division2);
    if ((division1 == 0) && (division2 == 0)){
        printf("Therefore %d and %d are divisors of %d \n", dv1, dv2, k);
    } else {
        printf("Therefore %d and %d are NOT divisors of %d at the same time.\n", dv1, dv2, k);

    }

	// tell if k is dividable by 3 or 5
	return 0;
}

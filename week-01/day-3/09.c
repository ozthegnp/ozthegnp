#include <stdio.h>
#include <math.h>

int main() {
	int i = 53625;
	printf("our number is: %d \n", i);
	int j = 11;
	int k;
    k = i % j;
	if(k == 0){
        printf(" %d is a divisor of %d \n", j, i);
	} else {
        printf(" %d is NOT a divisor of %d \n", j, i);

	}
	// tell if it has 11 as a divisor
	return 0;
}

#include <stdio.h>

int main() {
	int h1 = 350;
	int h2 = 20;
	printf("h1 = %d\n", h1);
    printf("h2 = %d\n", h2);
	if(h1 < (h2 * 2)){
            printf("h2's double is %d and it is bigger than h1", h2 * 2);

	} else{
	    printf("h2's double is %d and it is smaller than h1", h2 * 2);
	// tell if the double of h2 is bigger than h1
	}
	return 0;
}

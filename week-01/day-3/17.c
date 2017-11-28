#include <stdio.h>

int main() {
	float w = 24;
	int out = 0;
	int x = w;

	if ((x % 2) == 0){
        out = out + 1;
	}
	printf("out = %d", out);
	// if w is even increment out by one
	return 0;
}

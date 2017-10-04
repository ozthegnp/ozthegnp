#include <stdio.h>
#include <stdint.h>

int main() {
	int a = 654;
	uint64_t b = 654987312;
	printf(" %s \n", ((b % a) == 3) ? "true" : "false");
	printf("The remainder is %d", b % a);

	// Tell if the reminder of b devided by a is 3

	return 0;
}

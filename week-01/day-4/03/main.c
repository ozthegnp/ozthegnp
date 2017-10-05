#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t ad = 6;
	uint8_t num = 0;

	for (uint8_t num = 0 ; num <= ad ; num++) {
        printf(" %d \n", num);
	}
	// print the numbers till ad from 0
	return 0;
}

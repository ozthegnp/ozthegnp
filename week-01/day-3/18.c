#include <stdio.h>
#include <stdint.h>

int main() {
	uint16_t number = 254;
    uint8_t number8 = number;

    if (number > 255) {
        printf("longer than 8bits");
    } else {
        printf("ok");
    }

	// if number can't be represented with 8bits
	// print 'longer than 8bits' otherwise print 'ok'
	return 0;
}

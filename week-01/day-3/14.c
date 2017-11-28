#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t number = 254;
	uint8_t result;

	result = number + 23;
	printf(" %d \n", result);
	// Check the result with printf

 	// What happened?!
 	//Oscar: It overflows
	// Try again with different datatype
	uint16_t result_16 = number + 23;
	// Check the result with printf
    printf(" %d \n", result_16);
	// What happened and why?

	//-uint16_t has enough bits to store the number
	int8_t number_negative = number;
	// Check the result with printf
        printf(" %d\n", number_negative);

	// What happened and why?
	// 254 in binary is 11111101, in uint16_t that is -127+125

    return 0;
}

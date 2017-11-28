#include <stdio.h>
#include <stdint.h>

void printf_numbers(long from, long to)
{
	for (long i = from; i < to; i++)
		printf("%li,", i);
}

int main()
{
	printf_numbers(2147483600, 2147484600);
	return 0;
}

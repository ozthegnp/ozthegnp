#include <stdio.h>

/*
modify the previous program to print the table reverse order
for example:
Fahrenheit       Celsius
300               148.9
280               137.8
260               126.7
240               115.6
...
print out at least 10 lines
*/

int main() {
    int far;
    float cel;

    printf("Farenheit\tCelsius \n");
    for (int i = 30; i > 10; i -= 2) {
        far = i*10;
        cel = (far-32)/1.8;
    printf("%d\t\t%.1f\n", far, cel);

    }

	return 0;
}

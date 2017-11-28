#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
} complex;

void sum(complex n1, complex n2, complex *n3);
void mul(complex n1, complex n2, complex *n3);


//TODO: create 3 functions, which calculates the sum, subtraction and multiplication of a complex number.
// you can read about complex number's operations here: https://www.mathsisfun.com/numbers/complex-numbers.html

int main()
{
    complex n1, n2, n3;
    n1.real = 3;
    n1.imag = 2;

    n2.real = 1;
    n2.imag = 7;

    n3.real = 0;
    n3.imag = 0;

    sum(n1, n2, &n3);
    printf("(%.f + %.fi) + (%.f + %.fi)= %.f + %.fi\n", n1.real, n1.imag, n2.real, n2.imag, n3.real, n3.imag);
    mul(n1, n2, &n3);
    printf("(%.f + %.fi) * (%.f + %.fi)= %.f + %.fi", n1.real, n1.imag, n2.real, n2.imag, n3.real, n3.imag);

    return 0;
}

void sum(complex n1, complex n2, complex *n3)
{
    n3->real = n1.real + n2.real;
    n3->imag = n1.imag + n2.imag;

}

void mul(complex n1, complex n2, complex *n3)
{
    n3->real = n1.real * n2.real - n1.imag * n2.imag;
    n3->imag = n1.imag * n2.real + n1.real * n2.imag ;

}

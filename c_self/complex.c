// program to add two complex numbers using structure
#include <stdio.h>
#include <conio.h>

typedef struct complex
{
    int real;
    int img;
} complex;

int main()
{
    void inputComplex(complex *);
    void outputComplex(complex);
    complex addComplex(complex a, complex b); // returns the sum
    complex a, b, c;

    clrscr();
    printf("\nEnter the first complex number: \n");
    inputComplex(&a);
    printf("\nEnter the second complex number: \n");
    inputComplex(&b);

    // adding the numbers
    c = addComplex(a, b);

    outputComplex(a);
    printf(" + ");
    outputComplex(b);
    printf(" = ");
    outputComplex(c);
    printf("\n");
    getch();
    return 0;
}

void inputComplex(complex *a)
{
    printf("Enter real part: ");
    scanf("%d", &a->real);
    printf("Enter imaginary part: ");
    scanf("%d", &a->img);
}

void outputComplex(complex a)
{
    printf("(%d + i%d)", a.real, a.img);
}

complex addComplex(complex a, complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;

    return c;
}
#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 10, b = 20;
    int sum(int, int);
    printf("Before passsing: a= %d, b= %d", a, b);
    printf("\nThe sum of a and b is %d", sum(a, b));
    printf("\nAfter passing: a= %d, b= %d", a, b);
    getch();
}

int sum(int a, int b)
{
    int c = a + b;
    a = 30;
    b = 50;
    printf("\nIn function: a= %d, b= %d", a, b);
    return c;
}
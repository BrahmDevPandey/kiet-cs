#include <stdio.h>
#include <conio.h>

void main()
{
    int n, r, P, C;
    int factorial(int);

    clrscr();
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    P = factorial(n) / factorial(n - r);
    C = factorial(n) / (factorial(n - r) * factorial(r));
    printf("Permutation is: %d\n", P);
    printf("Combination is: %d\n", C);
    getch();
}

int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}
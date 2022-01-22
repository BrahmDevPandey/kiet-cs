#include <stdio.h>
#include <conio.h>

void main()
{
    int a, fact = 1, i;
    clrscr();
    printf("Enter any number: ");
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial: %d\n", fact);
    getch();
}
#include <stdio.h>
#include <conio.h>
#include <math.h>

int fact(int);
int power(int);
int sum_digits(int);

void main()
{
    int a, b, c, ch;

    clrscr();
    printf("1. Factorial\n");
    printf("2. Power\n");
    printf("3. Sum of Digits of Number\n");
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    printf("Enter any Number: ");
    scanf("%d", &a);

    switch (ch)
    {
    case 1:
    {
        c = fact(a);
        break;
    }
    case 2:
    {
        c = power(a);
        break;
    }
    case 3:
    {
        c = sum_digits(a);
        break;
    }
    default:
    {
        printf("Invalid Choice\n");
        return;
    }
    }
    printf("Result is %d\n", c);
    getch();
}

int fact(int a)
{
    int i, fact = 1;
    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int power(int a)
{
    int b, i, l = 1;
    printf("Enter another Number: ");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        l = l * a;
    }
    return l;
}

int sum_digits(int a)
{
    int r, sum = 0;
    while (a > 0)
    {
        r = a % 10;
        sum = sum + r;
        a = a / 10;
    }
    return sum;
}

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int prime(int);
    int armstrong(int);
    int n, flag, ch;

    clrscr();
    printf("1. Prime\n");
    printf("2. Armstrong\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    printf("Enter any Number: ");
    scanf("%d", &n);
    switch (ch)
    {
    case 1:
    {
        flag = prime(n);
        if (flag == 1)
            printf("%d is a Prime Numbber", n);
        else
            printf("%d is not a Prime Number", n);
        break;
    }
    case 2:
    {
        flag = armstrong(n);
        if (flag == 1)
            printf("%d is an Armstrong Number", n);
        else
            printf("%d is not an Armstrong Numner", n);
        break;
    }
    default:
    {
        printf("Invalid Choice");
    }
    }
    printf("\n");
    getch();
}

int prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
        {
            flag = 1;
            break;
        }

    return flag;
}

int armstrong(int n)
{
    int power(int, int);
    int o, r, a = 0, flag;
    double result = 0.0;

    for (o = n; o != 0; a++)
    {
        o /= 10;
    }
    for (o = n; o != 0; o /= 10)
    {
        r = o % 10;
        result += power(r, a);
    }
    if (result == n)
        flag = 1;
    else
        flag = 0;
    return flag;
}

int power(int a, int b)
{
    int i, l = 1;
    for (i = 1; i <= b; i++)
    {
        l = l * a;
    }
    return l;
}

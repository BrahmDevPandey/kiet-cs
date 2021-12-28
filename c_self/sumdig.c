#include <stdio.h>
#include <conio.h>

void main()
{
    int n, x, sum = 0;
    clrscr();
    printf("Enter any Number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        x = n % 10;
        sum = sum + x;
        n = n / 10;
    }
    printf("Sum of Digits of the Entered Number is %d\n", sum);
    getch();
}
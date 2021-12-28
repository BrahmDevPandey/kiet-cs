#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    clrscr();
    printf("Enter any Number: ");
    scanf("%d", &num);
    printf("Number in Octal: %o", num);
    printf("\nEnter again any Number in Octal: ");
    scanf("%o", &num);
    printf("Number in Decimal: %d\n", num);
    getch();
}
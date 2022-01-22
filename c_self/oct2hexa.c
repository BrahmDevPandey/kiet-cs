#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    clrscr();
    printf("Enter any Number in octal: ");
    scanf("%o", &num);
    printf("Number in Hexadecimal: %x", num);
    printf("\nEnter again any Number in Hexadecimal: ");
    scanf("%x", &num);
    printf("Number in Octal: %o\n", num);
    getch();
}

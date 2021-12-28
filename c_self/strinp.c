#include <stdio.h>
#include <conio.h>

void main()
{
    char name[100];
    clrscr();
    printf("Enter your name: ");
    gets(name);
    printf("You have entered: ");
    puts(name);
    getch();
}
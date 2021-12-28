#include <stdio.h>
#include <conio.h>

void main()
{
    char fname[100];
    clrscr();
    printf("Enter a line of text: ");
    scanf("%[^\n]s", fname);
    printf("You eneterd: ");
    puts(fname);
    getch();
}

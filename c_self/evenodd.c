#include <stdio.h>
#include <conio.h>

void main()
{
    int N;
    clrscr();
    printf("Enter any Number: ");
    scanf("%d", &N);
    if (N % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    getch();
}

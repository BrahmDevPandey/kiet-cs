// program to check the working of compound assignment operators
#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 5;
	clrscr();
	printf("Before: a = %d\n", a);
	a = a <= 6;
	printf("After: a = %d\n", a);
	getch();
}

//program to demo the working of pre and post increment and decrement operators
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	a = 9;
	b = a++ + ++a + ++a; // expected output as per gcc is b=32 and a=11
							// but according to tcc is b=33 and a=12
	printf("a = %d; b = %d", a,b);
	getch();
}
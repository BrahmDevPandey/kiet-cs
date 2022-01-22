// pogram to test the use of pointers in c
#include<stdio.h>
#include<conio.h>

void main()
{
	int a, *p;
	clrscr();
	a = 20;
	p = &a;

	printf("Before \na = %d \np = %x \n*p = %d\n",a,p,*p);

	*p = 30;
	p = 0x0000;
	*p = 232;

	printf("Before \na = %d \np = %x \n*p = %d\n",a,p,*p);
	getch();
}
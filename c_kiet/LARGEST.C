// program to find the largest of three numbers
#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c, largest;
	clrscr();

	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	//checking using nested ternary operator
	largest  = a > b ? a > c ? a : c : b > c ? b : c;
	printf("The largest among %d, %d and %d is %d\n", a, b, c, largest);
	getch();
}
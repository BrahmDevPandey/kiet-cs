// program to print Fibonacci serie upto a given number of terms
#include<stdio.h>
#include<conio.h>

void main()
{
	long a = 1, b = 0, c, n, i;

	clrscr();
	printf("Enter number of terms to be printed: ");
	scanf("%ld", &n);

	// printing the fibonacci series
	for(i = 1; i <= n; i++)
	{
		c = a + b;
		printf("%ld ", c);
		a = b;
		b = c;
	}

	printf("\n");
	getch();
}

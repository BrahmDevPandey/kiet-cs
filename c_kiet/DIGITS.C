// program to count the number of digits in a number
#include<stdio.h>
#include<conio.h>

void main()
{
	long int num, temp;
	int count = 0;
	clrscr();

	printf("Enter a number: ");
	scanf("%ld", &num);

	// calculating the digits count
	if(num < 0)			 // for negative numbers
		temp = -num;
	else
		temp = num;

	while(temp > 0)
	{
		count++;
		temp/=10;
	}

	printf("The number of digits in %ld is %d\n", num, count);
	getch();
}
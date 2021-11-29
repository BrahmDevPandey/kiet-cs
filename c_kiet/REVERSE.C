// program to reverse a number
#include<stdio.h>
#include<conio.h>

void main()
{
	long num, temp, reverse;
	int dig;

	clrscr();
	printf("Enter a number: ");
	scanf("%ld", &num);

	if(num < 0)			// for negative numbers
		temp = -num;
	else
		temp = num;

	reverse = 0;
	while(temp > 0)
	{
		dig = temp%10;
		temp/=10;
		reverse = reverse * 10 + dig;
	}

	if(num < 0)
		reverse = -reverse;

	printf("The reverse of %ld is %ld", num, reverse);
	getch();
}
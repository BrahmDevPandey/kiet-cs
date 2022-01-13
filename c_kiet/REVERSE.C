//program to demo the reverse a number
#include<stdio.h>
#include<conio.h>

void main()
{
	long num, reverse, temp;
	clrscr();

	printf("Enter a number: ");
	scanf("%ld", &num);
	temp = num;
	reverse = 0;

	// calculating the reverse
	while(temp > 0)
	{
		int dig = temp % 10;
		reverse = reverse * 10 + dig;
		temp /= 10;
	}

	printf("The reverse of %ld is %ld.\n", num, reverse);
	getch();
}
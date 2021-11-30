// program to check whether a number is a palindrome
#include<stdio.h>
#include<conio.h>

void main()
{
	long num, temp, reverse;
	int dig;

	clrscr();
	printf("Enter a number: ");
	scanf("%ld",&num);

	// calculating the reverse
	temp = num;
	reverse = 0;

	while(temp > 0)
	{
		dig = temp % 10;
		reverse = reverse * 10 + dig;
		temp /= 10;
	}
	if(num == reverse)
		printf("%ld is a palindrome\n", num);
	else
		printf("%ld is not a palindrome\n", num);
	getch();
}
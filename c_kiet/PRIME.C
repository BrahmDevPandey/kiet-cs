// program to check whether a number is prime
#include<stdio.h>
#include<conio.h>

void main()
{
	long num = 0;
	int i, flag = 0;
	clrscr();
	printf("Enter a number: ");
	scanf("%ld", &num);

	/* checking prime is done by diving the number by every number upto
	half of the number and checking the remainder. If the number is completely
	divisible by some number in this range (except 1), the number not prime.
	Otherwise the number is prime. */
	for(i = 2; i <= num / 2; i++)
	{
		if(num % i == 0)
		{
			flag = 1;
			break;
		}
	}
	//checking whether divisibility happened
	if(flag == 0)
		printf("%ld is prime.\n", num);
	else
	{
		printf("%ld is not prime. ", num);
		printf("One of its factors is %d.\n", i);
	}
	getch();
}


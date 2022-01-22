// program to check whether a number is Armstrong number
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	long num, temp, sum;
	int digits = 0, dig;

	clrscr();
	printf("Enter a number: ");
	scanf("%ld", &num);

	sum = 0;
	temp = num;

	// calculating the number of digits in number
	while(temp > 0)
	{
		temp /= 10;
		digits ++;
	}

	//logic to get the sum of nth power of digits
	temp = num;
	while(temp > 0)
	{
		dig = temp % 10;
		sum += pow(dig, digits);
		temp /= 10;
	}

	if(sum == num)
		printf("%ld is an Armstrong number.\n", num);
	else
		printf("%ld is not an Armstrong number.\n", num);
	getch();
}



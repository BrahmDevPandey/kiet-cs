// program to chech whether a string is a palindrome
#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
	int i = 0, len = 0;
	clrscr();

	printf("Enter a string: ");
	scanf("%[^\n]s", str);

	//finding length of string
	for(len = 0; str[len] != '\0'; len++);

	//checking for palindrome
	for(i = 0; i <= len/2; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			printf("%s is not a palindrome\n", str);
			break;
		}
	}

	if(i > len/2)
		printf("%s is a palindrome\n", str);
	getch();
}


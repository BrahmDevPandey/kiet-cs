// program to print a left aligned right angled
// triangle of *'s
#include<stdio.h>
#include<conio.h>

int main()
{
	int rows, i,j;
	clrscr();
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	// printing triangle
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= i; j++)
			printf("* ");
		printf("\n");
	}
	getch();
	return 0;
}

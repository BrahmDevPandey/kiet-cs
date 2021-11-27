// program to print pattern of *'s using loop
#include<stdio.h>
#include<conio.h>

int main()
{
  int rows, columns, i, j;
  clrscr();
  printf("Enter the number of rows and columns: ");
  scanf("%d%d",&rows, &columns);

  //printing rectangle of *'s
  for(i = 1; i <= rows; i++)
  {
	for(j = 1; j <= columns; j++)
	{
		printf("* ");
	}
		printf("\n");
  }
  getch();
  return 0;
}
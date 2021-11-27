// program to print pattern of *'s using loop
#include<stdio.h>
#include<conio.h>

int main()
{
  int rows, i, j;
  clrscr();
  printf("Enter the number of rows: ");
  scanf("%d",&rows);

  //printing square of *'s
  for(i = 1; i <= rows; i++)
  {
    for(j = 1; j <= rows; j++)
    {
	printf("* ");
    }
    printf("\n");
  }
  getch();
  return 0;
}
// program to test bitwise operators in C
#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b;
	clrscr();

	printf("Enter two numbers: ");
	fflush(stdin);
	scanf("%d%d", &a, &b);

	printf("\nAll bitwise operations on %c and %c are:\n");
	printf("%d & %d = %d\n",a,b,a&b);
	printf("%d | %d = %d\n",a,b,a|b);
	printf("%d >> 2 = %d\n",a,a>>2);
	printf("%d >> 2 = %d\n",b,b<<2);
	printf("%d << 2 = %d\n",a,a>>2);
	printf("%d << 2 = %d\n",b,b<<2);
	printf("~%d = %d\n",a,~a);
	printf("~%d = %d\n",b,~b);

	getch();
}
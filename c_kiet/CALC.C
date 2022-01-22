// program to create a menu-driven ASMD calculator
#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
	float a,b;

	do {
	clrscr();
	printf("1. To add\n");
	printf("2. To subtract\n");
	printf("3. To multiply\n");
	printf("4. To divide\n");
	printf("5. To Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1: //int f;
				printf("Enter two numbers: ");
				scanf("%f%f", &a, &b);
				printf("%f + %f = %f", a, b, a+b);
				break;

		case 2: printf("Enter two numbers: ");
				scanf("%f%f", &a, &b);
				printf("%f - %f = %f", a, b, a-b);
				break;

		case 3: printf("Enter two numbers: ");
				scanf("%f%f", &a, &b);
				printf("%f * %f = %f", a, b, a*b);
				break;

		case 4: printf("Enter two numbers: ");
				scanf("%f%f", &a, &b);
				printf("%f / %f = %f", a, b, a/b);
				break;

		case 5: printf("Thank You!!");
				break;
		default: printf("Wrong choice! Enter again...\n");

	}
	getch();
	} while(choice != 5);
	return 0;
}
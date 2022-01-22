// program to read an array and show it
#include<stdio.h>
#include<conio.h>

void readArr(int[], int);
void showArr(int[], int);

void main()
{
	int size,arr[20],i;
	clrscr();

	printf("Enter the size of array (<=20): ");
	scanf("%d", &size);

	// reading the array
	readArr(arr, size);

	// printing the array
	showArr(arr, size);

	getch();
}

void readArr(int arr[], int size)
{
	int i;
	printf("\nEnter the array elements one by one: ");
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
}

void showArr(int arr[], int size)
{
	int i;
	printf("\nThe array elements are: ");
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

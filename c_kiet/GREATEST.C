// program to read an array and show it
#include<stdio.h>
#include<conio.h>

void readArr(int[], int);
void showArr(int[], int);
int greatest(int[], int);

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

	// finding the greatest element in the array
	printf("The greatest element in the array is %d", greatest(arr, size));
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

int greatest(int arr[], int size)
{
	int i, greatest = arr[0];
	for(i = 1; i < size; i++)
		if(greatest < arr[i])
			greatest = arr[i];

	return greatest;
}
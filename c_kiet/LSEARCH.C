// program to read an array and show it
#include<stdio.h>
#include<conio.h>

void readArr(int[], int);
void showArr(int[], int);
int linearSearch(int[], int, int);

void main()
{
	int size,arr[20],i, num;
	clrscr();

	printf("Enter the size of array (<=20): ");
	scanf("%d", &size);

	// reading the array
	readArr(arr, size);

	// printing the array
	showArr(arr, size);

	// reading the elements to be searched
	printf("Enter the element to be searched: ");
	scanf("%d", &num);

	if(linearSearch(arr, size, num))
		printf("The element is present in the array.");
	else
		printf("The element was not found in the array.");

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

int linearSearch(int arr[], int size, int num)
{
	int i;
	for(i = 0; i < size; i++)
		if(arr[i] == num)
			return 1;
	return 0;	// the control will reach this line only if the condition was never true
}

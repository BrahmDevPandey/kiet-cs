// program to implement selection sort in C
#include<stdio.h>
#include<stdlib.h>

int main() 
{
    void selectionSort(int [], int);
    void inputArr(int[], int);
    void outputArr(int[], int);
    int size, arr[100];

    system("cls");
    printf("Enter size of array: ");
    scanf("%d", &size);
	//input the array
	inputArr(arr, size);
	// print the initial unsorted array
	printf("\nInitially:\n");
	outputArr(arr, size);
	// sort the array using the function
	selectionSort(arr, size);
	// print the sorted array
	printf("\nAfter sorting:\n");
	outputArr(arr, size);
	// wait for a key press before exiting
	getch();
    return 0;
}

void inputArr(int arr[], int size) 
{
    int i;
    printf("Enter elements one by one: ");
    for(i = 0; i < size; i++)
       scanf("%d", &arr[i]);
}

void outputArr(int arr[], int size) 
{
    int i;
    printf("The array is: \n");
    for(i = 0; i < size; i++) 
        printf("%d ", arr[i]);
}

void selectionSort(int arr[], int size) 
{
    int findMinIndex(int [], int, int);
    int i, temp, minIndex, r = size - 1;

    for(i = 0; i < r; i++) 
    {
        minIndex = findMinIndex(arr, i, r);
        if(i != minIndex) 
        {
            // swap ith and minIndex elements
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int findMinIndex(int arr[], int l, int r) 
{
    int minIndex = l, i;
    for(i = l + 1; i <= r; i++)
    {
        if(arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}
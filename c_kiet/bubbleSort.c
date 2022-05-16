// program to implement bubble sort in C
#include<stdio.h>
#include<stdlib.h>

int main() 
{
    void bubbleSort(int [], int);
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
	bubbleSort(arr, size);
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

void bubbleSort(int arr[], int size) 
{
    int i, j, temp, flag;
    for(i = 0; i < size-1; i++) 
    {
        flag = 0;
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])   // if not in order
            {
                // swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;          // mark that swapping was done
            }
        }
        if(flag == 0)       // if swapping didn't occur even once
            break;      // break the outer loop
    }   
}
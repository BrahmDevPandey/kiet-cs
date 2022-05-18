// program to implement heap sort using recursive heapify and swap functions
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void maxHeapify(int[], int);
void buildMaxHeap(int[]);
void heapSort(int[]);
void inputArr(int[], int);
void outputArr(int[], int);

int main()
{
    int arr[MAX], size;
    system("cls");
    printf("Enter size of array (<50): ");
    scanf("%d", &size);
    inputArr(arr, size);
 
    return 0;
}

void inputArr(int arr[], int size)
{
    int i;
    printf("Enter %d elements of the array: \n", size);
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void outputArr(int arr[], int size) 
{
    int i;
    printf("The array is: \n");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
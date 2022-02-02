// program to find the sum of elements of an array using a pointer
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10], size;
    void inputArr(int[], int);
    int findSum(int[], int);
    
    system("clear");
    printf("Enter the size of array: ");
    scanf("%d", &size);
    inputArr(arr, size);
    printf("The sum of the array elements is %d\n", findSum(arr, size));
    return 0;
}

void inputArr(int arr[], int size)
{
    int i, *p = arr;        // pointer is assigned the base address of the array
    printf("Enter the elements: \n");
    for (i = 0; i < size; i++)
        scanf("%d", (p + i)); // array elements are accessed using pointer
}

int findSum(int arr[], int size)
{
    int sum = 0, *p = arr, i;
    for(i = 0; i < size; i++)
        sum += *(p + i);
    return sum;
}
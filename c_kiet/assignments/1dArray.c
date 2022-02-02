// program to implement various functions on 1 dimensional array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, arr[20],i;
    void inputArray(int[], int);
    void outputArray(int[], int);
    int findMax(int[], int);
    int findMin(int[], int);        
    int findSum(int[], int);

    system("clear");        // clears the screen using system call
    printf("Enter the size of array (<=20): ");
    scanf("%d", &size);

    inputArray(arr, size);
    outputArray(arr, size);
    printf("\nThe largest element in the array is %d.\n", findMax(arr, size));
    printf("The smallest element in the array is %d.\n", findMin(arr, size));
    printf("The sum of all elements of the array is %d.\n", findSum(arr, size));
    return 0;
} 

void inputArray(int arr[], int size)
{
    int i;
    printf("Enter the array elements: \n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

void outputArray(int arr[], int size)
{
    int i;
    printf("The array elements are: \n");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int findMax(int arr[], int size)
{
    int i, max = arr[0];
    for( i = 1; i < size; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int findMin(int arr[], int size)
{
    int i, min = arr[0];
    for( i = 1; i < size; i++)
        if(arr[i] < min)
            min = arr[i];
    return min;
}

int findSum(int arr[], int size)
{
    int i, sum = 0;
    for( i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}


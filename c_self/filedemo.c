// program to implement various functions on 1 dimensional array
#include <stdio.h>

FILE *in, *out;

int main()
{
    int size, arr[20],i;
    void inputArray(int[], int);
    void outputArray(int[], int);
    int findMax(int[], int);
    int findMin(int[], int);
    int findSum(int[], int);

    in = fopen("inputs.txt", "r");
    out = fopen("outputs.txt", "w");

    // printf("Enter the size of array (<=20): ");
    fscanf(in, "%d", &size);

    inputArray(arr, size);
    outputArray(arr, size);
    fprintf(out, "\nThe largest element in the array is %d.\n", findMax(arr, size));
    fprintf(out, "The smallest element in the array is %d.\n", findMin(arr, size));
    fprintf(out, "The sum of all elements of the array is %d.\n", findSum(arr, size));
    return 0;
} 

void inputArray(int arr[], int size)
{
    int i;
    fprintf(out, "Enter the array elements: \n");
    for(i = 0; i < size; i++)
        fscanf(in, "%d", &arr[i]);
}

void outputArray(int arr[], int size)
{
    int i;
    fprintf(out, "The array elements are: \n");
    for(i = 0; i < size; i++)
        fprintf(out, "%d ", arr[i]);
    fprintf(out, "\n");
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
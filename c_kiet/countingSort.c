    // program to implement countingSort algorithm in C
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int main() 
{
    void countingSort(int[], int[], int);
    void inputArr(int[], int);
    void outputArr(int[], int);    
    int arr[MAX], size, sorted[MAX];

    system("cls");
    printf("Enter the size of array: ");
    scanf("%d", &size);
    inputArr(arr, size);
    printf("\nInitally: \n");
    outputArr(arr, size);
    countingSort(arr, sorted, size);
    printf("After sorting using Counting sort: \n");
    outputArr(sorted, size);
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

void countingSort(int arr[], int sorted[], int size)
{
    int cumulativeFreq[MAX], i;
    
    // initializing the cumulative frequencies with zeros initially
    for(i = 1; i < size + 1; i++)
    {
        cumulativeFreq[i] = 0;
    }

    // finding the frequencies of elements
    for(i = 1; i < size + 1; i++) 
    {
        cumulativeFreq[arr[i]]++;   // increase the frequency on every occurrence of the element in the unsorted array
    }

    // finding the cumulative frequencies by adding all previous frequencies of the element
    for(i = 1; i < size + 1; i++)
    {
        // no need to change the value at 0 index, as 0th index has same frequency and cumulative frequency
        cumulativeFreq[i] = cumulativeFreq[i] + cumulativeFreq[i-1];
    }

    // now, arrange the elements in the main array by looking values in the cumulative frequency array
    for(i = size; i >= 1; i--)
    {
        sorted[cumulativeFreq[arr[i]]] = arr[i];
        cumulativeFreq[arr[i]]--;
    }
}
// program to implement merge sort in C
#include<stdio.h>
#define MAX 100

int main() 
{
    void mergeSort(int[], int, int);
    void inputArr(int[], int);
    void outputArr(int[], int);
    int arr[MAX], size;

    printf("Enter the size of array (<100): ");
    scanf("%d", &size);
    inputArr(arr, size);
    printf("\nInitially: \n");
    outputArr(arr, size);
    mergeSort(arr, 0, size-1);
    printf("After sorting: \n");
    outputArr(arr, size);
    return 0;
}

void inputArr(int arr[], int size)
{
    int i;
    printf("Enter %d elements: \n", size);
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

void mergeSort(int arr[], int start, int end)
{
    void merge(int[], int, int, int);
    int mid;
    if(start < end)     // to ensure that the algo starts if there are atleast 2 elements in the array
    {
        mid = (start + end) / 2;    // find the middle index of the array
        mergeSort(arr, start, mid);     // recursively sort the left half of the array
        mergeSort(arr, mid+1, end);     // recursively sort the riht half of the array
        merge(arr, start, mid, end);    // now merge the sorted left and right halves of the array
    }
}

void merge(int arr[], int start, int mid, int end)
{   
    /**
        here we assume that the array is divided into two parts, one from start to mid index
        and the other from the mid+1 to end index
        now, we will merge the two sorted arrays into the final sorted version
    **/
    // two pointers to point elements from the both (parts of) array and third pointer to 
    // point the element of the main array
    int leftArrayPointer, rightArrayPointer, mainPointer, i;
    int leftArrSize = mid - start, rightArrSize = end - mid;
    int tempLeftHalf[leftArrSize], tempRightHalf[rightArrSize];
    leftArrayPointer = start;
    rightArrayPointer = mid + 1;
    mainPointer = 0;

    //storing the two arrays into temp arrays
    for(i = 0; i < leftArrSize; i++)
    {
        tempLeftHalf[i] = arr[leftArrayPointer];
        leftArrayPointer++;
    }    
    for(i = 0; i < rightArrSize; i++)
    {
        tempRightHalf[i] = arr[rightArrayPointer];
        rightArrayPointer++;
    }    
    // reset the pointers 
    leftArrayPointer = 0;
    rightArrayPointer = 0;

    // now merge the two arrays
    while(leftArrayPointer < leftArrSize && rightArrayPointer < rightArrSize)
    {
        // insert the smaller element into the main array
        if(tempLeftHalf[leftArrayPointer] <= tempRightHalf[rightArrayPointer])
        {
            arr[mainPointer] = tempLeftHalf[leftArrayPointer];
            leftArrayPointer++;
        }
        else
        {
            arr[mainPointer] = tempRightHalf[rightArrayPointer];
            rightArrayPointer++;
        }
        // increment the main array pointer 
        mainPointer++;
    }   

    // insert left over elements (if any) of left half array into the main array
    while(leftArrayPointer < leftArrSize)
    {
        arr[mainPointer] = tempLeftHalf[leftArrayPointer];
        leftArrayPointer++;
        mainPointer++;
    }
    // insert left over elements (if any) of right half array into the main array
    while(rightArrayPointer < rightArrSize)
    {
        arr[mainPointer] = tempRightHalf[rightArrayPointer];
        rightArrayPointer++;
        mainPointer++;
    }
}

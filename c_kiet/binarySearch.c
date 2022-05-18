// program to implement binary search in a sorted array
#include <stdio.h>
#include <stdlib.h>

int times = 0;

int main() {
	int binarySearchRecursive(int[], int, int, int);
	int binarySearchLooping(int[], int, int, int);
	int arr[20], size, i, locRecursive, locLooping, data;
	system("cls");

	// input array size
	printf("Enter the number of elements to be entered in the array (<20): ");
	scanf("%d", &size);

	// input array elements
	printf("Enter %d numbers: \n", size);
	for(i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	// input element to be searched
	printf("Enter element to be searched for in the array: ");
	scanf("%d", &data);

	// calling searching functions
	locRecursive = binarySearchRecursive(arr, 0, size-1, data);
	locLooping = binarySearchLooping(arr, 0, size-1, data);

	// showing results
	printf("\nResults of Recursive Function:\n");
	if(locRecursive >= 0) {
		printf("%d present in the array at %d index.", data, locRecursive);
	} else{
		printf("%d not present in the array.", data);
	}
	printf("\nResults of Looping Function:\n");
	if(locLooping >= 0) {
		printf("%d present in the array at %d index.", data, locLooping);
	} else{
		printf("%d not present in the array.", data);
	}
	getchar();
	getchar();
	return 0;
}

int binarySearchRecursive(int arr[], int start, int end, int data) {
	int mid;
	mid = (start + end)/2;

	if(start <= end) {
	   // checking for various possible cases
		if(arr[mid] == data)        // if element is found at mid index
			return mid;
		else if(arr[mid] > data)    // if element is present in the left half of the array
			return binarySearchRecursive(arr, start, mid-1, data);
		else                        // if element is present in the right half of the array
			return binarySearchRecursive(arr, mid+1, end, data);
	}
	// if the element is not present in the array, the recursion will eventually make start > end
	return -1;
}

int binarySearchLooping(int arr[], int start, int end, int data) {
	int mid;
	while(start <= end) {
		mid = (start + end)/2;
		// checking for all possible cases
		if(arr[mid] == data)        // if element present at mid
			return mid;
		else if(arr[mid] > data)    // if element present in the right half of the array
			end = mid - 1;
		else                        // if element present in the left half of the array
			start = mid + 1;
	}

	// if element was not found in the array
	return -1;
}
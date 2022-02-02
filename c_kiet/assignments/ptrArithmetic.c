// program to demo pointer arithmetic using 1d array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
    int *p = arr;       // assigning the arrays base index to the pointer
    system("clear");

    printf("The elements of the array are: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", *p);  // accessing the elements using pointer
        p = p + 1;          // adding 1 to the pointer makes it point to the next location
    }
    printf("\n");
    return 0;
}
// program to demo the access of an array using a pointer
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10], size, i, *p, sum = 0;
    p = arr;

    clrscr();
    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (p + i)); // array elements are accessed using pointer
        sum += *(p + i);
    }

    printf("The sum of the array elements is %d\n", sum);
    return 0;
}
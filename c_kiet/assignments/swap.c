// program to implement swap function using call by reference
#include <stdio.h>
#include <stdlib.h>

int main()
{
    void swap(int *, int *);
    int a, b;
    system("clear");

    printf("Enter two numbers for a and b: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);          // passing references of the varaibles to the function
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{   
    int temp = *a;
    *a = *b;
    *b = temp;
}
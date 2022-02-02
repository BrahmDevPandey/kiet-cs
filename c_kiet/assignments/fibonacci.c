// program to print fibonacci series upto n terms using recursion
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int fibonacci(int);
    system("clear");

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)     // printing each term using the function
        printf("%d ", fibonacci(i));
    printf("\n");
    return 0;
}

int fibonacci(int n)
{
    if( n <= 0)
       return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n-2) + fibonacci(n-1);
}
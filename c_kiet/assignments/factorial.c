// program to implement factorial function using recursion
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long factorial(int);
    system("clear");

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %ld.\n", n, factorial(n));
    return 0;
}

long factorial(int n)
{
    if(n == 0)      // the base condition
        return 1;
    else
        return n*factorial(n-1);    // recursive function call
}
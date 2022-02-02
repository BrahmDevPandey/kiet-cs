// program to implement the Ackerman function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ackerman(int, int);
    int m, n;
    system("clear");

    printf("Enter the values of m and n: ");
    scanf("%d%d", &m, &n);

    printf("The Ackerman function value of m and n as %d and %d is %d\n", m, n, ackerman(m,n));
    return 0;
}

int ackerman(int m, int n) 
{
    if(m == 0)
        return n+1;
    else if(m > 0 && n == 0)
        return ackerman(m-1, 1);
    else if(m > 0 && n > 0)
        return ackerman(m-1, ackerman(m, n-1));

    return 0;
}
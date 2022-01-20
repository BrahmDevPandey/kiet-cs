#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int);

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num = 0, i = 0, count = 0;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (isPrime(i))
            continue;
        count++;
    }
    printf("%d", count);
    return 0;
}

int isPrime(int num)
{
    int i;
    if (num == 1)
        return 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long factorial(int);
int isStrong(int);

int main()
{
    int num, i;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (isStrong(i))
            printf("%d ", i);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

int isStrong(int num)
{
    int dig, temp, sum = 0;
    temp = num;
    while (temp > 0)
    {
        dig = temp % 10;
        sum += factorial(dig);
        temp /= 10;
    }
    if (sum == num)
        return 1;
    return 0;
}

long factorial(int num)
{
    long fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

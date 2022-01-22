#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int amt = 0;
    scanf("%d", &amt);
    if (amt < 690)
        printf("0");
    else
    {
        printf("1 %d", amt - 690);
    }
    return 0;
}

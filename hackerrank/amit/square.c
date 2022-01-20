#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0, root;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        root = sqrt(i);
        if (root * root == i)
            printf("%d ", i);
    }
    return 0;
}

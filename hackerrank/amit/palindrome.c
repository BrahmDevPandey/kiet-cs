#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[50];
    int len = 0, i;
    scanf("%[^\n]s", str);
    len = strlen(str);
    for (i = 0; i <= len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            printf("0");
            break;
        }
    }

    if (i > len / 2)
        printf("1");
    return 0;
}

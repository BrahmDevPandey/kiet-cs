// program to demo the use of formatted output in C
#include <stdio.h>

int main()
{
    int i = 10;
    float f = 20.65f;
    char c = 'a';

    printf("%5.4d", i);
    printf("%5d", i);
    printf("%2.3f", f);
    printf("%c", c);

    return 0;
}
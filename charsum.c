#include <stdio.h>

void flush()
{
    char c;
    while (c = getchar() != '\n' && c != EOF)
        ;
}

int main()
{
    unsigned char a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    // scanf("%[^\n]%*c");
    flush();
    printf("Enter the second number: ");
    scanf("%d", &b);
    c = a + b;
    printf("The sum of %d and %d is %d\n", a, b, c);
}

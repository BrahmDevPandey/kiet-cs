#include <stdio.h>
#include <conio.h>

void main()
{
    int add(int, int);
    int sub(int, int);
    int mult(int, int);
    float divide(int, int);
    int a, b, ch;
    float c;

    clrscr();
    printf("1 for Addition\n");
    printf("2 for Subtraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Division\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    printf("Enter Number1: ");
    scanf("%d", &a);
    printf("Enter Number2: ");
    scanf("%d", &b);
    switch (ch)
    {
    case 1:
    {
        c = add(a, b);
        break;
    }
    case 2:
    {
        c = sub(a, b);
        break;
    }
    case 3:
    {
        c = mult(a, b);
        break;
    }
    case 4:
    {
        c = divide(a, b);
        break;
    }
    default:
    {
        printf("Invalid Choice\n");
        return;
    }
    }
    printf("Result is %f\n", c);
    getch();
}

int add(int a, int b)
{
    int x;
    x = a + b;
    return x;
}

int sub(int a, int b)
{
    int x;
    x = a - b;
    return x;
}

int mult(int a, int b)
{
    int x;
    x = a * b;
    return x;
}

float divide(int a, int b)
{
    float x;
    x = (float)a / b;
    return x;
}
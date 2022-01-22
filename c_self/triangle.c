// program to print a triangle pattern of *s
#include <stdio.h>

int main()
{
    int rows = 0, stars = 0, spaces = 0, i;
    printf("Enter the number of rows to be printed: ");
    scanf("%d", &rows);

    // printing the pattern using spaces and stars
    for (i = 1; i <= rows; i++)
    {
        for (spaces = rows - i; spaces > 0; spaces--)
            printf("  ");
        for (stars = 1; stars <= i; stars++)
            printf("* ");
        for (stars = 1; stars < i; stars++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

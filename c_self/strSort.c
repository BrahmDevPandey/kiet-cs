// program to sort an array of strings
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    const int size = 5;
    char arr[size][20];
    int i;
    void sort(char[][20], int);

    clrscr();
    printf("\nEnter %d strings:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%[^\n]s", arr[i]);
    }

    // sorting using bubble sort
    sort(arr, size);

    printf("\nThe sorted array is: \n");
    for (i = 0; i < size; i++)
    {
        printf("%s\n", arr[i]);
    }

    getch();
    return 0;
}

void sort(char arr[][20], int size)
{
    char temp[20];
    int i, j, flag;

    for (i = 1; i < size; i++)
    {
        flag = 0;
        for (j = 0; j < size - i; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                // swap if the string is greater than its successor
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
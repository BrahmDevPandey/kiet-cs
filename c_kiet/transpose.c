// program to print the transpose of a matrix
#include<stdio.h>

int main()
{
    int mat[5][5], i, j, row, col;
    void inputMat(int[][5], int, int);
    void outputMat(int[][5], int, int);
    void transpose(int[][5], int, int);

    // clrscr();

    // input the number of rows and columns
    printf("Enter the number of rows in the matrix (<=5): ");
    scanf("%d", &row);
    printf("Enter the number of columns in the matrix (<=5): ");
    scanf("%d", &col);

    // input the matrix
    printf("\nEnter the matrix elements: \n");
    inputMat(mat, row, col);

    // output the original matrix to the user
    printf("\nThe original matrix is: \n");
    outputMat(mat, row, col);

    // output the transpose of the matrix
    printf("\nThe transpose of the matrix is: \n");
    transpose(mat, row, col);

    getch();
}

void inputMat(int mat[][5], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);
}

void outputMat(int mat[][5], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void transpose(int mat[][5], int row, int col)
{
    int i, j;
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
            printf("%d ", mat[j][i]);
        printf("\n");
    }
}
// program to print the transpose of a matrix
#include<stdio.h>

int main()
{
    int mat[5][5], row;         // this method of transpose is applicable to square matrices only, so only row is taken
    void inputMat(int[][5], int);
    void outputMat(int[][5], int);
    void transpose(int[][5], int);

    // clrscr();

    // input the number of rows and columns
    printf("Enter the number of rows in the matrix (<=5): ");
    scanf("%d", &row);

    // input the matrix
    printf("\nEnter the matrix elements: \n");
    inputMat(mat, row);

    // output the original matrix to the user
    printf("\nThe original matrix is: \n");
    outputMat(mat, row);

    // output the transpose of the matrix
    printf("\nThe transpose of the matrix is: \n");
    transpose(mat, row);
    outputMat(mat, row);

    getch();
}

void inputMat(int mat[][5], int row)
{
    int i, j;
    for(i = 0; i < row; i++)
        for(j = 0; j < row; j++)
            scanf("%d", &mat[i][j]);
}

void outputMat(int mat[][5], int row)
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < row; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void transpose(int mat[][5], int row)
{
    int i, j, temp;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < i; j++)
        {
            // swapping the elements
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}
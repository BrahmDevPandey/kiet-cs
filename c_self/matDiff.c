// programs to find difference of two matrices of same order
#include <stdio.h>
#include <conio.h>

int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10], row, col;
    void inputMat(int[][10], int, int);
    void outputMat(int[][10], int, int);
    void diffMat(int[][10], int[][10], int[][10], int, int);

    clrscr();
    // reading the row and column size
    printf("Enter the number of rows (<=10): ");
    scanf("%d", &row);
    printf("Enter the number of columns (<=10): ");
    scanf("%d", &col);

    // reading the matrices
    printf("\nEnter the elements of first matrix: \n");
    inputMat(mat1, row, col);
    printf("\nEnter the elements of second matrix: \n");
    inputMat(mat2, row, col);

    // showing the matrices
    printf("\nThe entered matrices are:\n");
    printf("Matrix 1: \n");
    outputMat(mat1, row, col);
    printf("Matrix 2: \n");
    outputMat(mat2, row, col);

    // subtracting the second matrix from the first one and saving result in the third matrix
    diffMat(mat1, mat2, mat3, row, col);

    //printing the final difference of matrices
    printf("\nThe difference of the matrices 1 and 2 is: \n");
    outputMat(mat3, row, col);

    getch();
    return 0;
}

void inputMat(int mat[][10], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);
}

void outputMat(int mat[][10], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void diffMat(int mat1[][10], int mat2[][10], int mat3[][10], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            mat3[i][j] = mat1[i][j] - mat2[i][j];
}
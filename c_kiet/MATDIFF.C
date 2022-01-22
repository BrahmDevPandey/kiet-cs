//program to find difference of two matrices
#include<stdio.h>
#include<conio.h>

void main()
{
	int mat1[5][5], mat2[5][5], matdiff[5][5], r, c;
	void inputMat(int[][5], int, int);
	void outputMat(int[][5], int, int);
	void sub(int[][5], int[][5], int[][5], int, int);

	clrscr();

	// input the number of rows and columns the matrices
	printf("Enter the number of rows in the matrix (<=5): ");
	scanf("%d", &r);
	printf("Enter the number of columns in the matrix (<=5): ");
	scanf("%d", &c);

	// input the first matrix
	printf("\nEnter the first matrix elements: \n");
	inputMat(mat1, r, c);

	// input the second matrix
	printf("\nEnter the second matrix elements: \n");
	inputMat(mat2, r, c);

	// output the original matrices to the user
	printf("\nThe matrices are: \n");
	outputMat(mat1, r, c);
	printf("\n");
	outputMat(mat2, r, c);

	// finding the difference
	sub(mat1, mat2, matdiff, r, c);
	printf("\nThe difference of the matrices is: \n");
	outputMat(matdiff, r, c);

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

void sub(int mat1[][5], int mat2[][5], int matdiff[][5], int r, int c)
{
	int i,j;
	for(i = 0; i < r; i++)
		for(j = 0; j < c; j++)
			matdiff[i][j] = mat1[i][j] - mat2[i][j];
}
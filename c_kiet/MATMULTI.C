//program to multiply to matrices
#include<stdio.h>
#include<conio.h>

void main()
{
	int mat1[5][5], mat2[5][5], matprod[5][5], r1, c1, r2, c2;
	void inputMat(int[][5], int, int);
	void outputMat(int[][5], int, int);
	void multiply(int[][5], int[][5], int[][5], int, int, int);

	clrscr();

	// input the number of rows and columns of first matrix
	printf("Enter the number of rows in the first matrix (<=5): ");
	scanf("%d", &r1);
	printf("Enter the number of columns in the first matrix (<=5): ");
	scanf("%d", &c1);

	// input the number of rows and columns of second matrix
	printf("Enter the number of rows in the second matrix (<=5): ");
	scanf("%d", &r2);
	printf("Enter the number of columns in the second matrix (<=5): ");
	scanf("%d", &c2);

	// input the fisrt matrix
	printf("\nEnter the first matrix elements: \n");
	inputMat(mat1, r1, c1);

	// input the second matrix
	printf("\nEnter the second matrix elements: \n");
	inputMat(mat2, r2, c2);

	// output the original matrices to the user
	printf("\nThe original matrices are: \n");
	outputMat(mat1, r1, c1);
	printf("\n");
	outputMat(mat2, r2, c2);

	// finding the product
	if(c1 != r2)
	{
		printf("\nMatrix multiplication is not possible.");
	}
	else
	{
		multiply(mat1, mat2, matprod, r1, c1, c2);
		// output the product matrix
		printf("\nThe product of the matrices is: \n");
		outputMat(matprod, r1, c2);
	}

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

void multiply(int mat1[][5], int mat2[][5], int mat3[][5], int r1, int c, int c2)
{
	int i, j, n;
	for(i = 0; i < 	r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			mat3[i][j] = 0;
			for(n = 0; n < c; n++)
			{
				mat3[i][j] += mat1[i][n] * mat2[n][j];
			}
		}
	}
}


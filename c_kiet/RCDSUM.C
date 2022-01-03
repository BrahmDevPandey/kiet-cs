// program to add two matrices
#include<stdio.h>
#include<conio.h>

void main()
{
    int mat[5][5], i, j, row, col;
    void inputMat(int[][5], int, int);
	void outputMat(int[][5], int, int);
	void sumAll(int[][5], int, int);

	clrscr();

	// input the number of rows and columns
	printf("Enter the number of rows in the matrix (<=4): ");
	scanf("%d", &row);
	printf("Enter the number of columns in the matrix (<=4): ");
	scanf("%d", &col);

	// input the matrix
	printf("\nEnter the matrix elements: \n");
	inputMat(mat, row, col);

	// output the original matrix to the user
	printf("\nThe original matrix is: \n");
	outputMat(mat, row, col);

	// adding all the rows and columns
	sumAll(mat, row, col);

	// printing the new matrix having the sum cells
	printf("\nThe final matrix having the sums is: \n");
	outputMat(mat, row+1, col+1);
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

void sumAll(int mat[][5], int row, int col)
{
	int i, j;

	// initializing the row sum containing cells
	for(i = 0; i < row; i++)
	{
		mat[i][col] = 0;
	}
	// initializing the column containing cells
	for(i = 0; i < col; i++)
	{
		mat[row][i] = 0;
	}
	// initializing the diagonal sum cell
	mat[row][col] = 0;

	for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
		{
			mat[i][col] += mat[i][j];	//the row sum
			mat[row][i] += mat[j][i];   //the column sum
			if(i==j)
				mat[row][col] += mat[i][j];
		}
/*checking
1 2 3
4 5 6
7 8 9
*/
}


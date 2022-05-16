// program to make visual animation of bubble sort using bars
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

#define BAR_WIDTH 20
#define BOTTOM 300
#define LEFT 150
#define SPACING 20
#define MAX 20

void drawBar(int position, int height);
void printBars(int arr[], int size);
void bubbleSort(int arr[], int size);
void pause();

void main()
{
	int size, arr[MAX],i, j, gd = DETECT, gm;
	clrscr();

	printf("Enter the size of array (<20): ");
	scanf("%d", &size);
	printf("Enter all array elements:\n");
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	printf("Press any key to start the animation...");
	getch();
	clrscr();

	//initialize the graphics driver
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	cleardevice();
	bubbleSort(arr, size);
	getch();
}

void bubbleSort(int arr[], int size)
{
    int i, j, temp, flag;
    for(i = 0; i < size-1; i++) 
    {
		flag = 0;
		// show the array on each iteration
		printBars(arr, size);
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])   // if not in order
            {
                // swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;          // mark that swapping was done
            }
        }
        if(flag == 0)       // if swapping didn't occur even once
			break;      // break the outer loop
		pause();
		cleardevice();
	}
}

void pause()
{
	long i;
	for(i = 1; i <= 100000000; i++);
}

void printBars(int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		drawBar(i, arr[i]);		// draw a bar of height arr[i] at i position
	}
}

void drawBar(int position, int height)
{
	setcolor(YELLOW);
	rectangle(position*BAR_WIDTH + SPACING, BOTTOM - height, position*BAR_WIDTH + SPACING + BAR_WIDTH, BOTTOM);
}
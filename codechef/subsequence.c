#include <stdio.h>

void main()
{
	int t, n, arr[1000], sum, sumLargest, i, j;
	scanf("%d", &t);

	for (; t > 0; t--)
	{
		scanf("%d", &n);

		// input the array
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}

		sumLargest = 0;
		for (i = 0; i < 2; i++)
		{
			sum = 0;
			for (j = i; j < n; j += 2)
			{
				sum += arr[j];
			}
			if (sum > sumLargest)
				sumLargest = sum;
		}
		printf("%d", sumLargest);
	}
}

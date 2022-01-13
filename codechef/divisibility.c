#include <stdio.h>

void main()
{
	int t, i, n, x, y, count, num;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%d%d%d", &n, &x, &y);
		count = 0;

		for (int j = 0; j < n; j++)
		{
			scanf("%d", &num);
			// checking the divisibility
			if (num <= x && num % y == 0)
				count++;
		}

		printf("%d", count);
	}
}

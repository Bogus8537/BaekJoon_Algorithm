// This code was written for Gauss's addition (1 + 2 + 3 + *** + N).

#include <stdio.h>

int main()
{
	int i, n, sum = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}

// This code was written for "A+B for repetition" as much as users want to do.

#include <stdio.h>

int main()
{
	int A, B; // two variables for A+B
	int i, n; // two variables for reptition
  
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
}

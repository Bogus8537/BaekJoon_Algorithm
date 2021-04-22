// BaekJoon Q4 - 02 (10951)

// This program's similar with Step 04 - (01).c
// There's a part of addtion comparing 4 - (01).c
// It added EOF condition to exit this program when users want to end.

#include <stdio.h>

int main()
{
	int A, B, sum;
		
	while (scanf("%d %d", &A, &B) != EOF)   // Here's the point in this code! Press Ctrl+Z to exit this program.
	{
		sum = A + B;
		printf("%d\n", sum);
	}

	printf("\n");
	return 0;
}

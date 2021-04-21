// This code was written for printing number smaller than "X".

// N means deciding how many numbers can be input in command.
// X means a standard number to print any numbers (which means input_number) smaller than "X" in command.

// It'd be executing like
// 10 5
// 1 2 3 4 6 7 8 9 10 11
// => 1 2 3 4

#include <stdio.h>

int main()
{
	int n, x, input_number;
	
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &input_number);

		if (input_number < x)
		{
			printf("%d ", input_number);
		}
	}
	return 0;
}

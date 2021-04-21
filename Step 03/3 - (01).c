// This code was written for "Multiplication Table".
// Input a number which means multiples of "N" and print the table like this.
// N : 2
// 2 * 1 = 2
// 2 * 2 = 4
// 2 * 3 = 6
/*    -
      -
      -
*/
// Range "N" :: (1 <= N <= 9)

#include <stdio.h>

int main()
{
	int num1, num2, mult;

	scanf("%d", &num1);

	for (num2 = 1; num2 < 10; num2++)
	{
		mult = num1 * num2;
		printf("%d * %d = %d\n", num1, num2, mult);
	}

	return 0;
}

/*
This code's similar with Step 03 - (09).
It's printing stars like each other.
But there's one thing different.
If Step 03 - (09)'d be like
*
**
***
and Step 03 - (10)'d be like
  *
 **
***
So I'm gonna add one condition in "for" repetition.
*/

#include <stdio.h>

int main()
{
	int i, j, n;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= n - i) printf(" ");  // Here's the point! It'll subtract while N (which means Input Number)'s bigger than "i".
			else printf("*");             // Print some spaces and after print stars.
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

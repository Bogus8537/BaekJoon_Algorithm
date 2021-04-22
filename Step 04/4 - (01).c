// This code was written for "A + B" as much as users want to do.
// At this time, We're gonna use "While" repetition.
// If users want to end this program, input 0 and 0 to two variables "A" and "B".

#include <stdio.h>

int main()
{
	int A, B;
	while (1)
	{
		scanf("%d %d", &A, &B);
		
		if ((A == 0) && (B == 0)) // It'll end this program.
		{
			break;
		}
		printf("%d\n", A + B);    // Print "A + B"
	}
	return 0;
}

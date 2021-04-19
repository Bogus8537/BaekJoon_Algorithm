// This code was written as C.
// It's about a process which's "Three Digit Number * Three Digit Number"

#include <stdio.h>

int main()
{
	int a = 0, b = 0;

	scanf("%d %d", &a, &b);

	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b % 100) / 10));
	printf("%d\n", a * (b / 100));
	printf("%d\n", a * b);

	return 0;
}

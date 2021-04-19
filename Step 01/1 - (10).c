// This code was written as C.
// It's about it's the same with "(A+B) % C = ( (A%C) + (B%C) ) % C"?

#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", ((a + b) % c));
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c) * (b % c)) % c);

	return 0;
}

// This code was written as C.
// There're inputting two numbers in command and calculate " +, -, *, /, % " 

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	
	return 0;
}

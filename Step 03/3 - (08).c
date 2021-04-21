// This code's similar with Step 03 - (03).
// It's Just added for printing "Case ~~".

#include<stdio.h>

int main() {
	int n, a, b, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("Case #%d: %d + %d = %d\n", i, a, b, sum);
	}
	return 0;
}

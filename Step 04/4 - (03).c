// BaekJoon Q4 - 01 (10952)

/*
Like previously it's the same with printing "A + B".
Actually it got to be upgraded to 4 - (01 & 02).c
This time it'll print "Number Cycle".
It'll operate "(num / 10) + (num%10)" till it becomes "the input number".

EX) Input "26"
2 + 6 = 08 -> "68"
6 + 8 = 14 -> "84"
8 + 4 = 12 -> "42"
4 + 2 = 06 -> "26"

And this time I'm gonna use the "do ~ while()" repetition.
*/

#include <stdio.h>

int main()
{
	int input_number = 0, count = 0;
	int a, b, c;
	int stop = 0;                       // This variable becomes the same with "input number".

	scanf("%d", &input_number);
	stop = input_number;

	do {
		a = input_number / 10;
		b = input_number % 10;
		c = (a + b) % 10;
		input_number = (b * 10) + c;

		//printf("%d + %d = %02d\n", a, b, a + b);

		++count;
	} while (input_number != stop);       // It'll continue ("input number" == "stop").
	printf("%d\n", count);
  
	return 0;
}

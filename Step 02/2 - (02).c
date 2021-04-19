// This program prints grade "A - F" by jeomsu (which means score).
// Grade's rated by Jeomsu like this.
// 100 - 90 : "A"
// 89 - 80 : "B"
// 79 - 70 : "C"
// 69 - 60 : "D"
// Under 60 : "F"

#include <stdio.h>
//#include <stdlib.h>

int main()
{
	int jeomsu;

	scanf("%d", &jeomsu);
  /*
  if (jeomsu < 0 || jeomsu > 100)
	{
		printf("Jeomsu hasn't been written right!!\n");
    printf("Restart this program!!\n");
		exit (1);
	}
  */
	if (jeomsu >= 90 && jeomsu <= 100) { printf("A\n"); }
	else if (jeomsu >= 80 && jeomsu < 90) { printf("B\n"); }
	else if (jeomsu >= 70 && jeomsu < 80) { printf("C\n"); }
	else if (jeomsu >= 60 && jeomsu < 70) { printf("D\n"); }
	else { printf("F\n"); }

	return 0;
}

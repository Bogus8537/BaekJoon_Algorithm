// This code was written for knowing "leap year".

// *Leap Year* means years of Multiples of 4, not Multiples of 100 and Multiples of 400.

// Input the number called a year in command and it'll infrom you if this year's a leap year or not.
// If this year's a leap year -> "1"
// If not -> "0"

#include <stdio.h>
//#include <stdlib.h>

int main()
{
  int year;
	int yes;
  
  scanf("%d", &year);
  /*
	if (year < 0)
	{
		printf("Again search!!\n");
		exit(1);
	}
  */
	if (( (year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("1\n");
	}

	else
	{
		printf("0\n");
	}
  
  return 0;
}

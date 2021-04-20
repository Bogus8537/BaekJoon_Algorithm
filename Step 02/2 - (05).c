// "Alarm Clock"
// This clock was made for belling 45 minutes earlier than Alarm Time set.
// Input two numbers (Hour, Minute)

// Range H & M :: (0 ≤ H ≤ 23, 0 ≤ M ≤ 59)

#include <stdio.h>
//#include <stdlib.h>
int main()
{
  int H, M;
  
  scanf("%d %d", &H, &M);
  /*
  if (hour > 24 || min > 60)
	{
		printf("Alarm Time Set Error!!\n");
    printf("Restart!! -.-;;\n");
		exit(1);
	}
  */
  
  if(M < 45)
  {
    M += 60;
    H--;
    
    if(H < 0)
    {
      H = 23;
    }
  }
  M -= 45;
  printf("%d %d\n", H, M);
  
  return 0;
}

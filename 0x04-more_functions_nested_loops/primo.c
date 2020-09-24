#include <stdio.h>

void main(void)
{
  int a, b;

  for (a = 2; a <= 8; a++)
    {
      for (b = 2; b <= a; b++)
	{
	  if ((((a % b) == 0) && (a == b)) && ((a != b) && ((a % b) != 0)))
	    {
	      printf("%i\n", b);
	    }
	}
    }
}

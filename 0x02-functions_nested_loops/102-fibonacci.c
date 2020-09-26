#include <stdio.h>
/**
 *main - aaaaa
 *Return: aaaaaa
 */
int main(void)
{
  int a, b, repeat;
  a = 2;
  b = 3;
  printf("1, ");
  printf("2, ");
  printf("3, ");
  for (repeat = 1; repeat < 24; repeat++)
    {
      a = a + b;
      b = b + a;
      if (a < 0)
	{
	  a = a * -1;
      printf("%i, ", a);
	}
      else
	{
	  printf("%i, ", a);
	}
      if (b < 0)
	{
	  b = b * -1;
      printf("%i, ", b);
	}
      else
	{
	printf("%i, ", b);
	}
    }
  printf("12586269025");
  putchar('\n');
}

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
  for (repeat = 1; repeat < 21; repeat++)
    {
      a = a + b;
      b = b + a;
      printf("%i, ", a);
      printf("%i, ", b);
    }
  printf("1836311903, ");
  printf("2971215073, ");
  printf("4807526976, ");
  printf("7778742049, ");
  printf("12586269025, ");
  printf("20365011074");
  putchar('\n');
}

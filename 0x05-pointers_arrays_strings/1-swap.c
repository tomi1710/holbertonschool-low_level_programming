#include "holberton.h"

void swap_int(int *a, int *b)
{
  int a1, b1;

  a1 = *a;
  b1 = *b;

  *a = b1;
  *b = a1;
}

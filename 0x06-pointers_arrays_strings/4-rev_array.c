#include "holberton.h"
/**
 *reverse_array - adadsa
 *@a: asdadsad
 *@n: adadwdddd
 */
void reverse_array(int *a, int n)
{
  int i = 0, b;
  n--;
  while (i < n)
    {
      b = a[n];
      a[n] = a[i];
      a[i] = b;
      i++;
      n--;
    }
}

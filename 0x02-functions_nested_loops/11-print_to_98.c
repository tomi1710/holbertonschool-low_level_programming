#include "holberton.h"
#include <stdio.h>

void print_to_98(int n)
{

  if (n < 98)
    {
      for (n ; n <= 98; n++)
	{
	printf(n);
	_putchar(',');
	_putchar(' ');
	}
    }
  else if (n == 98)
    {
      printf("98");
    }
  else
    {
      for (n; n <= 98; n--)
	{
	printf(n);
	_putchar(',');
	_putchar(' ');
	}
    }
}

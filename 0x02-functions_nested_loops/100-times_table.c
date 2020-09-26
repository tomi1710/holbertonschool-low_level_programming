#include "holberton.h"
/**
 * print_times_table - create a table of multiplication facts
 * @n: aaaaaa
 */
void print_times_table(int n)
{
  int a, b, c, cien, diez, uno;
  if (n > 15 || n < 0)
    {
    }
  else
    {
  for (a = 0; a <= n; a++)
    {
      for (b = 0; b <= n; b++)
	{
	  c = a * b;
	  cien = c / 100;
	  diez = c / 10;
	  diez = diez % 10;
	  uno = c % 10;
	  if (b == 0)
	    {
	      _putchar('0');
	    }
	  else
	    {
	      if (c > 99)
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar('0' + cien);
		  _putchar('0' + diez);
		  _putchar('0' + uno);
		}
	      else if (c > 9)
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar(' ');
		  _putchar('0' + diez);
		  _putchar('0' + uno);
		}
	      else
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar(' ');
		  _putchar(' ');
		  _putchar('0' + uno);
		}
	    }
	}
      _putchar('\n');
    }
}
}

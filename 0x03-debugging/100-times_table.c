#include "holberton.h"
/**
 * times_table - create a table of multiplication facts
 *
 * Return: print to stdout the 9 times table, starting with 0.
 */
void print_times_table(int d)
{
  int a, b, c;

  for (a = 0; a <= d; a++)
    {
      for (b = 0; b <= d; b++)
	{
	  c = a * b;
	  if (c > 9)
	    {
	      if (b == 0)
		{
		  putchar('0' + c);
		}
	      else if (c < 100)
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar('0' + c);
		}
	      else 
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar(' ');
		  _putchar('0' + c);
		}
	    }
	  else
	    {
	      if (b == 0)
		{
		  _putchar('0' + c);
		}
	      else
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar(' ');
		  _putchar('0' + c);
		}
	    }
	}
      _putchar('\n');
    }
}

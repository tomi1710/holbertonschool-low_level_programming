#include "holberton.h"

void _print_rev_recursion(char *s)
{

  int i;

  for (i = 0; s[i] != '\0'; i++)
    {
    }
  i--;
  for (; i >= 0; i--)
    {
      _putchar(s[i]);
    }
}

#include "holberton.h"
/**
 *_pow_recursion - asdasda sd
 *@x: asadadsada
 *@y: asdad adad
 *Return: as addasd
 */
int _pow_recursion(int x, int y)
{
  if (y == 0)
    {
      return (1);
    }
  else if (y < 0)
    {
      return (-1);
    }
  else if (y == 1)
    {
      return (x);
    }
  else
    {
      return (_pow_recursion(x, y - 1));
      x = x * x;
    }
  return (0);
}

#include "holberton.h"
/**
 *_pow_recursion - asdasda sd
 *@x: asadadsada
 *@y: asdad adad
 *Return: as addasd
 */
int _pow_recursion(int x, int y)
{
int i, pow = 1;
if (y > 0)
{
for (i = 1; i <= y; i++)
{
pow = pow *x;
}
}
else if (y == 0)
{
pow = 1;
}
else
{
pow = -1;
}
return (pow);
}

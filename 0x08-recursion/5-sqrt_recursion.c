#include "holberton.h"
int _sqrt_recursion(int n);
/**
 *_square - asdasdadss
 *@a: adsadasdasd
 *@b: asdasdad
 *Return: asdasdadasd
 */
int _square(int a, int b)
{
if (b == a && a == 1)
{
return (1);
}
else if (b == a || b <= 0)
{
return (-1);
}
else if (b == (a * a))
{
return (a);
}
else
{
return (_square(a + 1, b));
}
}
/**
 *_sqrt_recursion - asdadsad
 *@n: asdadadasd
 *Return: adssasdadss
 */
int _sqrt_recursion(int n)
{
return (_square(1, n));
}

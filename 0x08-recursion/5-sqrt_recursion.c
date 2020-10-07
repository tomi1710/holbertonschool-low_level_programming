#include "holberton.h"
/**
 *_sqrt_recursion - asdasdadss
 *@n: adsadasdasd
 *Return: asdasdadasd
 */
int _sqrt_recursion(int n)
{
int i, sqrt;
for (i = 0; i <= n; i++)
{
sqrt = i * i;
if (sqrt == n)
{
return (i);
}
}
return (-1);
}

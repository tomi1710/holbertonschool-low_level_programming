#include "holberton.h"
/**
 *factorial - asasdsa
 *@n: adsfafafs
 *Return: fsdfsffsf
 */
int factorial(int n)
{
int i, fac = 1;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
fac = fac *i;
}
}
else if (n == 0)
{
fac = 1;
}
else
{
fac = -1;
}
return (fac);
}

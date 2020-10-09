#include "holberton.h"
int is_prime_number(int n);
/**
 *_prime - asdasdad
 *@a: asdadsadad
 *@b: asdadasd
 *Return: asdadssasda
 */
int _prime(int a, int b)
{
if (b <= 1)
{
return (0);
}
else if ((b % a) == 0 && a != b)
{
return (0);
}
else if (a == b)
{
return (1);
}
else
{
return (_prime(a + 1, b));
}
}
/**
 *is_prime_number - asdasdad
 *@n: asdadsadssad
 *Return: asdadasdad
 */
int is_prime_number(int n)
{
return (_prime(2, n));
}

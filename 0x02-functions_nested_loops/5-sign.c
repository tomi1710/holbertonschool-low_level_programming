#include "holberton.h"
/**
 * _isalpha - check c for alphabetic character
 * @c: string
 *
 * Return: 1 if c is a letter, 0 if not
 */
int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

#include "holberton.h"
/**
 *print_last_digit - function to determine last digit
 *@a: integer
 *
 *Return: the value of the last digit
 */
int print_last_digit(int a)
{

int l = a % 10;

if (l < 0)
{
l = l * -1;
}
else
{
}
_putchar('0' + l);
return (l);
}

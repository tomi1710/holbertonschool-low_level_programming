#include "holberton.h"

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

#include "holberton.h"
/**
 * times_table - create a table of multiplication facts
 *
 * Return: print to stdout the 9 times table, starting with 0.
 */
void times_table(void)
{
int a, b, c, lastDigit;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c > 9)
{
lastDigit = c % 10;
c = c / 10;
if (b == 0)
{
_putchar('0' + c);
_putchar('0' + lastDigit);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + c);
_putchar('0' + lastDigit);
}
}
else
{
if (b == 0)
{
_putchar('0' + c);
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + c);
}
}
}
_putchar('\n');
}
}

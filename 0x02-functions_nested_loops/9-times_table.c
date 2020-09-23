#include "holberton.h"
/**
 * times_table - create a table of multiplication facts
 *
 * Return: print to stdout the 9 times table, starting with 0.
 */
void times_table(void)
{

int a, b, c, lastDigit;
a = 0;
b = 0;

while (a < 10)
{
b = 0;
while (b < 10)
{
c = a *b;
if (c > 9)
{
lastDigit = c % 10;
while (c >= 10)
{
c = c / 10;
}
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
b++;
}
_putchar('\n');
a++;
}
}

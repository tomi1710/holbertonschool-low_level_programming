#include "holberton.h"
/**
 * jack_bauer - Write a function that prints every minute of the day
 *
 * Return: print every minute from 00:00 to 23:49
 */
void jack_bauer(void)
{
int a, b, c, d;

for (a = '0'; a <= '1'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '5'; c++)
{
for (d = '0'; d <= '9'; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
for (a = '2'; a <= '2'; a++)
{
for (b = '0'; b <= '4'; b++)
{
for (c = '0'; c <= '5'; c++)
{
for (d = '0'; d <= '9'; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}

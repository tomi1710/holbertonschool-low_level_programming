#include "holberton.h"
/**
 *more_numbers - print numbers form 0 to 14, 10 times
 */
void more_numbers(void)
{
int a, b, f, l;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 14; b++)
{
f = b / 10;
l = b % 10;
if (b > 9)
{
_putchar('0' + f);
}
_putchar('0' + l);
}
_putchar('\n');
}
}

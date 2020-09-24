#include "holberton.h"
/**
 *print_line - print n amount of underscores
 *@n: the amount of underscors
 */
void print_line(int n)
{
if (n > 0)
{
for (n = n; n > 0; n--)
{
_putchar('_');
}
}
_putchar('\n');
}

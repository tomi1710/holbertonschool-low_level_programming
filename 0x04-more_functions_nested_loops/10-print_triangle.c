#include "holberton.h"
/**
 *print_triangle - allallaal
 *@size: kfkfkfkf
 */
void print_triangle(int size)
{
int b, c, x, z;
x = size;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (b = 1; b <= size; b++)
{
x = x - 1;
for (c = 1; c <= x; c++)
{
_putchar(' ');
}
for (z = x; z < size; z++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

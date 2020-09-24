#include "holberton.h"
/**
 *print_square - prints a square
 *@size: determines the size of the square
 */
void print_square(int size)
{
int n1, n2;
n2 = size;
for (size = size; size > 0; size--)
{
n1 = 0;
do {
_putchar('#');
n1++;
} while (n1 != n2);
_putchar('\n');
}
}

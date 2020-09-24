#include "holberton.h"
/**
 *print_diagonal - prints diagonals
 *@n: length of diagonal
 */
void print_diagonal(int n)
{
int a, b;
a = 0;
for (n = n; n > 0; n--)
{
b = 0;
if (a == 0)
{
_putchar('\\');
b++;
}
else
{
do {
_putchar(' ');
b++;
} while (a != b);
_putchar('\\');
}
a++;
}
_putchar('\n');
}

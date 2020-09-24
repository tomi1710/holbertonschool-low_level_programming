#include "holberton.h"
/**
 *print_most_numbers - prints numbers form 0 to 9
 */
void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (a != 2 && a != 4)
{
_putchar('0' + a);
}
}
_putchar('\n');
}

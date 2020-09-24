#include "holberton.h"
/**
 *print_numbers - prints numbers form 0 to 9
 */
void print_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
_putchar('0' + a);
}
_putchar('\n');
}

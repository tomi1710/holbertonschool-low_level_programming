#include "holberton.h"
/**
 *_print_rev_recursion - asdadasd
 *@s: asdasdasda
 */
void _print_rev_recursion(char *s)
{
if (s[0] == '\0')
{
}
else
{
_print_rev_recursion(s + 1);
_putchar(s[0]);
}
}

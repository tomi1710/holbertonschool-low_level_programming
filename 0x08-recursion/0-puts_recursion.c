#include "holberton.h"
/**
 *_puts_recursion - asdadasda
 *@s: asadsadsasd
 */
void _puts_recursion(char *s)
{
_putchar(s[0]);
if (s[0] == '\0')
{
_putchar('\n');
}
else
{
_puts_recursion(s + 1);
}
}

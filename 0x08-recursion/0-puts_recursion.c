#include "holberton.h"
#include <stdio.h>
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
printf(s[0]);
_puts_recursion(s + 1);
}
}

#include "holberton.h"
/**
 *puts2 - aaaaa
 *@str: aaaaas
 */
void puts2(char *str)
{
int i, a;
for (i = 0; str[i] != '\0'; i++)
{
}
a = i;
for (i = 0; str[i] >= a; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

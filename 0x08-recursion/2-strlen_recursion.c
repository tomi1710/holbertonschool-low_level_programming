#include "holberton.h"
/**
 *_strlen_recursion - asdadasads
 *@s: asdsasdadsa
 *Return: asdsasdadsad
 */
int _strlen_recursion(char *s)
{
if (s[0] == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}

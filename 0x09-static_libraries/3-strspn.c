#include "holberton.h"
/**
 * _strspn - hfgh
 * @s: sdafasd
 * @accept: asadfsadf
 * Return: asdfasdsfdf
 */
unsigned int _strspn(char *s, char *accept)
{
int i, i2, cont = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (i2 = 0; accept[i2] != '\0'; i2++)
{
if (s[i] == accept[i2])
{
cont++;
break;
}
}
if (s[i] != accept[i2])
break;
}
return (cont);
}

#include "holberton.h"
/**
 *_strspn - asdadasd
 *@s: adsdadasd
 *@accept: adsadads
 *Return: adasdasdad
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, a = 0, b;
for (; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
i++;
}
}
if (i == a)
{
return (i);
}
}
return (i);
}

#include "holberton.h"
/**
 *_strchr - adsafas
 *@s: safadadss
 *@c: asdasdadas
 *Return: asdawds
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != c)
{
i++;
}
if (i < c)
{
s = &s[i];
}
else
{
s = 0;
}
return (s);
}

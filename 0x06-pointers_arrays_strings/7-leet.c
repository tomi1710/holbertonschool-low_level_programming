#include "holberton.h"
/**
 *leet - ddddddd
 *@s: asdadasfs
 *Return: adsfafafds
 */
char *leet(char *s)
{
int i, i2;
char s2[20] = {"a4A4e3E3o0O0t7T7l1L1"};
for (i = 0; s[i] != '\0'; i++)
{
for (i2 = 0; s2[i2] != '\0'; i2 = i2 + 2)
{
if (s[i] == s2[i2])
{
s[i] = s2[i2 + 1];
}
}
}
return (s);
}

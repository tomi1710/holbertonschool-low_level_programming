#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings into a new one
 *@s1: fist string
 *@s2: second string
 *Return: returns new string
 */
char *str_concat(char *s1, char *s2)
{
int i, i2, i3;
char *p;
for (i = 0; s1[i] != '\0'; i++)
{
}
for (i2 = 0; s2[i2] != '\0'; i2++)
{
}
i2 = i2 + i;
p = (char *)malloc(sizeof(char) * i2);
if (p == NULL || i2 == 0)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
p[i] = s1[i];
}
for (i3 = 0; s2[i3] != '\0'; i3++)
{
p[i] = s2[i3];
i++;
}
i++;
p[i] = '\0';
return (p);
}

#include "holberton.h"
#include <stdio.h>
/**
 *is_palindrome - asdadads
 *@s: adsasdadsad
 *Return: asdadssada
 */
int is_palindrome(char *s)
{
char arr[98];
int i, a = 0;
for (i = 0; s[i] != '\0'; i++)
{
}
i--;
for (; i >= 0; i--)
{
arr[a] = s[i];
a++;
}
printf("%s\n", arr);
a = 0;
while (arr[a] == s[a])
{
a++;
}
if (a == (i + 1))
{
return (0);
}
return (1);
}

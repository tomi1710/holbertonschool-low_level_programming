#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings into a knew one
 *@s1: fist string
 *@s2: second string
 *@n: amount of characters to print from s2
 *Return: knew string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, i2, i3, i4 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	if (i > 0)
		i--;
	if (s2 == NULL)
		s2 = "";
	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
	}

	if (n < i2)
		i2 = n;

	p = malloc(i + i2);
	if (p == NULL)
		return (NULL);
	if (i != 0)
	{
	for (i3 = 0; i3 <= i; i3++)
	{
		p[i4] = s1[i3];
		i4++;
	}
	}
	for (i3 = 0; i3 < i2; i3++)
	{
		p[i4] = s2[i3];
		i4++;
	}
	p[i4] = '\0';
	return (p);
}

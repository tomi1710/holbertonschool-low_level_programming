#include "holberton.h"
/**
 *_strncat - asdasd
 *@dest: adasdads
 *@src: asdadasd
 *@n: asdasads
 *Return: asafafs
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (a = 0; a != n; a++)
	{
		dest[i] = src[a];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

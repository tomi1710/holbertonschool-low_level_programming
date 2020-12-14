#include "holberton.h"
/**
 *_memcpy - adsad
 *@dest: asdasf
 *@src: asafafs
 *@n: asfaf
 *Return: faefsdf
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

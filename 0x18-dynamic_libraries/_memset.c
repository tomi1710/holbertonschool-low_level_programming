#include "holberton.h"
/**
 *_memset - asdsadas
 *@s: adsaddsa
 *@b: adwdsadwa
 *@n: adsadwad
 *Return: adwadsa
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

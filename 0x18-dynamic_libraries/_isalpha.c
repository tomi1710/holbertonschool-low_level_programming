#include "holberton.h"
/**
 * _isalpha - check c for alphabetic character
 * @c: string
 *
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

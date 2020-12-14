#include "holberton.h"
/**
 *_isdigit - checks if c is digit
 *@c: input
 *Return: returns 1 if c is digit, else returns 0
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

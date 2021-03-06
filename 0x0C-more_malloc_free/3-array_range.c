#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: start of array
 *@max: end of array
 *Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p, i, min1 = min;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (max - min); i++)
	{
		p[i] = min1;
		min1++;
	}

	return (p);
}

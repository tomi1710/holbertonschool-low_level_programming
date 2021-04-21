#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array to check
 * @size: size of array
 * @value: value to search
 * Return: returns the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i = 0;
	unsigned int j = 0;

	if (array == NULL)
		return (-1);
	if (!value)
		return (-1);
	if (value < 0)
		return (-1);
	printf("Searching in array: ");
	for (; j < (size - 1); j++)
	{
		printf("%d, ", array[j]);
	}
	printf("%d\n", array[size - 1]);
	while (left < right)
	{
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
			return (mid);
		printf("Searching in array: ");
		for (i = left; i <= (right - 1); i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);
	}
	return (-1);
}

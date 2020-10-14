#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - generates matrix
 * @grid: width of matrix
 * @height: height of matrix
 * Return: pointer to matrix
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
}

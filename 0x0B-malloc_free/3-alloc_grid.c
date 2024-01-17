#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to array of int
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
			free(grid[x]);
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			grid[x][y] = 0;

	return (grid);
}

#include "main.h"
#include <stdlib.h>
/**
 * array_range - array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int x, y;
	int *point;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	point = malloc(sizeof(int) * y);
	if (point == NULL)
		return (NULL);
	for (x = 0; x < y; x++)
	{
		point[x] = min;
		min++;
	}
	return (point);
}

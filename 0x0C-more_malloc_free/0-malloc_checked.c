#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocating memory using malloc
 * @b: int value
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);
	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}

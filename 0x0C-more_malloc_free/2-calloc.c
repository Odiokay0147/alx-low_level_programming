#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		point[x] = 0;
	return (point);
}

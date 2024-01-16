#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of
 * chars, and initializes it with a specific char
 *
 * @size: size of the char
 * @char: character
 * Return: pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *point;

	if (size == 0)
	{
		return (NULL);
	}
	point = malloc(sizeof(char) * size);
	if (point == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		point[k] = c;
	}
	return (point);
}

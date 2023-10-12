#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - prints fuction that search an integer
 * @array: array to print
 * @size: number of elements in the array
 * @cmp: pointer to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

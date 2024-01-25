#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: array of the function
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of first elements otherwise -1
 * if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}

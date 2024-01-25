#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * as a parameter on each element of array
 *
 * @array: array of the element
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(*array);
		array++;
	}
}

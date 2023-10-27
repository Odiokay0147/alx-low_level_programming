#include "main.h"

/**
 * clear_bit - set the vamue of a bit to 0 at a given index
 * @index: index of the bit to set starting from 0
 * @n: pointer to bit
 * Return: 1 if it worked, -1 if not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cover;

	cover = 1;
	cover = cover << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = cover ^ *n;
	return (1);
}

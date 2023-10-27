#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @index: index to set starting from 0
 * @n: pointer to index number
 * Return: 1 if it worked and -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cover;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	cover = 1;
	cover = cover << index;
	*n = ((*n) | cover);
	return (1);
}

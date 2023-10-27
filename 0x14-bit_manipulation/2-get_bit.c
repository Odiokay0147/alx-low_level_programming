#include "main.h"

/**
 * get_bit - returns the value of a bit at a given indec
 * @index: index of the bit to get
 * @n: number of bit
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));
}

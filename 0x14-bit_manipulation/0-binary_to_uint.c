#include "main.h"
/**
 * binary_to_uint - converts binaney numbers
 * to integer
 *
 * @b: pointer to a string containing binary
 * numbers
 *
 * Return: the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t j = 0;
	size_t k = 0;
	size_t sum = 0;
	size_t pow = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
			return (b[0] - 48);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		return (0);
		for (k = len - 1; k > 0; k--)
		pow = pow * base;
		sum = sum + (pow * (b[j] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}

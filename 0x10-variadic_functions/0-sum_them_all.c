#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int x;

	va_list temphold;

	va_start(temphold, n);

	for (x = 0; x < n; x++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(temphold, const unsigned int);
		}
	}
	va_end(temphold);
	return (sum);
}

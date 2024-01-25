#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, y;

	va_list point;

	va_start(point, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(point, const unsigned int);
		printf("%d", y);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(point);
}
